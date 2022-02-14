
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cardstate {int commands_pending; int lock; } ;
struct bc_state {char** commands; int chstate; } ;
struct at_state_t {unsigned int seq_index; int pending_commands; struct cardstate* cs; struct bc_state* bcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct at_state_t *VAR_5, void *VAR_6,
         unsigned VAR_7)
{
 struct bc_state *VAR_8 = VAR_5->bcs;
 struct cardstate *VAR_9 = VAR_5->cs;
 char **VAR_10 = VAR_6;
 unsigned long VAR_11;
 int VAR_12;

 VAR_8->chstate |= VAR_1;

 FUNC_2(&VAR_9->lock, VAR_11);
 if (VAR_5->seq_index != VAR_7) {
  FUNC_3(&VAR_9->lock, VAR_11);
  goto error;
 }
 FUNC_3(&VAR_9->lock, VAR_11);

 for (VAR_12 = 0; VAR_12 < VAR_0; ++VAR_12) {
  FUNC_1(VAR_8->commands[VAR_12]);
  VAR_8->commands[VAR_12] = VAR_10[VAR_12];
 }

 VAR_5->pending_commands |= VAR_3;
 FUNC_0(VAR_2, "Scheduling PC_CID");
 VAR_9->commands_pending = 1;
 return;

error:
 for (VAR_12 = 0; VAR_12 < VAR_0; ++VAR_12) {
  FUNC_1(VAR_10[VAR_12]);
  VAR_10[VAR_12] = ((void*)0);
 }
 VAR_5->pending_commands |= VAR_4;
 FUNC_0(VAR_2, "Scheduling PC_NOCID");
 VAR_9->commands_pending = 1;
 return;
}
