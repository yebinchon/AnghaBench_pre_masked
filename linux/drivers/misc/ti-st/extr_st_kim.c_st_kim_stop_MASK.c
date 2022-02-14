
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct ti_st_plat_data {int (* chip_disable ) (struct kim_data_s*) ;} ;
struct kim_data_s {int nshutdown; int ldisc_installed; TYPE_3__* kim_pdev; scalar_t__ ldisc_install; TYPE_1__* core_data; } ;
struct TYPE_5__ {int kobj; struct ti_st_plat_data* platform_data; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
struct TYPE_4__ {struct tty_struct* tty; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct kim_data_s*) ;
 int FUNC_7 (int *,int *,char*) ;
 int FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (struct tty_struct*) ;
 long FUNC_10 (int *,int ) ;

long FUNC_11(void *VAR_4)
{
 long VAR_5 = 0;
 struct kim_data_s *VAR_6 = (struct kim_data_s *)VAR_4;
 struct ti_st_plat_data *VAR_7 =
  VAR_6->kim_pdev->dev.platform_data;
 struct tty_struct *VAR_8 = VAR_6->core_data->tty;

 FUNC_5(&VAR_6->ldisc_installed);

 if (VAR_8) {

  FUNC_9(VAR_8);
  FUNC_8(VAR_8);
 }


 FUNC_4("ldisc_install = 0");
 VAR_6->ldisc_install = 0;
 FUNC_7(&VAR_6->kim_pdev->dev.kobj, ((void*)0), "install");


 VAR_5 = FUNC_10(
  &VAR_6->ldisc_installed, FUNC_2(VAR_3));
 if (!VAR_5) {
  FUNC_3(" timed out waiting for ldisc to be un-installed");
  VAR_5 = -VAR_0;
 }


 FUNC_0(VAR_6->nshutdown, VAR_2);
 FUNC_1(1);
 FUNC_0(VAR_6->nshutdown, VAR_1);
 FUNC_1(1);
 FUNC_0(VAR_6->nshutdown, VAR_2);


 if (VAR_7->chip_disable)
  VAR_7->chip_disable(VAR_6);
 return VAR_5;
}
