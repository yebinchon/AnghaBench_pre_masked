
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct spider_net_hw_descr {int buf_addr; int data_error; int data_status; int dmac_cmd_status; int buf_size; int next_descr_addr; int result_size; int valid_size; } ;
struct spider_net_descr_chain {struct spider_net_descr* ring; struct spider_net_descr* tail; } ;
struct spider_net_descr {int * skb; struct spider_net_descr* next; struct spider_net_hw_descr* hwdescr; } ;
struct TYPE_4__ {int rx_desc_error; int rx_desc_unk_state; } ;
struct spider_net_card {TYPE_2__ spider_stats; struct spider_net_descr_chain rx_chain; struct net_device* netdev; int pdev; } ;
struct TYPE_3__ {int rx_dropped; } ;
struct net_device {int dev; TYPE_1__ stats; } ;


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
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct spider_net_card*) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct spider_net_card*) ;
 int FUNC_6 (struct spider_net_hw_descr*) ;
 int FUNC_7 (struct spider_net_descr*,struct spider_net_card*) ;

__attribute__((used)) static int
FUNC_8(struct spider_net_card *VAR_11)
{
 struct net_device *VAR_12 = VAR_11->netdev;
 struct spider_net_descr_chain *VAR_13 = &VAR_11->rx_chain;
 struct spider_net_descr *VAR_14 = VAR_13->tail;
 struct spider_net_hw_descr *VAR_15 = VAR_14->hwdescr;
 u32 VAR_16;
 int VAR_17;

 VAR_17 = FUNC_6(VAR_15);


 if ((VAR_17 == VAR_2) ||
     (VAR_17 == VAR_6))
  return 0;


 VAR_13->tail = VAR_14->next;


 VAR_16 = VAR_15->buf_addr;
 VAR_15->buf_addr = 0xffffffff;
 FUNC_3(VAR_11->pdev, VAR_16,
   VAR_10, VAR_0);

 if ( (VAR_17 == VAR_8) ||
      (VAR_17 == VAR_7) ||
      (VAR_17 == VAR_4) ) {
  if (FUNC_2(VAR_11))
   FUNC_0(&VAR_12->dev,
          "dropping RX descriptor with state %d\n", VAR_17);
  VAR_12->stats.rx_dropped++;
  goto bad_desc;
 }

 if ( (VAR_17 != VAR_3) &&
      (VAR_17 != VAR_5) ) {
  if (FUNC_2(VAR_11))
   FUNC_0(&VAR_11->netdev->dev,
          "RX descriptor with unknown state %d\n", VAR_17);
  VAR_11->spider_stats.rx_desc_unk_state++;
  goto bad_desc;
 }


 if (VAR_15->data_error & VAR_9) {
  if (FUNC_2(VAR_11))
   FUNC_0(&VAR_11->netdev->dev,
          "error in received descriptor found, "
          "data_status=x%08x, data_error=x%08x\n",
          VAR_15->data_status, VAR_15->data_error);
  goto bad_desc;
 }

 if (VAR_15->dmac_cmd_status & VAR_1) {
  FUNC_0(&VAR_11->netdev->dev, "bad status, cmd_status=x%08x\n",
          VAR_15->dmac_cmd_status);
  FUNC_4("buf_addr=x%08x\n", VAR_16);
  FUNC_4("buf_size=x%08x\n", VAR_15->buf_size);
  FUNC_4("next_descr_addr=x%08x\n", VAR_15->next_descr_addr);
  FUNC_4("result_size=x%08x\n", VAR_15->result_size);
  FUNC_4("valid_size=x%08x\n", VAR_15->valid_size);
  FUNC_4("data_status=x%08x\n", VAR_15->data_status);
  FUNC_4("data_error=x%08x\n", VAR_15->data_error);
  FUNC_4("which=%ld\n", VAR_14 - VAR_11->rx_chain.ring);

  VAR_11->spider_stats.rx_desc_error++;
  goto bad_desc;
 }


 FUNC_7(VAR_14, VAR_11);
 VAR_14->skb = ((void*)0);
 VAR_15->dmac_cmd_status = VAR_6;
 return 1;

bad_desc:
 if (FUNC_2(VAR_11))
  FUNC_5(VAR_11);
 FUNC_1(VAR_14->skb);
 VAR_14->skb = ((void*)0);
 VAR_15->dmac_cmd_status = VAR_6;
 return 0;
}
