
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct port100 {scalar_t__ skb_headroom; scalar_t__ skb_tailroom; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct port100 *VAR_1, unsigned int VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_0(VAR_1->skb_headroom + VAR_1->skb_tailroom + VAR_2,
   VAR_0);
 if (VAR_3)
  FUNC_1(VAR_3, VAR_1->skb_headroom);

 return VAR_3;
}
