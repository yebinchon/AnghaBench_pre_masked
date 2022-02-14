
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sh_pfc {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct sh_pfc *VAR_1, unsigned int VAR_2,
       u32 *VAR_3)
{
 int VAR_4 = -VAR_0;

 *VAR_3 = 0xe60600b0;

 if (VAR_2 >= FUNC_0(0, 5) && VAR_2 <= FUNC_0(0, 10))
  VAR_4 = 0;

 if (VAR_2 >= FUNC_0(0, 13) && VAR_2 <= FUNC_0(0, 22))
  VAR_4 = 2;

 if (VAR_2 >= FUNC_0(4, 14) && VAR_2 <= FUNC_0(4, 19))
  VAR_4 = 1;

 return VAR_4;
}
