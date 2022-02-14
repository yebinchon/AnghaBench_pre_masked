
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int u8 ;
struct lbs_private {int (* hw_host_to_card ) (struct lbs_private*,int ,int *,scalar_t__) ;int wakeup_dev_required; int is_deep_sleep; int command_timer; scalar_t__ dnld_sent; scalar_t__ is_auto_deep_sleep_enabled; int dev; int driver_lock; struct cmd_ctrl_node* cur_cmd; int seqnum; } ;
struct cmd_header {int seqnum; int command; int size; } ;
struct cmd_ctrl_node {struct cmd_header* cmdbuf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct lbs_private*,struct cmd_ctrl_node*,int) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,char*,void*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct lbs_private*,int ,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct lbs_private *VAR_8,
          struct cmd_ctrl_node *VAR_9)
{
 unsigned long VAR_10;
 struct cmd_header *VAR_11;
 uint16_t VAR_12;
 uint16_t VAR_13;
 int VAR_14 = 3 * VAR_4;
 int VAR_15;

 VAR_11 = VAR_9->cmdbuf;

 FUNC_7(&VAR_8->driver_lock, VAR_10);
 VAR_8->seqnum++;
 VAR_11->seqnum = FUNC_0(VAR_8->seqnum);
 VAR_8->cur_cmd = VAR_9;
 FUNC_8(&VAR_8->driver_lock, VAR_10);

 VAR_12 = FUNC_4(VAR_11->size);
 VAR_13 = FUNC_4(VAR_11->command);


 if (VAR_13 == VAR_2 || VAR_13 == VAR_0)
  VAR_14 = 5 * VAR_4;

 FUNC_2("DNLD_CMD: command 0x%04x, seq %d, size %d\n",
       VAR_13, FUNC_4(VAR_11->seqnum), VAR_12);
 FUNC_3(VAR_5, "DNLD_CMD", (void *) VAR_9->cmdbuf, VAR_12);

 VAR_15 = VAR_8->hw_host_to_card(VAR_8, VAR_6, (u8 *) VAR_11, VAR_12);

 if (VAR_15) {
  FUNC_6(VAR_8->dev, "DNLD_CMD: hw_host_to_card failed: %d\n",
       VAR_15);

  VAR_8->dnld_sent = VAR_3;
  FUNC_1(VAR_8, VAR_9, VAR_15);
 }

 if (VAR_13 == VAR_1) {
  if (VAR_8->is_auto_deep_sleep_enabled) {
   VAR_8->wakeup_dev_required = 1;
   VAR_8->dnld_sent = 0;
  }
  VAR_8->is_deep_sleep = 1;
  FUNC_1(VAR_8, VAR_9, 0);
 } else {

  FUNC_5(&VAR_8->command_timer, VAR_7 + VAR_14);
 }
}
