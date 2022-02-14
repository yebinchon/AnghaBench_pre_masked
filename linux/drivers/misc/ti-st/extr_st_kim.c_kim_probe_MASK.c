
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ti_st_plat_data {int baud_rate; int flow_cntrl; int dev_name; int nshutdown_gpio; } ;
struct TYPE_4__ {int kobj; struct ti_st_plat_data* platform_data; } ;
struct platform_device {int id; TYPE_1__ dev; } ;
struct kim_data_s {TYPE_2__* core_data; int baud_rate; int flow_cntrl; int dev_name; int ldisc_installed; int kim_rcvd; struct platform_device* kim_pdev; int nshutdown; } ;
struct TYPE_5__ {struct kim_data_s* kim_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int ,int ,struct kim_data_s*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct kim_data_s*) ;
 int VAR_6 ;
 struct kim_data_s* FUNC_6 (int,int ) ;
 int VAR_7 ;
 int FUNC_7 (struct platform_device*,struct kim_data_s*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__**) ;
 struct platform_device** VAR_8 ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int *,int *) ;
 int VAR_9 ;
 scalar_t__ FUNC_14 (int) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_11)
{
 struct kim_data_s *VAR_12;
 struct ti_st_plat_data *VAR_13 = VAR_11->dev.platform_data;
 int VAR_14;

 if ((VAR_11->id != -1) && (VAR_11->id < VAR_3)) {

  VAR_8[VAR_11->id] = VAR_11;
 } else {

  VAR_8[0] = VAR_11;
 }

 VAR_12 = FUNC_6(sizeof(struct kim_data_s), VAR_2);
 if (!VAR_12) {
  FUNC_8("no mem to allocate");
  return -VAR_1;
 }
 FUNC_7(VAR_11, VAR_12);

 VAR_14 = FUNC_11(&VAR_12->core_data);
 if (VAR_14 != 0) {
  FUNC_8(" ST core init failed");
  VAR_14 = -VAR_0;
  goto err_core_init;
 }

 VAR_12->core_data->kim_data = VAR_12;


 VAR_12->nshutdown = VAR_13->nshutdown_gpio;
 VAR_14 = FUNC_3(VAR_12->nshutdown, "kim");
 if (FUNC_14(VAR_14)) {
  FUNC_8(" gpio %d request failed ", VAR_12->nshutdown);
  goto err_sysfs_group;
 }


 VAR_14 = FUNC_2(VAR_12->nshutdown, 0);
 if (FUNC_14(VAR_14)) {
  FUNC_8(" unable to configure gpio %d", VAR_12->nshutdown);
  goto err_sysfs_group;
 }


 VAR_12->kim_pdev = VAR_11;
 FUNC_4(&VAR_12->kim_rcvd);
 FUNC_4(&VAR_12->ldisc_installed);

 VAR_14 = FUNC_13(&VAR_11->dev.kobj, &VAR_9);
 if (VAR_14) {
  FUNC_8("failed to create sysfs entries");
  goto err_sysfs_group;
 }


 FUNC_12(VAR_12->dev_name, VAR_13->dev_name, VAR_5);
 VAR_12->flow_cntrl = VAR_13->flow_cntrl;
 VAR_12->baud_rate = VAR_13->baud_rate;
 FUNC_9("sysfs entries created\n");

 VAR_6 = FUNC_0("ti-st", ((void*)0));

 FUNC_1("version", VAR_4, VAR_6,
    VAR_12, &VAR_10);
 FUNC_1("protocols", VAR_4, VAR_6,
    VAR_12, &VAR_7);
 return 0;

err_sysfs_group:
 FUNC_10(VAR_12->core_data);

err_core_init:
 FUNC_5(VAR_12);

 return VAR_14;
}
