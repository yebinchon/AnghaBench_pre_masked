
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct AdapterControlBlock {TYPE_1__ eternal_timer; int fw_flag; int ante_token_value; int rq_map_token; int arcmsr_do_message_isr_bh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct AdapterControlBlock *VAR_5)
{
 FUNC_0(&VAR_5->arcmsr_do_message_isr_bh, VAR_2);
 FUNC_2(&VAR_5->rq_map_token, 16);
 FUNC_2(&VAR_5->ante_token_value, 16);
 VAR_5->fw_flag = VAR_0;
 FUNC_4(&VAR_5->eternal_timer, VAR_3, 0);
 VAR_5->eternal_timer.expires = VAR_4 + FUNC_3(6 * VAR_1);
 FUNC_1(&VAR_5->eternal_timer);
}
