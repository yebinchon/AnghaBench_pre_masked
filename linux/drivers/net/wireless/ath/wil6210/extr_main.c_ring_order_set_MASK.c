
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct kernel_param {scalar_t__ arg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_3, const struct kernel_param *VAR_4)
{
 int VAR_5;
 uint VAR_6;

 VAR_5 = FUNC_0(VAR_3, 0, &VAR_6);
 if (VAR_5)
  return VAR_5;

 if ((VAR_6 < VAR_2) || (VAR_6 > VAR_1))
  return -VAR_0;

 *((uint *)VAR_4->arg) = VAR_6;

 return 0;
}
