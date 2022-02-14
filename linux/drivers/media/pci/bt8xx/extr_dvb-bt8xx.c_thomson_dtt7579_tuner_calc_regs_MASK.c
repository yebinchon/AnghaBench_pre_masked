
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_2, u8* VAR_3, int VAR_4)
{
 struct dtv_frontend_properties *VAR_5 = &VAR_2->dtv_property_cache;
 u32 VAR_6;
 unsigned char VAR_7 = 0;
 unsigned char VAR_8 = 0;

 if (VAR_4 < 5)
  return -VAR_0;

 VAR_6 = (((VAR_5->frequency + 83333) * 3) / 500000) + VAR_1;

 if (VAR_5->frequency < 542000000)
  VAR_8 = 0xb4;
 else if (VAR_5->frequency < 771000000)
  VAR_8 = 0xbc;
 else
  VAR_8 = 0xf4;

 if (VAR_5->frequency == 0)
  VAR_7 = 0x03;
 else if (VAR_5->frequency < 443250000)
  VAR_7 = 0x02;
 else
  VAR_7 = 0x08;

 VAR_3[0] = 0x60;
 VAR_3[1] = VAR_6 >> 8;
 VAR_3[2] = VAR_6 & 0xff;
 VAR_3[3] = VAR_8;
 VAR_3[4] = VAR_7;

 return 5;
}
