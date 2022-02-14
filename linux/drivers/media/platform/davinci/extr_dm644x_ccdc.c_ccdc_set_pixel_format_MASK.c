
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_9__ {int pix_order; } ;
struct TYPE_6__ {int enable; } ;
struct TYPE_7__ {TYPE_1__ alaw; } ;
struct TYPE_8__ {TYPE_2__ config_params; int pix_fmt; } ;
struct TYPE_10__ {scalar_t__ if_type; TYPE_4__ ycbcr; TYPE_3__ bayer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_5__ VAR_9 ;

__attribute__((used)) static int FUNC_0(u32 VAR_10)
{
 if (VAR_9.if_type == VAR_8) {
  VAR_9.bayer.pix_fmt = VAR_0;
  if (VAR_10 == VAR_5)
   VAR_9.bayer.config_params.alaw.enable = 1;
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
