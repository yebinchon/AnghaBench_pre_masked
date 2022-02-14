
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct fm10k_msg_data {int dummy; } ;
struct TYPE_4__ {int register_handlers; int process; int enqueue_tx; int tx_complete; int tx_ready; int rx_ready; int disconnect; int connect; } ;
struct fm10k_mbx_info {int tail; int head; TYPE_2__ ops; int * buffer; int rx; int tx; int mbmem_len; int max_size; void* remote; void* local; int udelay; scalar_t__ timeout; struct fm10k_msg_data const* msg_data; int state; int mbmem_reg; int mbx_reg; } ;
struct TYPE_3__ {int type; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *,int *,size_t) ;


 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_4 (struct fm10k_msg_data const*) ;

s32 FUNC_5(struct fm10k_hw *VAR_18, struct fm10k_mbx_info *VAR_19,
   const struct fm10k_msg_data *VAR_20, u8 VAR_21)
{

 switch (VAR_18->mac.type) {
 case 128:
  VAR_19->mbx_reg = VAR_9;
  VAR_19->mbmem_reg = FUNC_2(VAR_8);
  break;
 case 129:

  if (VAR_21 < 64) {
   VAR_19->mbx_reg = FUNC_1(VAR_21);
   VAR_19->mbmem_reg = FUNC_0(VAR_21, 0);
   break;
  }

 default:
  return VAR_2;
 }


 VAR_19->state = VAR_7;


 if (FUNC_4(VAR_20))
  return VAR_0;


 VAR_19->msg_data = VAR_20;




 VAR_19->timeout = 0;
 VAR_19->udelay = VAR_3;


 VAR_19->tail = 1;
 VAR_19->head = 1;


 VAR_19->local = VAR_1;
 VAR_19->remote = VAR_1;


 VAR_19->max_size = VAR_4;
 VAR_19->mbmem_len = VAR_8;


 FUNC_3(&VAR_19->tx, VAR_19->buffer, VAR_6);
 FUNC_3(&VAR_19->rx, &VAR_19->buffer[VAR_6],
   VAR_5);


 VAR_19->ops.connect = VAR_10;
 VAR_19->ops.disconnect = VAR_11;
 VAR_19->ops.rx_ready = VAR_15;
 VAR_19->ops.tx_ready = VAR_17;
 VAR_19->ops.tx_complete = VAR_16;
 VAR_19->ops.enqueue_tx = VAR_12;
 VAR_19->ops.process = VAR_13;
 VAR_19->ops.register_handlers = VAR_14;

 return 0;
}
