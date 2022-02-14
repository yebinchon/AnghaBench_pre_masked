
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
 size_t VAR_3 ;
 unsigned int FUNC_0 (int,int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct sh_pfc *VAR_5, unsigned int VAR_6,
       u32 *VAR_7)
{
 int VAR_8 = VAR_6 & 0x1f;

 *VAR_7 = VAR_4[VAR_1].reg;
 if (VAR_6 >= FUNC_0(0, 0) && VAR_6 <= FUNC_0(0, 21))
  return VAR_8;
 else if (VAR_6 >= FUNC_0(2, 0) && VAR_6 <= FUNC_0(2, 9))
  return VAR_8 + 22;

 *VAR_7 = VAR_4[VAR_2].reg;
 if (VAR_6 >= FUNC_0(2, 10) && VAR_6 <= FUNC_0(2, 16))
  return VAR_8 - 10;
 if ((VAR_6 >= FUNC_0(2, 17) && VAR_6 <= FUNC_0(2, 24)) ||
     (VAR_6 >= FUNC_0(3, 0) && VAR_6 <= FUNC_0(3, 16)))
  return VAR_8 + 7;

 *VAR_7 = VAR_4[VAR_3].reg;
 if (VAR_6 >= FUNC_0(2, 25) && VAR_6 <= FUNC_0(2, 29))
  return VAR_6 - 25;

 return -VAR_0;
}
