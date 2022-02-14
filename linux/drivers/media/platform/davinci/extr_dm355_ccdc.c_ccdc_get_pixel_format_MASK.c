
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ccdc_a_law {scalar_t__ enable; } ;
struct TYPE_7__ {scalar_t__ pix_order; } ;
struct TYPE_5__ {struct ccdc_a_law alaw; } ;
struct TYPE_6__ {TYPE_1__ config_params; } ;
struct TYPE_8__ {scalar_t__ if_type; TYPE_3__ ycbcr; TYPE_2__ bayer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__ VAR_6 ;

__attribute__((used)) static u32 FUNC_0(void)
{
 struct ccdc_a_law *VAR_7 = &VAR_6.bayer.config_params.alaw;
 u32 VAR_8;

 if (VAR_6.if_type == VAR_5)
  if (VAR_7->enable)
   VAR_8 = VAR_2;
  else
   VAR_8 = VAR_1;
 else {
  if (VAR_6.ycbcr.pix_order == VAR_0)
   VAR_8 = VAR_4;
  else
   VAR_8 = VAR_3;
 }
 return VAR_8;
}
