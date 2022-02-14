
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int cb; int protocol; int pkt_type; int dev; } ;
struct rtllib_rx_stats {int dummy; } ;
struct rtllib_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,size_t) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_5(struct rtllib_device *VAR_2,
         struct sk_buff *VAR_3,
         struct rtllib_rx_stats *VAR_4,
         size_t VAR_5)
{
 VAR_3->dev = VAR_2->dev;
 FUNC_4(VAR_3);
 FUNC_3(VAR_3, VAR_5);
 VAR_3->pkt_type = VAR_1;
 VAR_3->protocol = FUNC_0(VAR_0);
 FUNC_1(VAR_3->cb, 0, sizeof(VAR_3->cb));
 FUNC_2(VAR_3);
}
