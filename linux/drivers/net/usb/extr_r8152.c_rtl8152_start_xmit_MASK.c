
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct r8152 {scalar_t__ tx_qlen; int tx_queue; int tx_tl; int udev; int schedule; int flags; int tx_free; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct r8152* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static netdev_tx_t FUNC_11(struct sk_buff *VAR_3,
          struct net_device *VAR_4)
{
 struct r8152 *VAR_5 = FUNC_1(VAR_4);

 FUNC_7(VAR_3);

 FUNC_6(&VAR_5->tx_queue, VAR_3);

 if (!FUNC_0(&VAR_5->tx_free)) {
  if (FUNC_9(VAR_2, &VAR_5->flags)) {
   FUNC_4(VAR_1, &VAR_5->flags);
   FUNC_3(&VAR_5->schedule, 0);
  } else {
   FUNC_10(VAR_5->udev);
   FUNC_8(&VAR_5->tx_tl);
  }
 } else if (FUNC_5(&VAR_5->tx_queue) > VAR_5->tx_qlen) {
  FUNC_2(VAR_4);
 }

 return VAR_0;
}
