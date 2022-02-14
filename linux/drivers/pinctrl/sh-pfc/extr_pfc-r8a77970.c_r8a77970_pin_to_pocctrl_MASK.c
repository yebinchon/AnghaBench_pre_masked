
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sh_pfc {int dummy; } ;
struct TYPE_2__ {int reg; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 unsigned int FUNC_0 (int,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_1(struct sh_pfc *VAR_4, unsigned int VAR_5,
       u32 *VAR_6)
{
 int VAR_7 = VAR_5 & 0x1f;

 *VAR_6 = VAR_3[VAR_1].reg;
 if (VAR_5 >= FUNC_0(0, 0) && VAR_5 <= FUNC_0(0, 21))
  return VAR_7;
 if (VAR_5 >= FUNC_0(2, 0) && VAR_5 <= FUNC_0(2, 9))
  return VAR_7 + 22;

 *VAR_6 = VAR_3[VAR_2].reg;
 if (VAR_5 >= FUNC_0(2, 10) && VAR_5 <= FUNC_0(2, 16))
  return VAR_7 - 10;
 if (VAR_5 >= FUNC_0(3, 0) && VAR_5 <= FUNC_0(3, 16))
  return VAR_7 + 7;

 return -VAR_0;
}
