
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; scalar_t__* data; int len; } ;
struct net_device {int dummy; } ;
struct baycom_state {struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct baycom_state*,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 struct baycom_state* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct baycom_state *VAR_5 = FUNC_4(VAR_4);

 if (VAR_3->protocol == FUNC_3(VAR_0))
  return FUNC_0(VAR_3);

 if (VAR_3->data[0] != 0) {
  FUNC_2(VAR_5, VAR_3->data, VAR_3->len);
  FUNC_1(VAR_3);
  return VAR_2;
 }
 if (VAR_5->skb) {
  FUNC_1(VAR_3);
  return VAR_2;
 }

 if (VAR_3->len >= VAR_1+1 || VAR_3->len < 3) {
  FUNC_1(VAR_3);
  return VAR_2;
 }
 FUNC_5(VAR_4);
 VAR_5->skb = VAR_3;
 return VAR_2;
}
