
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct et131x_adapter {scalar_t__ flow; TYPE_2__* regs; } ;
struct TYPE_3__ {int int_mask; } ;
struct TYPE_4__ {TYPE_1__ global; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct et131x_adapter *VAR_4)
{
 u32 VAR_5;

 if (VAR_4->flow == VAR_1 || VAR_4->flow == VAR_0)
  VAR_5 = VAR_2;
 else
  VAR_5 = VAR_3;

 FUNC_0(VAR_5, &VAR_4->regs->global.int_mask);
}
