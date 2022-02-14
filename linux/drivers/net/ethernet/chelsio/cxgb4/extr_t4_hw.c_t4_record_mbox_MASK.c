
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_cmd_log {scalar_t__ cursor; scalar_t__ size; int seqno; } ;
struct mbox_cmd {int access; int execute; scalar_t__ seqno; int timestamp; scalar_t__* cmd; } ;
struct adapter {struct mbox_cmd_log* mbox_log; } ;
typedef int __be64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 int VAR_1 ;
 struct mbox_cmd* FUNC_1 (struct mbox_cmd_log*,int ) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_2,
      const __be64 *VAR_3, unsigned int VAR_4,
      int VAR_5, int VAR_6)
{
 struct mbox_cmd_log *VAR_7 = VAR_2->mbox_log;
 struct mbox_cmd *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_7, VAR_7->cursor++);
 if (VAR_7->cursor == VAR_7->size)
  VAR_7->cursor = 0;

 for (VAR_9 = 0; VAR_9 < VAR_4 / 8; VAR_9++)
  VAR_8->cmd[VAR_9] = FUNC_0(VAR_3[VAR_9]);
 while (VAR_9 < VAR_0 / 8)
  VAR_8->cmd[VAR_9++] = 0;
 VAR_8->timestamp = VAR_1;
 VAR_8->seqno = VAR_7->seqno++;
 VAR_8->access = VAR_5;
 VAR_8->execute = VAR_6;
}
