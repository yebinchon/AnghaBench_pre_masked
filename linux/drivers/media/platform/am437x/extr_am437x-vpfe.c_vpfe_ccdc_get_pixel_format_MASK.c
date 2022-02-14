
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ pix_order; } ;
struct TYPE_4__ {scalar_t__ if_type; TYPE_1__ ycbcr; } ;
struct vpfe_ccdc {TYPE_2__ ccdc_cfg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static u32 FUNC_0(struct vpfe_ccdc *VAR_4)
{
 u32 VAR_5;

 if (VAR_4->ccdc_cfg.if_type == VAR_3) {
  VAR_5 = VAR_2;
 } else {
  if (VAR_4->ccdc_cfg.ycbcr.pix_order == VAR_0)
   VAR_5 = VAR_2;
  else
   VAR_5 = VAR_1;
 }

 return VAR_5;
}
