
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smi_port {int idx; int fe_type; struct smi_dev* dev; } ;
struct smi_dev {TYPE_1__* info; } ;
struct TYPE_2__ {int ts_0; int ts_1; int fe_1; int fe_0; } ;


 int FUNC_0 (struct smi_port*) ;
 int FUNC_1 (struct smi_port*) ;
 int FUNC_2 (struct smi_port*) ;
 int FUNC_3 (struct smi_port*) ;
 int FUNC_4 (struct smi_port*,int) ;

__attribute__((used)) static int FUNC_5(struct smi_dev *VAR_0,
  struct smi_port *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_1->dev = VAR_0;
 VAR_1->idx = VAR_2;
 VAR_1->fe_type = (VAR_2 == 0) ? VAR_0->info->fe_0 : VAR_0->info->fe_1;
 VAR_4 = (VAR_2 == 0) ? VAR_0->info->ts_0 : VAR_0->info->ts_1;

 VAR_3 = FUNC_4(VAR_1, VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 < 0)
  goto err_del_port_init;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 < 0)
  goto err_del_dvb_init;
 return 0;
err_del_dvb_init:
 FUNC_0(VAR_1);
err_del_port_init:
 FUNC_3(VAR_1);
 return VAR_3;
}
