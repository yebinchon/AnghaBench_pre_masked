
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_ca_en50221 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (struct dvb_ca_en50221*,int ,int*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_ca_en50221 *VAR_2, int VAR_3, int VAR_4, u8 VAR_5)
{
 u8 VAR_6[3];

 FUNC_0("%d 0x%04x 0x%02x", VAR_3, VAR_4, VAR_5);

 if (VAR_3)
  return -VAR_0;

 VAR_6[0] = (VAR_4 >> 8) & 0x0F;
 VAR_6[1] = VAR_4;
 VAR_6[2] = VAR_5;

 return FUNC_1(VAR_2, VAR_1, VAR_6, 3, 3);
}
