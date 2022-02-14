
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ccdc_a_law {int enable; } ;
struct TYPE_7__ {int pix_order; } ;
struct TYPE_5__ {struct ccdc_a_law alaw; } ;
struct TYPE_6__ {int pix_fmt; TYPE_1__ config_params; } ;
struct TYPE_8__ {scalar_t__ if_type; TYPE_3__ ycbcr; TYPE_2__ bayer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_4__ VAR_9 ;

__attribute__((used)) static int FUNC_0(u32 VAR_10)
{
 struct ccdc_a_law *VAR_11 = &VAR_9.bayer.config_params.alaw;

 if (VAR_9.if_type == VAR_8) {
  VAR_9.bayer.pix_fmt = VAR_0;
  if (VAR_10 == VAR_5)
   VAR_11->enable = 1;
  else if (VAR_10 != VAR_4)
   return -VAR_3;
 } else {
  if (VAR_10 == VAR_7)
   VAR_9.ycbcr.pix_order = VAR_2;
  else if (VAR_10 == VAR_6)
   VAR_9.ycbcr.pix_order = VAR_1;
  else
   return -VAR_3;
 }
 return 0;
}
