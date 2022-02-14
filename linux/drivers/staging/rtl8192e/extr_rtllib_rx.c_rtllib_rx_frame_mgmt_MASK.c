
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct rtllib_rx_stats {int len; } ;
struct rtllib_hdr_3addr {int addr1; } ;
struct rtllib_device {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct rtllib_device*,struct sk_buff*,struct rtllib_rx_stats*,int ,int ) ;
 int FUNC_3 (struct rtllib_device*,struct sk_buff*,struct rtllib_rx_stats*) ;

__attribute__((used)) static inline int
FUNC_4(struct rtllib_device *VAR_1, struct sk_buff *VAR_2,
   struct rtllib_rx_stats *VAR_3, u16 VAR_4,
   u16 VAR_5)
{




 struct rtllib_hdr_3addr *VAR_6 = (struct rtllib_hdr_3addr *)VAR_2->data;

 VAR_3->len = VAR_2->len;
 FUNC_3(VAR_1, VAR_2, VAR_3);
 if ((FUNC_1(VAR_6->addr1, VAR_1->dev->dev_addr, VAR_0))) {
  FUNC_0(VAR_2);
  return 0;
 }
 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_0(VAR_2);

 return 0;
}
