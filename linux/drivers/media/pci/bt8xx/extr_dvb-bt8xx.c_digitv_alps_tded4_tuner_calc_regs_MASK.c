
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dtv_frontend_properties {int frequency; int bandwidth_hz; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_2, u8 *VAR_3, int VAR_4)
{
 u32 VAR_5;
 struct dtv_frontend_properties *VAR_6 = &VAR_2->dtv_property_cache;

 if (VAR_4 < 5)
  return -VAR_0;

 VAR_5 = (((VAR_6->frequency + 83333) * 3) / 500000) + VAR_1;

 VAR_3[0] = 0x61;
 VAR_3[1] = (VAR_5 >> 8) & 0x7F;
 VAR_3[2] = VAR_5 & 0xFF;
 VAR_3[3] = 0x85;

 FUNC_0("frequency %u, div %u\n", VAR_6->frequency, VAR_5);

 if (VAR_6->frequency < 470000000)
  VAR_3[4] = 0x02;
 else if (VAR_6->frequency > 823000000)
  VAR_3[4] = 0x88;
 else
  VAR_3[4] = 0x08;

 if (VAR_6->bandwidth_hz == 8000000)
  VAR_3[4] |= 0x04;

 return 5;
}
