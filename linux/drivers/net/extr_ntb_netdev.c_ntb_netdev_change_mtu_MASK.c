
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct ntb_netdev {int qp; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct ntb_netdev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct sk_buff*,int ,int) ;
 struct sk_buff* FUNC_9 (int ,int*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3, int VAR_4)
{
 struct ntb_netdev *VAR_5 = FUNC_3(VAR_3);
 struct sk_buff *VAR_6;
 int VAR_7, VAR_8;

 if (VAR_4 > FUNC_7(VAR_5->qp) - VAR_2)
  return -VAR_0;

 if (!FUNC_4(VAR_3)) {
  VAR_3->mtu = VAR_4;
  return 0;
 }


 FUNC_5(VAR_5->qp);

 if (VAR_3->mtu < VAR_4) {
  int VAR_9;

  for (VAR_9 = 0; (VAR_6 = FUNC_9(VAR_5->qp, &VAR_7)); VAR_9++)
   FUNC_0(VAR_6);

  for (; VAR_9; VAR_9--) {
   VAR_6 = FUNC_1(VAR_3, VAR_4 + VAR_2);
   if (!VAR_6) {
    VAR_8 = -VAR_1;
    goto err;
   }

   VAR_8 = FUNC_8(VAR_5->qp, VAR_6, VAR_6->data,
            VAR_4 + VAR_2);
   if (VAR_8) {
    FUNC_0(VAR_6);
    goto err;
   }
  }
 }

 VAR_3->mtu = VAR_4;

 FUNC_6(VAR_5->qp);

 return 0;

err:
 FUNC_5(VAR_5->qp);

 while ((VAR_6 = FUNC_9(VAR_5->qp, &VAR_7)))
  FUNC_0(VAR_6);

 FUNC_2(VAR_3, "Error changing MTU, device inoperable\n");
 return VAR_8;
}
