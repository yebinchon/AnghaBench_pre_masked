
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_item {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct virtual_item *VAR_1, int VAR_2,
          int VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_2 - VAR_2 % VAR_0;
 return VAR_5 ? : -1;
}
