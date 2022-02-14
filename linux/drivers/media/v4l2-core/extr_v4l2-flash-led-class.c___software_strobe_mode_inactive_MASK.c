
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {scalar_t__ val; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct v4l2_ctrl **VAR_4)
{
 return ((VAR_4[VAR_0]->val != VAR_2) ||
  (VAR_4[VAR_1] && (VAR_4[VAR_1]->val !=
    VAR_3)));
}
