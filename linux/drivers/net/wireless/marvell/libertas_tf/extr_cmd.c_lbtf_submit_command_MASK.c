
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u8 ;
struct lbtf_private {int command_timer; int driver_lock; TYPE_1__* ops; struct cmd_ctrl_node* cur_cmd; } ;
struct cmd_header {int seqnum; int command; int size; } ;
struct cmd_ctrl_node {struct cmd_header* cmdbuf; } ;
struct TYPE_2__ {int (* hw_host_to_card ) (struct lbtf_private*,int ,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,void*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct lbtf_private*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_10(struct lbtf_private *VAR_5,
          struct cmd_ctrl_node *VAR_6)
{
 unsigned long VAR_7;
 struct cmd_header *VAR_8;
 uint16_t VAR_9;
 uint16_t VAR_10;
 int VAR_11 = 5 * VAR_0;
 int VAR_12;

 FUNC_1(VAR_2);

 VAR_8 = VAR_6->cmdbuf;

 FUNC_7(&VAR_5->driver_lock, VAR_7);
 VAR_5->cur_cmd = VAR_6;
 VAR_9 = FUNC_4(VAR_8->size);
 VAR_10 = FUNC_4(VAR_8->command);

 FUNC_0("DNLD_CMD: command 0x%04x, seq %d, size %d\n",
       VAR_10, FUNC_4(VAR_8->seqnum), VAR_9);
 FUNC_2(VAR_1, "DNLD_CMD", (void *) VAR_6->cmdbuf, VAR_9);

 VAR_12 = VAR_5->ops->hw_host_to_card(VAR_5, VAR_3, (u8 *)VAR_8, VAR_9);
 FUNC_8(&VAR_5->driver_lock, VAR_7);

 if (VAR_12) {
  FUNC_6("DNLD_CMD: hw_host_to_card failed: %d\n", VAR_12);


  VAR_11 = VAR_0;
 }


 FUNC_5(&VAR_5->command_timer, VAR_4 + VAR_11);

 FUNC_3(VAR_2);
}
