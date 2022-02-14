
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct ntb_netdev {int qp; } ;
struct TYPE_2__ {int tx_errors; int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ntb_netdev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static netdev_tx_t FUNC_3(struct sk_buff *VAR_3,
      struct net_device *VAR_4)
{
 struct ntb_netdev *VAR_5 = FUNC_0(VAR_4);
 int VAR_6;

 FUNC_1(VAR_4, VAR_5->qp, VAR_2);

 VAR_6 = FUNC_2(VAR_5->qp, VAR_3, VAR_3->data, VAR_3->len);
 if (VAR_6)
  goto err;


 FUNC_1(VAR_4, VAR_5->qp, VAR_2);

 return VAR_1;

err:
 VAR_4->stats.tx_dropped++;
 VAR_4->stats.tx_errors++;
 return VAR_0;
}
