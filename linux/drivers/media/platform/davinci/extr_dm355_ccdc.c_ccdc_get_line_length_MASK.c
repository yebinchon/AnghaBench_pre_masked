
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ enable; } ;
struct ccdc_config_params_raw {scalar_t__ data_sz; TYPE_3__ alaw; } ;
struct TYPE_7__ {int width; } ;
struct TYPE_8__ {TYPE_1__ win; } ;
struct TYPE_10__ {unsigned int width; } ;
struct TYPE_11__ {TYPE_4__ win; struct ccdc_config_params_raw config_params; } ;
struct TYPE_12__ {scalar_t__ if_type; TYPE_2__ ycbcr; TYPE_5__ bayer; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_6__ VAR_2 ;

__attribute__((used)) static unsigned int FUNC_1(void)
{
 struct ccdc_config_params_raw *VAR_3 =
    &VAR_2.bayer.config_params;
 unsigned int VAR_4;

 if (VAR_2.if_type == VAR_1) {
  if ((VAR_3->alaw.enable) ||
      (VAR_3->data_sz == VAR_0))
   VAR_4 = VAR_2.bayer.win.width;
  else
   VAR_4 = VAR_2.bayer.win.width * 2;
 } else
  VAR_4 = VAR_2.ycbcr.win.width * 2;
 return FUNC_0(VAR_4, 32);
}
