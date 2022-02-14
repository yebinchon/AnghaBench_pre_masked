
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct at86rf230_state_change {void (* complete ) (void*) ;int to_state; } ;
struct at86rf230_local {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct at86rf230_local*,int ,struct at86rf230_state_change*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct at86rf230_local *VAR_2,
        struct at86rf230_state_change *VAR_3,
        const u8 VAR_4, void (*VAR_5)(void *VAR_6))
{

 VAR_3->to_state = VAR_4;
 VAR_3->complete = VAR_5;
 FUNC_0(VAR_2, VAR_0, VAR_3,
     VAR_1);
}
