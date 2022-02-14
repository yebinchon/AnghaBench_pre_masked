
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct m920x_state {int rep_count; } ;
struct dvb_usb_device {struct m920x_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static inline void FUNC_1(struct dvb_usb_device *VAR_3, u8 VAR_4,
     int *VAR_5)
{
 struct m920x_state *VAR_6 = VAR_3->priv;

 switch (VAR_4) {
 case 0x80:
  *VAR_5 = VAR_2;
  break;

 case 0x88:
 case 0x99:
 case 0xc0:
 case 0xd8:
  *VAR_5 = VAR_2;
  VAR_6->rep_count = 0;
  break;

 case 0x93:
 case 0x92:
 case 0x83:
 case 0x82:
  VAR_6->rep_count = 0;
  *VAR_5 = VAR_0;
  break;

 case 0x91:
 case 0x81:

  if (++VAR_6->rep_count > 2)
   *VAR_5 = VAR_1;
  else
   *VAR_5 = VAR_2;
  break;

 default:
  FUNC_0("Unexpected rc state %02x\n", VAR_4);
  *VAR_5 = VAR_2;
  break;
 }
}
