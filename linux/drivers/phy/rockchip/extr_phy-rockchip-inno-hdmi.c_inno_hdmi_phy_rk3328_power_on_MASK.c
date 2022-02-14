
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct post_pll_config {int postdiv; int prediv; int fbdiv; } ;
struct phy_config {int* regs; int tmdsclock; } ;
struct inno_hdmi_phy {int dev; int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct inno_hdmi_phy*,int,int,int,int,int) ;
 int FUNC_12 (struct inno_hdmi_phy*,int,int,int) ;
 int FUNC_13 (struct inno_hdmi_phy*,int,int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static int
FUNC_15(struct inno_hdmi_phy *VAR_16,
         const struct post_pll_config *VAR_17,
         const struct phy_config *VAR_18)
{
 int VAR_19;
 u32 VAR_20;

 FUNC_12(VAR_16, 0x02, VAR_5, 0);
 FUNC_12(VAR_16, 0xaa, VAR_9,
    VAR_9);

 FUNC_13(VAR_16, 0xac, FUNC_4(VAR_17->fbdiv));
 if (VAR_17->postdiv == 1) {
  FUNC_13(VAR_16, 0xaa, VAR_10);
  FUNC_13(VAR_16, 0xab, FUNC_5(VAR_17->fbdiv) |
      FUNC_6(VAR_17->prediv));
 } else {
  VAR_20 = (VAR_17->postdiv / 2) - 1;
  VAR_20 &= VAR_8;
  FUNC_13(VAR_16, 0xad, VAR_20);
  FUNC_13(VAR_16, 0xab, FUNC_5(VAR_17->fbdiv) |
      FUNC_6(VAR_17->prediv));
  FUNC_13(VAR_16, 0xaa, VAR_7 |
      VAR_10);
 }

 for (VAR_20 = 0; VAR_20 < 14; VAR_20++)
  FUNC_13(VAR_16, 0xb5 + VAR_20, VAR_18->regs[VAR_20]);


 for (VAR_20 = 0; VAR_20 < 4; VAR_20++)
  FUNC_12(VAR_16, 0xc8 + VAR_20, VAR_3,
     VAR_2);

 if (VAR_18->tmdsclock > 340000000) {

  VAR_20 = FUNC_9(VAR_16->sysclk) / 100000;
  FUNC_13(VAR_16, 0xc5, FUNC_7(VAR_20)
      | VAR_1);
  FUNC_13(VAR_16, 0xc6, FUNC_8(VAR_20));
  FUNC_13(VAR_16, 0xc7, VAR_11);
  FUNC_12(VAR_16, 0xc5,
     VAR_1, 0);
 } else {
  FUNC_13(VAR_16, 0xc5, VAR_1);


  if (VAR_18->tmdsclock > 165000000)
   FUNC_12(VAR_16, 0xc8,
      VAR_15,
      VAR_14 |
      VAR_13);


  for (VAR_20 = 0; VAR_20 < 3; VAR_20++)
   FUNC_12(VAR_16, 0xc9 + VAR_20,
      VAR_15,
      VAR_13);
 }

 FUNC_12(VAR_16, 0xaa, VAR_9, 0);
 FUNC_12(VAR_16, 0xb0, VAR_0,
    VAR_0);
 FUNC_12(VAR_16, 0xb2, VAR_12,
    VAR_12);


 VAR_19 = FUNC_11(VAR_16, 0xaf, VAR_20, VAR_20 & VAR_6,
   1000, 10000);
 if (VAR_19) {
  FUNC_10(VAR_16->dev, "Post-PLL locking failed\n");
  return VAR_19;
 }

 if (VAR_18->tmdsclock > 340000000)
  FUNC_14(100);

 FUNC_12(VAR_16, 0x02, VAR_5, VAR_5);


 FUNC_13(VAR_16, 0x05, FUNC_0(VAR_4)
     | FUNC_3(VAR_4));
 FUNC_13(VAR_16, 0x07, FUNC_2(VAR_4)
     | FUNC_1(VAR_4));
 return 0;
}
