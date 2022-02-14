
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtl8xxxu_priv {int tx_paths; TYPE_1__* fops; } ;
struct TYPE_2__ {scalar_t__ has_s0s1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ,int ) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_4 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_5 (struct rtl8xxxu_priv*,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct rtl8xxxu_priv *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10, VAR_11 = 0, VAR_12;


 VAR_12 = FUNC_1(VAR_8, VAR_1);

 if (VAR_12 & VAR_0) {

  VAR_9 = VAR_12 & ~VAR_0;
  FUNC_3(VAR_8, VAR_1, VAR_9);


  VAR_10 = FUNC_2(VAR_8, VAR_6, VAR_3);


  FUNC_5(VAR_8, VAR_6, VAR_3,
         (VAR_10 & 0x8ffff) | 0x10000);


  if (VAR_8->tx_paths > 1) {
   VAR_11 = FUNC_2(VAR_8, VAR_7,
             VAR_3);

   FUNC_5(VAR_8, VAR_7, VAR_3,
          (VAR_11 & 0x8ffff) | 0x10000);
  }
 } else {


  FUNC_4(VAR_8, VAR_2, 0xff);
 }


 if (VAR_8->fops->has_s0s1)
  FUNC_5(VAR_8, VAR_6, VAR_5, 0xdfbe0);
 VAR_9 = FUNC_2(VAR_8, VAR_6, VAR_4);
 VAR_9 |= 0x08000;
 FUNC_5(VAR_8, VAR_6, VAR_4, VAR_9);

 FUNC_0(100);

 if (VAR_8->fops->has_s0s1)
  FUNC_5(VAR_8, VAR_6, VAR_5, 0xdffe0);


 if (VAR_12 & VAR_0) {

  FUNC_3(VAR_8, VAR_1, VAR_12);
  FUNC_5(VAR_8, VAR_6, VAR_3, VAR_10);


  if (VAR_8->tx_paths > 1)
   FUNC_5(VAR_8, VAR_7, VAR_3,
          VAR_11);
 } else
  FUNC_4(VAR_8, VAR_2, 0x00);
}
