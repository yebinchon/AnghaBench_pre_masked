
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct encx24j600_priv {int hw_enabled; scalar_t__ autoneg; int rxfilter; scalar_t__ full_duplex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct encx24j600_priv*) ;
 int FUNC_1 (struct encx24j600_priv*,char*) ;
 int FUNC_2 (struct encx24j600_priv*) ;
 int FUNC_3 (struct encx24j600_priv*) ;
 int FUNC_4 (struct encx24j600_priv*,int ,int) ;
 int FUNC_5 (struct encx24j600_priv*) ;
 int FUNC_6 (struct encx24j600_priv*) ;
 int FUNC_7 (struct encx24j600_priv*,int ,int,int) ;
 int FUNC_8 (struct encx24j600_priv*,int ,int ) ;
 int FUNC_9 (struct encx24j600_priv*,int ,int) ;
 scalar_t__ FUNC_10 (struct encx24j600_priv*) ;

__attribute__((used)) static int FUNC_11(struct encx24j600_priv *VAR_16)
{
 int VAR_17 = 0;
 u16 VAR_18;

 VAR_16->hw_enabled = 0;





 FUNC_7(VAR_16, VAR_1, 0xff00, 0xcb00);


 FUNC_9(VAR_16, VAR_3, 0x9);


 FUNC_9(VAR_16, VAR_7, 0x0c12);


 FUNC_8(VAR_16, VAR_12, VAR_13);

 FUNC_6(VAR_16);
 FUNC_0(VAR_16);

 VAR_18 = VAR_6 | VAR_15 | VAR_10 | VAR_11 | VAR_5;
 if ((VAR_16->autoneg == VAR_0) && VAR_16->full_duplex)
  VAR_18 |= VAR_2;

 FUNC_4(VAR_16, VAR_4, VAR_18);

 VAR_16->rxfilter = VAR_14;
 FUNC_5(VAR_16);


 FUNC_9(VAR_16, VAR_8, VAR_9);


 FUNC_3(VAR_16);


 FUNC_2(VAR_16);

 if (FUNC_10(VAR_16))
  FUNC_1(VAR_16, "Hw is initialized");

 return VAR_17;
}
