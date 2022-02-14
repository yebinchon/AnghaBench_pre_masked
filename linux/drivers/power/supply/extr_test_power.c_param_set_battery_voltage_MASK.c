
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*,int*) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_2(const char *VAR_4,
     const struct kernel_param *VAR_5)
{
 int VAR_6;

 if (1 != FUNC_1(VAR_4, "%d", &VAR_6))
  return -VAR_0;

 VAR_2 = VAR_6;
 FUNC_0(VAR_3[VAR_1]);
 return 0;
}
