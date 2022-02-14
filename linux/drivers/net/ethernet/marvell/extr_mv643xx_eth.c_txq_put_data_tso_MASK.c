
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tx_queue {scalar_t__ tx_curr_desc; scalar_t__ tx_ring_size; void** tx_desc_mapping; scalar_t__ tso_hdrs_dma; scalar_t__ tso_hdrs; struct tx_desc* tx_desc_area; } ;
struct tx_desc {int byte_cnt; int cmd_sts; scalar_t__ buf_ptr; scalar_t__ l4i_chk; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline int
FUNC_5(struct net_device *VAR_8, struct tx_queue *VAR_9,
   struct sk_buff *VAR_10, char *VAR_11, int VAR_12,
   bool VAR_13, bool VAR_14)
{
 int VAR_15;
 u32 VAR_16;
 struct tx_desc *VAR_17;

 VAR_15 = VAR_9->tx_curr_desc++;
 if (VAR_9->tx_curr_desc == VAR_9->tx_ring_size)
  VAR_9->tx_curr_desc = 0;
 VAR_17 = &VAR_9->tx_desc_area[VAR_15];
 VAR_9->tx_desc_mapping[VAR_15] = VAR_1;

 VAR_17->l4i_chk = 0;
 VAR_17->byte_cnt = VAR_12;

 if (VAR_12 <= 8 && (uintptr_t)VAR_11 & 0x7) {

  FUNC_3(VAR_9->tso_hdrs + VAR_15 * VAR_4,
         VAR_11, VAR_12);
  VAR_17->buf_ptr = VAR_9->tso_hdrs_dma
   + VAR_15 * VAR_4;
 } else {

  VAR_9->tx_desc_mapping[VAR_15] = VAR_1;
  VAR_17->buf_ptr = FUNC_1(VAR_8->dev.parent, VAR_11,
   VAR_12, VAR_2);
  if (FUNC_4(FUNC_2(VAR_8->dev.parent,
            VAR_17->buf_ptr))) {
   FUNC_0(1, "dma_map_single failed!\n");
   return -VAR_3;
  }
 }

 VAR_16 = VAR_0;
 if (VAR_13) {

  VAR_16 |= VAR_7 | VAR_6;

  if (VAR_14)
   VAR_16 |= VAR_5;
 }
 VAR_17->cmd_sts = VAR_16;
 return 0;
}
