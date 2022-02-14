
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_frontend {int dummy; } ;
typedef int reset ;
typedef int dntv_extra ;
typedef int clock_config ;
typedef int capt_range_cfg ;
typedef int agc_cfg ;
typedef int adc_ctl_1_cfg ;


 int FUNC_0 (struct dvb_frontend*,int const*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 static const u8 VAR_1[] = { 0x89, 0x38, 0x39 };
 static const u8 VAR_2[] = { 0x50, 0x80 };
 static const u8 VAR_3[] = { 0x8E, 0x40 };
 static const u8 VAR_4[] = { 0x67, 0x10, 0x23, 0x00, 0xFF, 0xFF,
           0x00, 0xFF, 0x00, 0x40, 0x40 };
 static const u8 VAR_5[] = { 0xB5, 0x7A };
 static const u8 VAR_6[] = { 0x75, 0x32 };

 FUNC_0(VAR_0, VAR_1, sizeof(VAR_1));
 FUNC_1(2000);
 FUNC_0(VAR_0, VAR_2, sizeof(VAR_2));
 FUNC_0(VAR_0, VAR_3, sizeof(VAR_3));

 FUNC_0(VAR_0, VAR_4, sizeof(VAR_4));
 FUNC_1(2000);
 FUNC_0(VAR_0, VAR_5, sizeof(VAR_5));
 FUNC_0(VAR_0, VAR_6, sizeof(VAR_6));

 return 0;
}
