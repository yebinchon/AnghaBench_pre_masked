
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct esp_lun_data {struct esp_cmd_entry** tagged_cmds; int num_tagged; } ;
struct esp_cmd_entry {int dummy; } ;
struct esp {int sreg; int ireg; int* command_block; int host; TYPE_1__* ops; int command_block_dma; } ;
struct TYPE_2__ {int (* dma_invalidate ) (struct esp*) ;int (* dma_drain ) (struct esp*) ;scalar_t__ (* irq_pending ) (struct esp*) ;int (* send_dma_cmd ) (struct esp*,int ,int,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*,...) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct esp*,int ) ;
 int FUNC_3 (int ,int ,char*,...) ;
 scalar_t__ FUNC_4 (struct esp*) ;
 int FUNC_5 (struct esp*,int ,int,int,int,int) ;
 scalar_t__ FUNC_6 (struct esp*) ;
 int FUNC_7 (struct esp*) ;
 int FUNC_8 (struct esp*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static struct esp_cmd_entry *FUNC_10(struct esp *VAR_14,
          struct esp_lun_data *VAR_15)
{
 struct esp_cmd_entry *VAR_16;
 int VAR_17;

 if (!VAR_15->num_tagged) {
  FUNC_3(VAR_11, VAR_14->host,
        "Reconnect w/num_tagged==0\n");
  return ((void*)0);
 }

 FUNC_0("reconnect tag, ");

 for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++) {
  if (VAR_14->ops->irq_pending(VAR_14))
   break;
 }
 if (VAR_17 == VAR_7) {
  FUNC_3(VAR_11, VAR_14->host,
        "Reconnect IRQ1 timeout\n");
  return ((void*)0);
 }

 VAR_14->sreg = FUNC_1(VAR_9);
 VAR_14->ireg = FUNC_1(VAR_3);

 FUNC_0("IRQ(%d:%x:%x), ",
     VAR_17, VAR_14->ireg, VAR_14->sreg);

 if (VAR_14->ireg & VAR_4) {
  FUNC_3(VAR_11, VAR_14->host,
        "Reconnect, got disconnect.\n");
  return ((void*)0);
 }

 if ((VAR_14->sreg & VAR_10) != VAR_6) {
  FUNC_3(VAR_11, VAR_14->host,
        "Reconnect, not MIP sreg[%02x].\n", VAR_14->sreg);
  return ((void*)0);
 }


 VAR_14->command_block[0] = 0xff;
 VAR_14->command_block[1] = 0xff;
 VAR_14->ops->send_dma_cmd(VAR_14, VAR_14->command_block_dma,
          2, 2, 1, VAR_0 | VAR_2);


 FUNC_2(VAR_14, VAR_1);

 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  if (VAR_14->ops->irq_pending(VAR_14)) {
   VAR_14->sreg = FUNC_1(VAR_9);
   VAR_14->ireg = FUNC_1(VAR_3);
   if (VAR_14->ireg & VAR_5)
    break;
  }
  FUNC_9(1);
 }
 if (VAR_17 == VAR_8) {
  FUNC_3(VAR_11, VAR_14->host, "Reconnect IRQ2 timeout\n");
  return ((void*)0);
 }
 VAR_14->ops->dma_drain(VAR_14);
 VAR_14->ops->dma_invalidate(VAR_14);

 FUNC_0("IRQ2(%d:%x:%x) tag[%x:%x]\n",
     VAR_17, VAR_14->ireg, VAR_14->sreg,
     VAR_14->command_block[0],
     VAR_14->command_block[1]);

 if (VAR_14->command_block[0] < VAR_13 ||
     VAR_14->command_block[0] > VAR_12) {
  FUNC_3(VAR_11, VAR_14->host,
        "Reconnect, bad tag type %02x.\n",
        VAR_14->command_block[0]);
  return ((void*)0);
 }

 VAR_16 = VAR_15->tagged_cmds[VAR_14->command_block[1]];
 if (!VAR_16) {
  FUNC_3(VAR_11, VAR_14->host,
        "Reconnect, no entry for tag %02x.\n",
        VAR_14->command_block[1]);
  return ((void*)0);
 }

 return VAR_16;
}
