
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,int*) ;
 int FUNC_1 (char const*,struct kernel_param const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, const struct kernel_param *VAR_2)
{
 int VAR_3 = 0, VAR_4;

 VAR_4 = FUNC_0(VAR_1, 10, &VAR_3);
 if (VAR_4 != 0 || VAR_3 < 2)
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_2);
}
