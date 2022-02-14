
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct et131x_adapter {TYPE_3__* regs; } ;
struct TYPE_5__ {int cfg1; } ;
struct TYPE_4__ {int sw_reset; } ;
struct TYPE_6__ {TYPE_2__ mac; TYPE_1__ global; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct et131x_adapter *VAR_7)
{
 u32 VAR_8;


 VAR_8 = VAR_5 | VAR_4 |
       VAR_1 | VAR_3 |
       VAR_0 | VAR_2;
 FUNC_0(VAR_8, &VAR_7->regs->mac.cfg1);

 VAR_8 = VAR_6;
 FUNC_0(VAR_8, &VAR_7->regs->global.sw_reset);

 VAR_8 = VAR_1 | VAR_3 |
       VAR_0 | VAR_2;
 FUNC_0(VAR_8, &VAR_7->regs->mac.cfg1);
 FUNC_0(0, &VAR_7->regs->mac.cfg1);
}
