
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int*) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const char *VAR_2,
      const struct kernel_param *VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_0(VAR_2, 0, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_5 > 1) {
  FUNC_1("Invalid block netlink value %u\n", VAR_5);
  return -VAR_0;
 }

 VAR_1 = VAR_5;
 return 0;
}
