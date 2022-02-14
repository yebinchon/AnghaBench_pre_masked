
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ipw_priv {int status; size_t cmdlog_pos; size_t cmdlog_len; TYPE_2__* cmdlog; int lock; int wait_command_queue; } ;
struct host_cmd {scalar_t__ cmd; int len; scalar_t__ param; } ;
struct TYPE_3__ {scalar_t__ cmd; int param; int len; } ;
struct TYPE_4__ {int retcode; TYPE_1__ cmd; void* jiffies; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ipw_priv*,scalar_t__,scalar_t__,int ,int ) ;
 void* VAR_7 ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (int ,int,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct ipw_priv *VAR_8, struct host_cmd *VAR_9)
{
 int VAR_10 = 0;
 unsigned long VAR_11;
 unsigned long VAR_12, VAR_13;

 FUNC_6(&VAR_8->lock, VAR_11);
 if (VAR_8->status & VAR_5) {
  FUNC_1("Failed to send %s: Already sending a command.\n",
     FUNC_2(VAR_9->cmd));
  FUNC_7(&VAR_8->lock, VAR_11);
  return -VAR_0;
 }

 VAR_8->status |= VAR_5;

 if (VAR_8->cmdlog) {
  VAR_8->cmdlog[VAR_8->cmdlog_pos].jiffies = VAR_7;
  VAR_8->cmdlog[VAR_8->cmdlog_pos].cmd.cmd = VAR_9->cmd;
  VAR_8->cmdlog[VAR_8->cmdlog_pos].cmd.len = VAR_9->len;
  FUNC_4(VAR_8->cmdlog[VAR_8->cmdlog_pos].cmd.param, VAR_9->param,
         VAR_9->len);
  VAR_8->cmdlog[VAR_8->cmdlog_pos].retcode = -1;
 }

 FUNC_0("%s command (#%d) %d bytes: 0x%08X\n",
       FUNC_2(VAR_9->cmd), VAR_9->cmd, VAR_9->len,
       VAR_8->status);


 if (VAR_9->cmd == VAR_3)
  FUNC_0("WEP_KEY command masked out for secure.\n");
 else

  FUNC_5(VAR_4, (u8 *) VAR_9->param, VAR_9->len);

 VAR_10 = FUNC_3(VAR_8, VAR_9->cmd, VAR_9->param, VAR_9->len, 0);
 if (VAR_10) {
  VAR_8->status &= ~VAR_5;
  FUNC_1("Failed to send %s: Reason %d\n",
     FUNC_2(VAR_9->cmd), VAR_10);
  FUNC_7(&VAR_8->lock, VAR_11);
  goto exit;
 }
 FUNC_7(&VAR_8->lock, VAR_11);

 VAR_12 = VAR_7;
 VAR_13 = VAR_12 + VAR_2;
again:
 VAR_10 = FUNC_9(VAR_8->wait_command_queue,
           !(VAR_8->
      status & VAR_5),
           VAR_13 - VAR_12);
 if (VAR_10 < 0) {
  VAR_12 = VAR_7;
  if (FUNC_8(VAR_12, VAR_13))
   goto again;
  VAR_10 = 0;
 }

 if (VAR_10 == 0) {
  FUNC_6(&VAR_8->lock, VAR_11);
  if (VAR_8->status & VAR_5) {
   FUNC_1("Failed to send %s: Command timed out.\n",
      FUNC_2(VAR_9->cmd));
   VAR_8->status &= ~VAR_5;
   FUNC_7(&VAR_8->lock, VAR_11);
   VAR_10 = -VAR_1;
   goto exit;
  }
  FUNC_7(&VAR_8->lock, VAR_11);
 } else
  VAR_10 = 0;

 if (VAR_8->status & VAR_6) {
  FUNC_1("Failed to send %s: Aborted due to RF kill switch.\n",
     FUNC_2(VAR_9->cmd));
  VAR_10 = -VAR_1;
  goto exit;
 }

      exit:
 if (VAR_8->cmdlog) {
  VAR_8->cmdlog[VAR_8->cmdlog_pos++].retcode = VAR_10;
  VAR_8->cmdlog_pos %= VAR_8->cmdlog_len;
 }
 return VAR_10;
}
