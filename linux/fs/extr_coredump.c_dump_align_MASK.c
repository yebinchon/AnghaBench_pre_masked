
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coredump_params {int pos; } ;


 int FUNC_0 (struct coredump_params*,int) ;

int FUNC_1(struct coredump_params *VAR_0, int VAR_1)
{
 unsigned VAR_2 = VAR_0->pos & (VAR_1 - 1);
 if (VAR_1 & (VAR_1 - 1))
  return 0;
 return VAR_2 ? FUNC_0(VAR_0, VAR_1 - VAR_2) : 1;
}
