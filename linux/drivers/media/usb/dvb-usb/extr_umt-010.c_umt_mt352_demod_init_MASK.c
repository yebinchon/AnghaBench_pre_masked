
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {int dummy; } ;
typedef int mt352_sec_agc_cfg5 ;
typedef int mt352_sec_agc_cfg4 ;
typedef int mt352_sec_agc_cfg3 ;
typedef int mt352_sec_agc_cfg2 ;
typedef int mt352_sec_agc_cfg1 ;
typedef int mt352_reset ;
typedef int mt352_mclk_ratio ;
typedef int mt352_input_freq_1 ;
typedef int mt352_clock_config ;
typedef int mt352_agc_cfg ;
typedef int mt352_adc_ctl_1_cfg ;
typedef int mt352_acq_ctl ;


 int FUNC_0 (struct dvb_frontend*,int*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 static u8 VAR_1[] = { 0x89, 0xb8, 0x2d };
 static u8 VAR_2[] = { 0x50, 0x80 };
 static u8 VAR_3[] = { 0x8b, 0x00 };
 static u8 VAR_4[] = { 0x8E, 0x40 };
 static u8 VAR_5[] = { 0x67, 0x10, 0xa0 };

 static u8 VAR_6[] = { 0x6a, 0xff };
 static u8 VAR_7[] = { 0x6d, 0xff };
 static u8 VAR_8[] = { 0x70, 0x40 };
 static u8 VAR_9[] = { 0x7b, 0x03 };
 static u8 VAR_10[] = { 0x7d, 0x0f };

 static u8 VAR_11[] = { 0x53, 0x50 };
 static u8 VAR_12[] = { 0x56, 0x31, 0x06 };

 FUNC_0(VAR_0, VAR_1, sizeof(VAR_1));
 FUNC_1(2000);
 FUNC_0(VAR_0, VAR_2, sizeof(VAR_2));
 FUNC_0(VAR_0, VAR_3, sizeof(VAR_3));

 FUNC_0(VAR_0, VAR_4, sizeof(VAR_4));
 FUNC_0(VAR_0, VAR_5, sizeof(VAR_5));

 FUNC_0(VAR_0, VAR_6, sizeof(VAR_6));
 FUNC_0(VAR_0, VAR_7, sizeof(VAR_7));
 FUNC_0(VAR_0, VAR_8, sizeof(VAR_8));
 FUNC_0(VAR_0, VAR_9, sizeof(VAR_9));
 FUNC_0(VAR_0, VAR_10, sizeof(VAR_10));

 FUNC_0(VAR_0, VAR_11, sizeof(VAR_11));
 FUNC_0(VAR_0, VAR_12, sizeof(VAR_12));

 return 0;
}
