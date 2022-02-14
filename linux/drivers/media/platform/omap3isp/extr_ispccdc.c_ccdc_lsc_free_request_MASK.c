
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dma; scalar_t__ addr; int sgt; } ;
struct TYPE_3__ {int size; } ;
struct ispccdc_lsc_config_req {TYPE_2__ table; TYPE_1__ config; } ;
struct isp_device {int dev; } ;
struct isp_ccdc_device {int dummy; } ;


 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (struct ispccdc_lsc_config_req*) ;
 int FUNC_2 (int *) ;
 struct isp_device* FUNC_3 (struct isp_ccdc_device*) ;

__attribute__((used)) static void FUNC_4(struct isp_ccdc_device *VAR_0,
      struct ispccdc_lsc_config_req *VAR_1)
{
 struct isp_device *VAR_2 = FUNC_3(VAR_0);

 if (VAR_1 == ((void*)0))
  return;

 if (VAR_1->table.addr) {
  FUNC_2(&VAR_1->table.sgt);
  FUNC_0(VAR_2->dev, VAR_1->config.size, VAR_1->table.addr,
      VAR_1->table.dma);
 }

 FUNC_1(VAR_1);
}
