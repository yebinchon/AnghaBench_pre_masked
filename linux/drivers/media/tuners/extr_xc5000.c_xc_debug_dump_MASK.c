
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct xc5000_priv {scalar_t__ pll_register_no; } ;


 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct xc5000_priv*,scalar_t__,int*) ;
 int FUNC_3 (struct xc5000_priv*,int*) ;
 int FUNC_4 (struct xc5000_priv*,int*) ;
 int FUNC_5 (struct xc5000_priv*,int*) ;
 int FUNC_6 (struct xc5000_priv*,int*) ;
 int FUNC_7 (struct xc5000_priv*,int*) ;
 int FUNC_8 (struct xc5000_priv*,int*) ;
 int FUNC_9 (struct xc5000_priv*,int*) ;
 int FUNC_10 (struct xc5000_priv*,int*) ;
 int FUNC_11 (struct xc5000_priv*,int*) ;
 int FUNC_12 (struct xc5000_priv*,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_13(struct xc5000_priv *VAR_0)
{
 u16 VAR_1;
 u32 VAR_2 = 0;
 u16 VAR_3;
 u32 VAR_4 = 0;
 u16 VAR_5;
 u16 VAR_6;
 u16 VAR_7;
 u16 VAR_8;
 u8 VAR_9 = 0, VAR_10 = 0;
 u8 VAR_11 = 0, VAR_12 = 0;
 u16 VAR_13 = 0;
 u16 VAR_14;





 FUNC_1(100);

 FUNC_3(VAR_0, &VAR_1);
 FUNC_0(1, "*** ADC envelope (0-1023) = %d\n", VAR_1);

 FUNC_7(VAR_0, &VAR_2);
 FUNC_0(1, "*** Frequency error = %d Hz\n", VAR_2);

 FUNC_9(VAR_0, &VAR_3);
 FUNC_0(1, "*** Lock status (0-Wait, 1-Locked, 2-No-signal) = %d\n",
  VAR_3);

 FUNC_12(VAR_0, &VAR_9, &VAR_10,
  &VAR_11, &VAR_12);
 FUNC_5(VAR_0, &VAR_13);
 FUNC_0(1, "*** HW: V%d.%d, FW: V %d.%d.%d\n",
  VAR_9, VAR_10,
  VAR_11, VAR_12, VAR_13);

 FUNC_8(VAR_0, &VAR_4);
 FUNC_0(1, "*** Horizontal sync frequency = %d Hz\n", VAR_4);

 FUNC_6(VAR_0, &VAR_5);
 FUNC_0(1, "*** Frame lines = %d\n", VAR_5);

 FUNC_10(VAR_0, &VAR_6);
 FUNC_0(1, "*** Quality (0:<8dB, 7:>56dB) = %d\n", VAR_6 & 0x07);

 FUNC_4(VAR_0, &VAR_7);
 FUNC_0(1, "*** Unweighted analog SNR = %d dB\n", VAR_7 & 0x3f);

 FUNC_11(VAR_0, &VAR_8);
 FUNC_0(1, "*** Total gain = %d.%d dB\n", VAR_8 / 256,
  (VAR_8 % 256) * 100 / 256);

 if (VAR_0->pll_register_no) {
  if (!FUNC_2(VAR_0, VAR_0->pll_register_no, &VAR_14))
   FUNC_0(1, "*** PLL lock status = 0x%04x\n", VAR_14);
 }
}
