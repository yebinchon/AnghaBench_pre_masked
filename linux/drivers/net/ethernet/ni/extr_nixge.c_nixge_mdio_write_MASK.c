
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct nixge_priv {int dev; } ;
struct mii_bus {struct nixge_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct nixge_priv*,int ,int,int,int,int) ;
 int FUNC_5 (struct nixge_priv*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct mii_bus *VAR_10, int VAR_11, int VAR_12, u16 VAR_13)
{
 struct nixge_priv *VAR_14 = VAR_10->priv;
 u32 VAR_15, VAR_16;
 u16 VAR_17;
 int VAR_18;

 if (VAR_12 & VAR_0) {
  VAR_17 = (VAR_12 >> 16) & 0x1f;

  FUNC_5(VAR_14, VAR_6, VAR_12 & 0xffff);

  VAR_16 = VAR_4 | FUNC_2(VAR_5)
   | FUNC_0(VAR_11) | FUNC_1(VAR_17);

  FUNC_5(VAR_14, VAR_9, VAR_16);
  FUNC_5(VAR_14, VAR_7, 1);

  VAR_18 = FUNC_4(VAR_14, VAR_7, VAR_15,
           !VAR_15, 10, 1000);
  if (VAR_18) {
   FUNC_3(VAR_14->dev, "timeout setting address");
   return VAR_18;
  }

  VAR_16 = VAR_4 | FUNC_2(VAR_2)
   | FUNC_0(VAR_11) | FUNC_1(VAR_17);

  FUNC_5(VAR_14, VAR_8, VAR_13);
  FUNC_5(VAR_14, VAR_9, VAR_16);
  VAR_18 = FUNC_4(VAR_14, VAR_7, VAR_15,
           !VAR_15, 10, 1000);
  if (VAR_18)
   FUNC_3(VAR_14->dev, "timeout setting write command");
 } else {
  VAR_17 = VAR_12 & 0x1f;

  VAR_16 = VAR_3 |
   FUNC_2(VAR_1) |
   FUNC_0(VAR_11) | FUNC_1(VAR_17);

  FUNC_5(VAR_14, VAR_8, VAR_13);
  FUNC_5(VAR_14, VAR_9, VAR_16);
  FUNC_5(VAR_14, VAR_7, 1);

  VAR_18 = FUNC_4(VAR_14, VAR_7, VAR_15,
           !VAR_15, 10, 1000);
  if (VAR_18)
   FUNC_3(VAR_14->dev, "timeout setting write command");
 }

 return VAR_18;
}
