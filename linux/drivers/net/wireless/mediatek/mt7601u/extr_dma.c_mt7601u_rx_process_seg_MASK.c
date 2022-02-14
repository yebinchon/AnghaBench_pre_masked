
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct mt7601u_rxwi {scalar_t__* zero; } ;
struct mt7601u_dev {int mac_lock; int hw; int dev; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct mt7601u_dev*,struct mt7601u_rxwi*,int *,int,int,struct page*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mt7601u_dev*,struct mt7601u_rxwi*,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct mt7601u_dev *VAR_3, u8 *VAR_4,
       u32 VAR_5, struct page *VAR_6)
{
 struct sk_buff *VAR_7;
 struct mt7601u_rxwi *VAR_8;
 u32 VAR_9, VAR_10 = VAR_5;




 VAR_9 = FUNC_2(VAR_4 + VAR_5 - VAR_1);
 VAR_5 -= VAR_1;

 VAR_4 += VAR_0;
 VAR_5 -= VAR_0;

 VAR_8 = (struct mt7601u_rxwi *) VAR_4;
 VAR_4 += sizeof(struct mt7601u_rxwi);
 VAR_5 -= sizeof(struct mt7601u_rxwi);

 if (FUNC_8(VAR_8->zero[0] || VAR_8->zero[1] || VAR_8->zero[2]))
  FUNC_1(VAR_3->dev, "Error: RXWI zero fields are set\n");
 if (FUNC_8(FUNC_0(VAR_2, VAR_9)))
  FUNC_1(VAR_3->dev, "Error: RX path seen a non-pkt urb\n");

 FUNC_7(VAR_3, VAR_8, VAR_9);

 VAR_7 = FUNC_4(VAR_3, VAR_8, VAR_4, VAR_5, VAR_10, VAR_6);
 if (!VAR_7)
  return;

 FUNC_5(&VAR_3->mac_lock);
 FUNC_3(VAR_3->hw, VAR_7);
 FUNC_6(&VAR_3->mac_lock);
}
