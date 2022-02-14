
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qcauart {int rx_skb; TYPE_2__* net_dev; int tx_buffer; TYPE_1__* serdev; } ;
struct net_device {int type; int mtu; } ;
struct TYPE_4__ {scalar_t__ mtu; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,size_t,int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 struct qcauart* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_9)
{
 struct qcauart *VAR_10 = FUNC_2(VAR_9);
 size_t VAR_11;


 VAR_9->mtu = VAR_7;
 VAR_9->type = VAR_0;

 VAR_11 = VAR_5 + VAR_6 + VAR_4;
 VAR_10->tx_buffer = FUNC_0(&VAR_10->serdev->dev, VAR_11, VAR_3);
 if (!VAR_10->tx_buffer)
  return -VAR_2;

 VAR_10->rx_skb = FUNC_1(VAR_10->net_dev,
      VAR_10->net_dev->mtu +
      VAR_8);
 if (!VAR_10->rx_skb)
  return -VAR_1;

 return 0;
}
