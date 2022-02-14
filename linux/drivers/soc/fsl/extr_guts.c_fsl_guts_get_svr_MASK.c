
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* regs; scalar_t__ little_endian; } ;
struct TYPE_3__ {int svr; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u32 FUNC_2(void)
{
 u32 VAR_1 = 0;

 if (!VAR_0 || !VAR_0->regs)
  return VAR_1;

 if (VAR_0->little_endian)
  VAR_1 = FUNC_0(&VAR_0->regs->svr);
 else
  VAR_1 = FUNC_1(&VAR_0->regs->svr);

 return VAR_1;
}
