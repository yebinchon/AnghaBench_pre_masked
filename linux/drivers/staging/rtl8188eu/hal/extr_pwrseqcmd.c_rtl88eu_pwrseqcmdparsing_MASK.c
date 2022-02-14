
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct wl_pwr_cfg {int dummy; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (struct wl_pwr_cfg) ;
 int FUNC_2 (struct wl_pwr_cfg) ;
 int FUNC_3 (struct wl_pwr_cfg) ;
 int FUNC_4 (struct wl_pwr_cfg) ;
 int FUNC_5 (struct wl_pwr_cfg) ;
 int VAR_0 ;





 int FUNC_6 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct adapter*,size_t) ;
 int FUNC_9 (struct adapter*,size_t,int) ;

u8 FUNC_10(struct adapter *VAR_4, u8 VAR_5,
       struct wl_pwr_cfg VAR_6[])
{
 struct wl_pwr_cfg VAR_7;
 u8 VAR_8 = 0;
 u32 VAR_9 = 0;
 u8 VAR_10 = 0;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 u32 VAR_13 = 5000;

 do {
  VAR_7 = VAR_6[VAR_9];

  FUNC_6(VAR_3, VAR_2,
    ("rtl88eu_pwrseqcmdparsing: offset(%#x) cut_msk(%#x)"
     " cmd(%#x)"
     "msk(%#x) value(%#x)\n",
    FUNC_4(VAR_7),
    FUNC_2(VAR_7),
    FUNC_1(VAR_7),
    FUNC_3(VAR_7),
    FUNC_5(VAR_7)));


  if (FUNC_2(VAR_7) & VAR_5) {
   switch (FUNC_1(VAR_7)) {
   case 129:
    FUNC_6(VAR_3, VAR_2,
      ("rtl88eu_pwrseqcmdparsing: PWR_CMD_READ\n"));
    break;
   case 128:
    FUNC_6(VAR_3, VAR_2,
      ("rtl88eu_pwrseqcmdparsing: PWR_CMD_WRITE\n"));
    VAR_11 = FUNC_4(VAR_7);


    VAR_10 = FUNC_8(VAR_4, VAR_11);

    VAR_10 &= ~(FUNC_3(VAR_7));
    VAR_10 |= (FUNC_5(VAR_7) &
       FUNC_3(VAR_7));


    FUNC_9(VAR_4, VAR_11, VAR_10);
    break;
   case 130:
    FUNC_6(VAR_3, VAR_2,
      ("rtl88eu_pwrseqcmdparsing: PWR_CMD_POLLING\n"));

    VAR_8 = 0;
    VAR_11 = FUNC_4(VAR_7);
    do {
     VAR_10 = FUNC_8(VAR_4, VAR_11);
     VAR_10 &= FUNC_3(VAR_7);

     if (VAR_10 == (FUNC_5(VAR_7) &
            FUNC_3(VAR_7)))
      VAR_8 = 1;
     else
      FUNC_7(10);

     if (VAR_12++ > VAR_13) {
      FUNC_0("Fail to polling Offset[%#x]\n", VAR_11);
      return 0;
     }
    } while (!VAR_8);
    break;
   case 132:
    FUNC_6(VAR_3, VAR_2,
      ("rtl88eu_pwrseqcmdparsing: PWR_CMD_DELAY\n"));
    if (FUNC_5(VAR_7) == VAR_0)
     FUNC_7(FUNC_4(VAR_7));
    else
     FUNC_7(FUNC_4(VAR_7)*1000);
    break;
   case 131:

    FUNC_6(VAR_3, VAR_2,
      ("rtl88eu_pwrseqcmdparsing: PWR_CMD_END\n"));
    return 1;
   default:
    FUNC_6(VAR_3, VAR_1,
      ("rtl88eu_pwrseqcmdparsing: Unknown CMD!!\n"));
    break;
   }
  }

  VAR_9++;
 } while (1);
 return 1;
}
