
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {scalar_t__ pix_order; } ;
struct TYPE_6__ {scalar_t__ alg; } ;
struct TYPE_7__ {TYPE_1__ compress; } ;
struct TYPE_8__ {TYPE_2__ config_params; } ;
struct TYPE_10__ {scalar_t__ if_type; TYPE_4__ ycbcr; TYPE_3__ bayer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_5__ VAR_8 ;

__attribute__((used)) static u32 FUNC_0(void)
{
 u32 VAR_9;

 if (VAR_8.if_type == VAR_7)
  if (VAR_8.bayer.config_params.compress.alg == VAR_1 ||
      VAR_8.bayer.config_params.compress.alg == VAR_2)
   VAR_9 = VAR_4;
  else
   VAR_9 = VAR_3;
 else {
  if (VAR_8.ycbcr.pix_order == VAR_0)
   VAR_9 = VAR_6;
  else
   VAR_9 = VAR_5;
 }
 return VAR_9;
}
