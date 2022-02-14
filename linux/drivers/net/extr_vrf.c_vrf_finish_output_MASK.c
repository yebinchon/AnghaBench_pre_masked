
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dev; scalar_t__ sk; } ;
struct rtable {int dummy; } ;
struct net_device {scalar_t__ header_ops; } ;
struct net {int dummy; } ;
struct neighbour {int dummy; } ;
struct dst_entry {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct neighbour*) ;
 unsigned int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct neighbour* FUNC_3 (struct rtable*,struct sk_buff*,int*) ;
 int FUNC_4 (struct neighbour*,struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct dst_entry* FUNC_8 (struct sk_buff*) ;
 unsigned int FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,unsigned int) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (struct sk_buff*,struct neighbour*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_15(struct net *VAR_2, struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct dst_entry *VAR_5 = FUNC_8(VAR_4);
 struct rtable *VAR_6 = (struct rtable *)VAR_5;
 struct net_device *VAR_7 = VAR_5->dev;
 unsigned int VAR_8 = FUNC_1(VAR_7);
 struct neighbour *VAR_9;
 bool VAR_10 = 0;
 int VAR_11 = -VAR_0;

 FUNC_5(VAR_4);


 if (FUNC_13(FUNC_9(VAR_4) < VAR_8 && VAR_7->header_ops)) {
  struct sk_buff *VAR_12;

  VAR_12 = FUNC_10(VAR_4, FUNC_1(VAR_7));
  if (!VAR_12) {
   VAR_11 = -VAR_1;
   goto err;
  }
  if (VAR_4->sk)
   FUNC_11(VAR_12, VAR_4->sk);

  FUNC_2(VAR_4);
  VAR_4 = VAR_12;
 }

 FUNC_6();

 VAR_9 = FUNC_3(VAR_6, VAR_4, &VAR_10);
 if (!FUNC_0(VAR_9)) {
  FUNC_12(VAR_4, VAR_9);

  VAR_11 = FUNC_4(VAR_9, VAR_4, VAR_10);
  FUNC_7();
  return VAR_11;
 }

 FUNC_7();
err:
 FUNC_14(VAR_4->dev, VAR_4);
 return VAR_11;
}
