
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stfsm_seq {int addr_cfg; } ;
struct stfsm {TYPE_1__* info; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct stfsm *VAR_4,
           struct stfsm_seq *VAR_5)
{
 int VAR_6 = VAR_4->info->flags & VAR_3 ? 16 : 8;

 VAR_5->addr_cfg = (FUNC_0(VAR_6) |
    VAR_1 |
    FUNC_1(16) |
    VAR_2 |
    VAR_0);
}
