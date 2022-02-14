
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_3__ {int rx_bytes; int rx_dropped; int rx_packets; } ;
struct net_device {TYPE_1__ stats; int name; } ;
struct fst_port_info {int index; scalar_t__ mode; } ;
struct fst_card_info {int rx_dma_handle_host; } ;
struct TYPE_4__ {int bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct fst_card_info*,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct net_device* FUNC_6 (struct fst_port_info*) ;
 TYPE_2__** VAR_5 ;
 int FUNC_7 (struct sk_buff*,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct fst_card_info *VAR_6, struct fst_port_info *VAR_7,
      int VAR_8, struct sk_buff *VAR_9, int VAR_10)
{
 struct net_device *VAR_11 = FUNC_6(VAR_7);
 int VAR_12;
 int VAR_13;

 FUNC_1(VAR_1, "fst_rx_dma_complete\n");
 VAR_12 = VAR_7->index;
 FUNC_7(VAR_9, VAR_6->rx_dma_handle_host, VAR_8);


 FUNC_0(VAR_6, VAR_5[VAR_12][VAR_10].bits, VAR_2);


 VAR_11->stats.rx_packets++;
 VAR_11->stats.rx_bytes += VAR_8;


 FUNC_1(VAR_0, "Pushing the frame up the stack\n");
 if (VAR_7->mode == VAR_3)
  VAR_9->protocol = FUNC_2(VAR_9, VAR_11);
 else
  VAR_9->protocol = FUNC_4(VAR_9, VAR_11);
 VAR_13 = FUNC_5(VAR_9);
 FUNC_3(VAR_13, FUNC_6(VAR_7)->name);
 if (VAR_13 == VAR_4)
  VAR_11->stats.rx_dropped++;
}
