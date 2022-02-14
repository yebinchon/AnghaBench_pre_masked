
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct mt7601u_rxwi {int rxinfo; } ;
struct mt7601u_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (struct mt7601u_dev*,struct sk_buff*,void*,struct mt7601u_rxwi*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct sk_buff*,int ,struct page*,void*,int,int) ;
 int FUNC_9 (struct sk_buff*,void*,int) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *
FUNC_11(struct mt7601u_dev *VAR_2, struct mt7601u_rxwi *VAR_3,
   void *VAR_4, u32 VAR_5, u32 VAR_6, struct page *VAR_7)
{
 struct sk_buff *VAR_8;
 u32 VAR_9, VAR_10 = 0, VAR_11, VAR_12;

 VAR_8 = FUNC_0(VAR_7 ? 128 : VAR_5, VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_9 = FUNC_6(VAR_2, VAR_8, VAR_4, VAR_3);
 if (!VAR_9 || VAR_9 > VAR_5)
  goto bad_frame;

 VAR_10 = FUNC_5(VAR_4, VAR_9);
 if (!VAR_10)
  goto bad_frame;

 if (VAR_3->rxinfo & FUNC_1(VAR_1)) {
  FUNC_9(VAR_8, VAR_4, VAR_10);

  VAR_4 += VAR_10 + 2;
  VAR_9 -= VAR_10;
  VAR_10 = 0;
 }


 VAR_11 = (VAR_9 <= FUNC_10(VAR_8)) ? VAR_9 : VAR_10 + 8;
 VAR_12 = VAR_9 - VAR_11;

 FUNC_9(VAR_8, VAR_4, VAR_11);
 VAR_4 += VAR_11;

 if (VAR_12) {
  FUNC_8(VAR_8, 0, VAR_7, VAR_4 - FUNC_7(VAR_7),
    VAR_12, VAR_6);
  FUNC_4(VAR_7);
 }

 return VAR_8;

bad_frame:
 FUNC_2(VAR_2->dev, "Error: incorrect frame len:%u hdr:%u\n",
       VAR_9, VAR_10);
 FUNC_3(VAR_8);
 return ((void*)0);
}
