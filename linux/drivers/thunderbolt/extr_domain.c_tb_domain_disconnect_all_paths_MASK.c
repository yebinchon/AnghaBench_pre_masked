
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb {int dummy; } ;


 int FUNC_0 (int *,int *,struct tb*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct tb*) ;

int FUNC_2(struct tb *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(&VAR_1, ((void*)0), VAR_2, VAR_0);
}
