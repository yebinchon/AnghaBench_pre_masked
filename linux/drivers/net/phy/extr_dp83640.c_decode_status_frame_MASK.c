
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int type ;
struct sk_buff {int * data; } ;
struct phy_txts {int dummy; } ;
struct phy_rxts {int dummy; } ;
struct dp83640_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dp83640_private*,int *,int,int) ;
 int FUNC_1 (struct dp83640_private*,struct phy_rxts*) ;
 int FUNC_2 (struct dp83640_private*,struct phy_txts*) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct dp83640_private *VAR_3,
    struct sk_buff *VAR_4)
{
 struct phy_rxts *VAR_5;
 struct phy_txts *VAR_6;
 u8 *VAR_7;
 int VAR_8, VAR_9;
 u16 VAR_10, VAR_11;

 VAR_7 = VAR_4->data + 2;

 for (VAR_8 = FUNC_3(VAR_4) - 2; VAR_8 > sizeof(VAR_11); VAR_8 -= VAR_9) {

  VAR_11 = *(u16 *)VAR_7;
  VAR_10 = VAR_11 & 0x0fff;
  VAR_11 = VAR_11 & 0xf000;
  VAR_8 -= sizeof(VAR_11);
  VAR_7 += sizeof(VAR_11);

  if (VAR_1 == VAR_11 && VAR_8 >= sizeof(*VAR_5)) {

   VAR_5 = (struct phy_rxts *) VAR_7;
   FUNC_1(VAR_3, VAR_5);
   VAR_9 = sizeof(*VAR_5);

  } else if (VAR_2 == VAR_11 && VAR_8 >= sizeof(*VAR_6)) {

   VAR_6 = (struct phy_txts *) VAR_7;
   FUNC_2(VAR_3, VAR_6);
   VAR_9 = sizeof(*VAR_6);

  } else if (VAR_0 == VAR_11) {

   VAR_9 = FUNC_0(VAR_3, VAR_7, VAR_8, VAR_10);

  } else {
   VAR_9 = 0;
   break;
  }
  VAR_7 += VAR_9;
 }
}
