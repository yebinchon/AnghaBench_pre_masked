
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nubus_rsrc {scalar_t__ dr_hw; scalar_t__ dr_sw; TYPE_1__* board; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct nubus_rsrc *VAR_12)
{
 if (VAR_12->dr_hw == VAR_6 &&
     VAR_12->dr_sw == VAR_11)
  return VAR_3;
 if (VAR_12->dr_hw == VAR_8 &&
     VAR_12->dr_sw == VAR_9) {

  if (FUNC_0(VAR_12->board->name, "DuoDock"))
   return VAR_4;
  else
   return VAR_0;
 }

 if (VAR_12->dr_hw == VAR_7 &&
     VAR_12->dr_sw == VAR_10)
  return VAR_2;

 if (VAR_12->dr_hw == VAR_5 &&
     VAR_12->dr_sw == 0) {
  return VAR_1;
 }
 return -1;
}
