
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*,int) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0, int VAR_1, int VAR_2)
{
 u16 VAR_3, VAR_4, VAR_5, VAR_6;


 VAR_3 = 0;
 VAR_4 = 0x0004;
 VAR_5 = (VAR_1 << 6) & 0x00c0;
 switch (VAR_1 / 4) {
 case 0:
  VAR_6 = 0x0001;
  break;
 case 1:
  VAR_6 = 0x0002;
  break;
 case 2:
  VAR_6 = 0x0005;
  break;
 case 3:
  VAR_6 = 0x0006;
  break;
 case 4:
  VAR_6 = 0x0041;
  break;
 case 5:
  VAR_6 = 0x0042;
  break;
 default:
  VAR_6 = 0;
  break;
 }

 VAR_5 |= 0x0800;
 VAR_6 |= 0xc000;
 FUNC_0(VAR_0, VAR_3);
 FUNC_0(VAR_0, VAR_4);
 FUNC_0(VAR_0, VAR_5);
 FUNC_0(VAR_0, VAR_6);
}
