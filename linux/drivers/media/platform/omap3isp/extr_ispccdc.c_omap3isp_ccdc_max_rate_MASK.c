
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isp_pipeline {int l3_ick; } ;
struct TYPE_2__ {int entity; } ;
struct isp_ccdc_device {scalar_t__ input; TYPE_1__ subdev; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 struct isp_pipeline* FUNC_1 (int *) ;

void FUNC_2(struct isp_ccdc_device *VAR_1,
       unsigned int *VAR_2)
{
 struct isp_pipeline *VAR_3 = FUNC_1(&VAR_1->subdev.entity);
 unsigned int VAR_4;

 if (VAR_3 == ((void*)0))
  return;





 if (VAR_1->input == VAR_0)
  VAR_4 = VAR_3->l3_ick / 2 * 9 / 10;
 else
  VAR_4 = VAR_3->l3_ick / 2;

 *VAR_2 = FUNC_0(*VAR_2, VAR_4);
}
