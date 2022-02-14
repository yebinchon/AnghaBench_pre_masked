
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct ntb_netdev {int qp; int tx_timer; } ;
struct net_device {scalar_t__ mtu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct net_device*,scalar_t__) ;
 struct ntb_netdev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct sk_buff*,int ,scalar_t__) ;
 struct sk_buff* FUNC_7 (int ,int*) ;
 int FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4)
{
 struct ntb_netdev *VAR_5 = FUNC_2(VAR_4);
 struct sk_buff *VAR_6;
 int VAR_7, VAR_8, VAR_9;


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_6 = FUNC_1(VAR_4, VAR_4->mtu + VAR_1);
  if (!VAR_6) {
   VAR_7 = -VAR_0;
   goto err;
  }

  VAR_7 = FUNC_6(VAR_5->qp, VAR_6, VAR_6->data,
           VAR_4->mtu + VAR_1);
  if (VAR_7) {
   FUNC_0(VAR_6);
   goto err;
  }
 }

 FUNC_8(&VAR_5->tx_timer, VAR_3, 0);

 FUNC_3(VAR_4);
 FUNC_5(VAR_5->qp);
 FUNC_4(VAR_4);

 return 0;

err:
 while ((VAR_6 = FUNC_7(VAR_5->qp, &VAR_9)))
  FUNC_0(VAR_6);
 return VAR_7;
}
