
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcaspi_stats {int dummy; } ;
struct qcaspi {int buffer_size; TYPE_1__* net_dev; int rx_buffer; int rx_skb; int stats; int * spi_thread; int burst_len; int clkspeed; } ;
struct net_device {int mtu; int type; } ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct net_device*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct qcaspi* FUNC_5 (struct net_device*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_9)
{
 struct qcaspi *VAR_10 = FUNC_5(VAR_9);

 VAR_9->mtu = VAR_5;
 VAR_9->type = VAR_0;
 VAR_10->clkspeed = VAR_8;
 VAR_10->burst_len = VAR_7;
 VAR_10->spi_thread = ((void*)0);
 VAR_10->buffer_size = (VAR_9->mtu + VAR_6 + VAR_4 +
  VAR_3 + 4) * 4;

 FUNC_2(&VAR_10->stats, 0, sizeof(struct qcaspi_stats));

 VAR_10->rx_buffer = FUNC_1(VAR_10->buffer_size, VAR_2);
 if (!VAR_10->rx_buffer)
  return -VAR_1;

 VAR_10->rx_skb = FUNC_3(VAR_9, VAR_10->net_dev->mtu +
      VAR_6);
 if (!VAR_10->rx_skb) {
  FUNC_0(VAR_10->rx_buffer);
  FUNC_4(VAR_10->net_dev, "Failed to allocate RX sk_buff.\n");
  return -VAR_1;
 }

 return 0;
}
