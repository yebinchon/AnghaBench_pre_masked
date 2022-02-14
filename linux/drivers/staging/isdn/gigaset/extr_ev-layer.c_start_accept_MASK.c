
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {int commands_pending; int dev; } ;
struct bc_state {int proto2; int channel; int ** commands; } ;
struct at_state_t {int pending_commands; struct cardstate* cs; struct bc_state* bcs; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int,char*,int) ;

__attribute__((used)) static void FUNC_5(struct at_state_t *VAR_7)
{
 struct cardstate *VAR_8 = VAR_7->cs;
 struct bc_state *VAR_9 = VAR_7->bcs;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_1; ++VAR_10) {
  FUNC_2(VAR_9->commands[VAR_10]);
  VAR_9->commands[VAR_10] = ((void*)0);
 }

 VAR_9->commands[VAR_2] = FUNC_3(9, VAR_4);
 VAR_9->commands[VAR_0] = FUNC_3(9, VAR_4);
 if (!VAR_9->commands[VAR_2] || !VAR_9->commands[VAR_0]) {
  FUNC_0(VAR_7->cs->dev, "out of memory\n");

  VAR_7->pending_commands |= VAR_6;
  FUNC_1(VAR_3, "Scheduling PC_HUP");
  VAR_8->commands_pending = 1;
  return;
 }

 FUNC_4(VAR_9->commands[VAR_2], 9, "^SBPR=%u\r", VAR_9->proto2);
 FUNC_4(VAR_9->commands[VAR_0], 9, "^SISO=%u\r", VAR_9->channel + 1);

 VAR_7->pending_commands |= VAR_5;
 FUNC_1(VAR_3, "Scheduling PC_ACCEPT");
 VAR_8->commands_pending = 1;
}
