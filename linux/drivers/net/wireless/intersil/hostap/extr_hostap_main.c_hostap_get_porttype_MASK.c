
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ iw_mode; scalar_t__ pseudo_adhoc; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

u16 FUNC_0(local_info_t *VAR_9)
{
 if (VAR_9->iw_mode == VAR_5 && VAR_9->pseudo_adhoc)
  return VAR_3;
 if (VAR_9->iw_mode == VAR_5)
  return VAR_2;
 if (VAR_9->iw_mode == VAR_6)
  return VAR_0;
 if (VAR_9->iw_mode == VAR_8)
  return VAR_4;
 if (VAR_9->iw_mode == VAR_7)
  return VAR_3;
 return VAR_1;
}
