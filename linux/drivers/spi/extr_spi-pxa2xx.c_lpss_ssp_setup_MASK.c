
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lpss_config {scalar_t__ reg_cs_ctrl; scalar_t__ reg_ssp; scalar_t__ reg_general; scalar_t__ offset; } ;
struct driver_data {TYPE_1__* controller_info; scalar_t__ ioaddr; scalar_t__ lpss_base; } ;
struct TYPE_2__ {scalar_t__ enable_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct driver_data*,scalar_t__) ;
 int FUNC_1 (struct driver_data*,scalar_t__,int) ;
 struct lpss_config* FUNC_2 (struct driver_data*) ;

__attribute__((used)) static void FUNC_3(struct driver_data *VAR_3)
{
 const struct lpss_config *VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_2(VAR_3);
 VAR_3->lpss_base = VAR_3->ioaddr + VAR_4->offset;


 VAR_5 = FUNC_0(VAR_3, VAR_4->reg_cs_ctrl);
 VAR_5 &= ~(VAR_1 | VAR_0);
 VAR_5 |= VAR_1 | VAR_0;
 FUNC_1(VAR_3, VAR_4->reg_cs_ctrl, VAR_5);


 if (VAR_3->controller_info->enable_dma) {
  FUNC_1(VAR_3, VAR_4->reg_ssp, 1);

  if (VAR_4->reg_general >= 0) {
   VAR_5 = FUNC_0(VAR_3,
           VAR_4->reg_general);
   VAR_5 |= VAR_2;
   FUNC_1(VAR_3,
           VAR_4->reg_general, VAR_5);
  }
 }
}
