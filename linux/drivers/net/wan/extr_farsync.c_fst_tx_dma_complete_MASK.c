
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct fst_port_info {size_t index; } ;
struct fst_card_info {int dummy; } ;
struct TYPE_4__ {int bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fst_card_info*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct fst_port_info*) ;
 TYPE_2__** VAR_4 ;

__attribute__((used)) static void
FUNC_4(struct fst_card_info *VAR_5, struct fst_port_info *VAR_6,
      int VAR_7, int VAR_8)
{
 struct net_device *VAR_9 = FUNC_3(VAR_6);




 FUNC_1(VAR_0, "fst_tx_dma_complete\n");
 FUNC_0(VAR_5, VAR_4[VAR_6->index][VAR_8].bits,
  VAR_1 | VAR_3 | VAR_2);
 VAR_9->stats.tx_packets++;
 VAR_9->stats.tx_bytes += VAR_7;
 FUNC_2(VAR_9);
}
