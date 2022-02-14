
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_action {int err; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ,struct reg_action*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_1, struct reg_action *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2, 1);
 if (FUNC_0(VAR_3))
  return VAR_3;

 return VAR_2->err;
}
