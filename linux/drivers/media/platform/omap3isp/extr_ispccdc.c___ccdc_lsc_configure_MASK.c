
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma; } ;
struct ispccdc_lsc_config_req {TYPE_1__ table; int config; int enable; } ;
struct isp_ccdc_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct isp_ccdc_device*) ;
 int FUNC_1 (struct isp_ccdc_device*,int ) ;
 int FUNC_2 (struct isp_ccdc_device*,int *) ;
 scalar_t__ FUNC_3 (struct isp_ccdc_device*,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct isp_ccdc_device*) ;

__attribute__((used)) static int FUNC_6(struct isp_ccdc_device *VAR_2,
    struct ispccdc_lsc_config_req *VAR_3)
{
 if (!VAR_3->enable)
  return -VAR_1;

 if (FUNC_3(VAR_2, &VAR_3->config) < 0) {
  FUNC_4(FUNC_5(VAR_2), "Discard LSC configuration\n");
  return -VAR_1;
 }

 if (FUNC_0(VAR_2))
  return -VAR_0;

 FUNC_2(VAR_2, &VAR_3->config);
 FUNC_1(VAR_2, VAR_3->table.dma);
 return 0;
}
