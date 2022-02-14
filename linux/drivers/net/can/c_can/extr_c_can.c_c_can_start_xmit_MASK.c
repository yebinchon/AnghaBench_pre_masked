
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct can_frame {int can_dlc; } ;
struct c_can_priv {int tx_active; int * dlc; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,int ,int,int ) ;
 int FUNC_3 (struct net_device*,int ,struct can_frame*,int) ;
 scalar_t__ FUNC_4 (struct net_device*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct net_device*,int) ;
 int FUNC_6 (int ) ;
 struct c_can_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_9(struct sk_buff *VAR_5,
        struct net_device *VAR_6)
{
 struct can_frame *VAR_7 = (struct can_frame *)VAR_5->data;
 struct c_can_priv *VAR_8 = FUNC_7(VAR_6);
 u32 VAR_9, VAR_10;

 if (FUNC_4(VAR_6, VAR_5))
  return VAR_4;




 VAR_9 = FUNC_6(FUNC_1(&VAR_8->tx_active));
 VAR_10 = VAR_9 + VAR_0;


 if (VAR_9 == VAR_1 - 1)
  FUNC_8(VAR_6);





 FUNC_3(VAR_6, VAR_3, VAR_7, VAR_9);
 VAR_8->dlc[VAR_9] = VAR_7->can_dlc;
 FUNC_5(VAR_5, VAR_6, VAR_9);


 FUNC_0((1 << VAR_9), &VAR_8->tx_active);

 FUNC_2(VAR_6, VAR_3, VAR_10, VAR_2);

 return VAR_4;
}
