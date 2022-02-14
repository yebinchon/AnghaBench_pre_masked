
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xtpg_device {int npads; TYPE_1__* pattern; int has_input; } ;
struct TYPE_2__ {int maximum; } ;


 int FUNC_0 (TYPE_1__*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct xtpg_device *VAR_0,
       bool VAR_1, bool VAR_2)
{
 u32 VAR_3 = (1 << (VAR_0->pattern->maximum + 1)) - 1;





 if (VAR_0->npads == 1 || !VAR_0->has_input)
  VAR_1 = 0;


 if (VAR_1)
  VAR_3 &= ~1;


 if (VAR_2)
  VAR_3 &= 1;

 FUNC_0(VAR_0->pattern, 0, VAR_0->pattern->maximum,
     VAR_3, VAR_2 ? 9 : 0);
}
