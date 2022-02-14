
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si476x_core {int dummy; } ;


 int FUNC_0 (struct si476x_core*,unsigned int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned int VAR_1,
       unsigned *VAR_2)
{
 struct si476x_core *VAR_3 = VAR_0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_2 = VAR_4;

 return 0;
}
