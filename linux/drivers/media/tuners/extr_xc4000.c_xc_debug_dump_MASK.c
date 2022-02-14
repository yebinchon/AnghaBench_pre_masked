
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct xc4000_priv {scalar_t__ video_standard; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (struct xc4000_priv*,int*) ;
 int FUNC_2 (struct xc4000_priv*,int*) ;
 int FUNC_3 (struct xc4000_priv*,int *) ;
 int FUNC_4 (struct xc4000_priv*,int *) ;
 int FUNC_5 (struct xc4000_priv*,int*) ;
 int FUNC_6 (struct xc4000_priv*,int*) ;
 int FUNC_7 (struct xc4000_priv*,int*) ;
 int FUNC_8 (struct xc4000_priv*,int*) ;
 int FUNC_9 (struct xc4000_priv*,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_10(struct xc4000_priv *VAR_1)
{
 u16 VAR_2;
 u32 VAR_3 = 0;
 u16 VAR_4;
 u32 VAR_5 = 0;
 u16 VAR_6;
 u16 VAR_7;
 u16 VAR_8 = 0;
 u16 VAR_9 = 0;
 u8 VAR_10 = 0, VAR_11 = 0;
 u8 VAR_12 = 0, VAR_13 = 0;

 FUNC_1(VAR_1, &VAR_2);
 FUNC_0(1, "*** ADC envelope (0-1023) = %d\n", VAR_2);

 FUNC_3(VAR_1, &VAR_3);
 FUNC_0(1, "*** Frequency error = %d Hz\n", VAR_3);

 FUNC_5(VAR_1, &VAR_4);
 FUNC_0(1, "*** Lock status (0-Wait, 1-Locked, 2-No-signal) = %d\n",
  VAR_4);

 FUNC_9(VAR_1, &VAR_10, &VAR_11,
         &VAR_12, &VAR_13);
 FUNC_0(1, "*** HW: V%02x.%02x, FW: V%02x.%02x\n",
  VAR_10, VAR_11,
  VAR_12, VAR_13);

 if (VAR_1->video_standard < VAR_0) {
  FUNC_4(VAR_1, &VAR_5);
  FUNC_0(1, "*** Horizontal sync frequency = %d Hz\n",
   VAR_5);

  FUNC_2(VAR_1, &VAR_6);
  FUNC_0(1, "*** Frame lines = %d\n", VAR_6);
 }

 FUNC_7(VAR_1, &VAR_7);
 FUNC_0(1, "*** Quality (0:<8dB, 7:>56dB) = %d\n", VAR_7);

 FUNC_8(VAR_1, &VAR_8);
 FUNC_0(1, "*** Signal level = -%ddB (%d)\n", VAR_8 >> 8, VAR_8);

 FUNC_6(VAR_1, &VAR_9);
 FUNC_0(1, "*** Noise level = %ddB (%d)\n", VAR_9 >> 8, VAR_9);
}
