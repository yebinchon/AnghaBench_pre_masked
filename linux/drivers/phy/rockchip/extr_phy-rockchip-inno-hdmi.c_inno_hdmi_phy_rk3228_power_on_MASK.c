
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct post_pll_config {int postdiv; int tmdsclock; int fbdiv; int prediv; } ;
struct phy_config {int * regs; } ;
struct inno_hdmi_phy {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct inno_hdmi_phy*,int,int,int,int,int) ;
 int FUNC_6 (struct inno_hdmi_phy*,int,int,int) ;
 int FUNC_7 (struct inno_hdmi_phy*,int,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct inno_hdmi_phy *VAR_10,
         const struct post_pll_config *VAR_11,
         const struct phy_config *VAR_12)
{
 int VAR_13;
 u32 VAR_14;

 FUNC_6(VAR_10, 0x02, VAR_1,
    VAR_1);
 FUNC_6(VAR_10, 0xe0, VAR_8 |
    VAR_6,
    VAR_8 |
    VAR_6);


 FUNC_6(VAR_10, 0xe9, VAR_7,
    FUNC_3(VAR_11->prediv));
 FUNC_6(VAR_10, 0xeb, VAR_2,
    FUNC_1(VAR_11->fbdiv));
 FUNC_7(VAR_10, 0xea, FUNC_0(VAR_11->fbdiv));

 if (VAR_11->postdiv == 1) {
  FUNC_6(VAR_10, 0xe9, VAR_4,
     0);
 } else {
  int VAR_15 = VAR_11->postdiv / 2 - 1;

  FUNC_6(VAR_10, 0xe9, VAR_4,
     VAR_4);
  FUNC_6(VAR_10, 0xeb, VAR_5,
     FUNC_2(VAR_15));
 }

 for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
  FUNC_7(VAR_10, 0xef + VAR_14, VAR_12->regs[VAR_14]);

 FUNC_6(VAR_10, 0xe0, VAR_8 |
    VAR_6, 0);
 FUNC_6(VAR_10, 0xe1, VAR_0,
    VAR_0);
 FUNC_6(VAR_10, 0xe1, VAR_9,
    VAR_9);


 VAR_13 = FUNC_5(VAR_10, 0xeb, VAR_14, VAR_14 & VAR_3,
   100, 100000);
 if (VAR_13) {
  FUNC_4(VAR_10->dev, "Post-PLL locking failed\n");
  return VAR_13;
 }

 if (VAR_11->tmdsclock > 340000000)
  FUNC_8(100);

 FUNC_6(VAR_10, 0x02, VAR_1, 0);
 return 0;
}
