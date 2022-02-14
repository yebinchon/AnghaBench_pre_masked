
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int protocol; } ;
struct net_device {int dummy; } ;
struct e1000_adapter {int napi; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct e1000_adapter*,int,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct e1000_adapter *VAR_2,
         struct net_device *VAR_3, struct sk_buff *VAR_4,
         u32 VAR_5, __le16 VAR_6)
{
 u16 VAR_7 = FUNC_4(VAR_6);

 FUNC_1(VAR_2, VAR_5, VAR_4);

 VAR_4->protocol = FUNC_2(VAR_4, VAR_3);

 if (VAR_5 & VAR_0)
  FUNC_0(VAR_4, FUNC_3(VAR_1), VAR_7);

 FUNC_5(&VAR_2->napi, VAR_4);
}
