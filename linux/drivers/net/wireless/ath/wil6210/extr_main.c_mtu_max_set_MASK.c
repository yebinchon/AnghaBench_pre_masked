
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,struct kernel_param const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_3, const struct kernel_param *VAR_4)
{
 int VAR_5;




 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_2 < 68 || VAR_2 > VAR_1)
  VAR_5 = -VAR_0;

 return VAR_5;
}
