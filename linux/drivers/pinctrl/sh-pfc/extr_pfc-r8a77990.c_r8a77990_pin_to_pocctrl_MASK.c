
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
 unsigned int FUNC_0 (int,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct sh_pfc *VAR_3, unsigned int VAR_4,
       u32 *VAR_5)
{
 int VAR_6 = -VAR_0;

 *VAR_5 = VAR_2[VAR_1].reg;

 if (VAR_4 >= FUNC_0(3, 0) && VAR_4 <= FUNC_0(3, 11))
  VAR_6 = VAR_4 & 0x1f;

 if (VAR_4 >= FUNC_0(4, 0) && VAR_4 <= FUNC_0(4, 10))
  VAR_6 = (VAR_4 & 0x1f) + 19;

 return VAR_6;
}
