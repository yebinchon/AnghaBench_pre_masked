
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int pix_order; } ;
struct TYPE_6__ {scalar_t__ alg; } ;
struct TYPE_7__ {TYPE_1__ compress; } ;
struct TYPE_8__ {int pix_fmt; TYPE_2__ config_params; } ;
struct TYPE_10__ {scalar_t__ if_type; void* data_pack; TYPE_4__ ycbcr; TYPE_3__ bayer; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ,char*) ;
 TYPE_5__ VAR_14 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_15)
{
 if (VAR_14.if_type == VAR_13) {
  if (VAR_15 == VAR_10) {
   if ((VAR_14.bayer.config_params.compress.alg !=
        VAR_4) &&
       (VAR_14.bayer.config_params.compress.alg !=
        VAR_5)) {
    FUNC_0(VAR_14.dev,
     "Either configure A-Law or DPCM\n");
    return -VAR_3;
   }
   VAR_14.data_pack = VAR_8;
  } else if (VAR_15 == VAR_9) {
   VAR_14.bayer.config_params.compress.alg =
     VAR_6;
   VAR_14.data_pack = VAR_7;
  } else
   return -VAR_3;
  VAR_14.bayer.pix_fmt = VAR_0;
 } else {
  if (VAR_15 == VAR_12)
   VAR_14.ycbcr.pix_order = VAR_2;
  else if (VAR_15 == VAR_11)
   VAR_14.ycbcr.pix_order = VAR_1;
  else
   return -VAR_3;
  VAR_14.data_pack = VAR_8;
 }
 return 0;
}
