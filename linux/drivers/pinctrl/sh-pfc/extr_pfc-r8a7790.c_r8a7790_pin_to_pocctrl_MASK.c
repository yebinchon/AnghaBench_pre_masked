
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_pfc {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct sh_pfc *VAR_1, unsigned int VAR_2, u32 *VAR_3)
{
 if (VAR_2 < FUNC_0(3, 0) || VAR_2 > FUNC_0(3, 31))
  return -VAR_0;

 *VAR_3 = 0xe606008c;

 return 31 - (VAR_2 & 0x1f);
}
