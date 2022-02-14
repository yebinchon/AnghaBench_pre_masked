
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int protocol; } ;
struct e1000_adapter {int napi; int netdev; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ,int) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct e1000_adapter *VAR_3, u8 VAR_4,
         __le16 VAR_5, struct sk_buff *VAR_6)
{
 VAR_6->protocol = FUNC_1(VAR_6, VAR_3->netdev);

 if (VAR_4 & VAR_1) {
  u16 VAR_7 = FUNC_3(VAR_5) & VAR_0;

  FUNC_0(VAR_6, FUNC_2(VAR_2), VAR_7);
 }
 FUNC_4(&VAR_3->napi, VAR_6);
}
