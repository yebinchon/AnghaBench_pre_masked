
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int cur_clk; scalar_t__ ssc_en; } ;


 int VAR_0 ;
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
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int ,int ) ;
 int FUNC_5 (struct rtsx_chip*,int ,int,int ) ;
 int FUNC_6 (int) ;

int FUNC_7(struct rtsx_chip *VAR_16, int VAR_17)
{
 int VAR_18;
 u8 VAR_19 = (u8)(VAR_17 - 2), VAR_20, VAR_21;
 u8 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 int VAR_27 = 0;

 if (VAR_16->cur_clk == VAR_17)
  return VAR_13;

 VAR_20 = 60;
 VAR_21 = 120;
 VAR_24 = VAR_3;

 FUNC_0(FUNC_2(VAR_16), "Switch SSC clock to %dMHz (cur_clk = %d)\n",
  VAR_17, VAR_16->cur_clk);

 if ((VAR_17 <= 2) || (VAR_19 > VAR_21))
  return VAR_12;

 VAR_22 = (u8)(125 / VAR_17 + 3);
 if (VAR_22 > 7)
  VAR_22 = 7;

 VAR_23 = VAR_2;
 while ((VAR_19 < VAR_20) && (VAR_23 < VAR_24)) {
  VAR_19 = (VAR_19 + 2) * 2 - 2;
  VAR_23++;
 }
 FUNC_0(FUNC_2(VAR_16), "n = %d, div = %d\n", VAR_19, VAR_23);

 if (VAR_16->ssc_en) {
  VAR_25 = 0x01;
  VAR_19 -= 2;
 } else {
  VAR_25 = 0;
 }

 VAR_26 = 0x03;

 FUNC_0(FUNC_2(VAR_16), "ssc_depth = %d\n", VAR_25);

 FUNC_3(VAR_16);
 FUNC_1(VAR_16, VAR_15, VAR_0, VAR_4, VAR_4);
 FUNC_1(VAR_16, VAR_15, VAR_1, 0xFF, (VAR_23 << 4) | VAR_22);
 FUNC_1(VAR_16, VAR_15, VAR_7, VAR_10, 0);
 FUNC_1(VAR_16, VAR_15, VAR_8, VAR_26, VAR_25);
 FUNC_1(VAR_16, VAR_15, VAR_9, 0xFF, VAR_19);
 FUNC_1(VAR_16, VAR_15, VAR_7, VAR_10, VAR_10);
 if (VAR_27) {
  FUNC_1(VAR_16, VAR_15, VAR_6,
        VAR_5, 0);
  FUNC_1(VAR_16, VAR_15, VAR_6,
        VAR_5, VAR_5);
 }

 VAR_18 = FUNC_4(VAR_16, 0, VAR_14);
 if (VAR_18 < 0)
  return VAR_11;

 FUNC_6(10);
 VAR_18 = FUNC_5(VAR_16, VAR_0, VAR_4, 0);
 if (VAR_18)
  return VAR_18;

 VAR_16->cur_clk = VAR_17;

 return VAR_13;
}
