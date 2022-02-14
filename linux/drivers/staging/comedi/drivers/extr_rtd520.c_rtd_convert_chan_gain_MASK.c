
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtd_boardinfo {unsigned int range_bip10; unsigned int range_uni10; } ;
struct comedi_device {struct rtd_boardinfo* board_ptr; } ;






 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;

__attribute__((used)) static unsigned short FUNC_3(struct comedi_device *VAR_0,
         unsigned int VAR_1, int VAR_2)
{
 const struct rtd_boardinfo *VAR_3 = VAR_0->board_ptr;
 unsigned int VAR_4 = FUNC_1(VAR_1);
 unsigned int VAR_5 = FUNC_2(VAR_1);
 unsigned int VAR_6 = FUNC_0(VAR_1);
 unsigned short VAR_7 = 0;

 VAR_7 |= VAR_4 & 0xf;


 if (VAR_5 < VAR_3->range_bip10) {

  VAR_7 |= 0x000;
  VAR_7 |= (VAR_5 & 0x7) << 4;
 } else if (VAR_5 < VAR_3->range_uni10) {

  VAR_7 |= 0x100;
  VAR_7 |= ((VAR_5 - VAR_3->range_bip10) & 0x7) << 4;
 } else {

  VAR_7 |= 0x200;
  VAR_7 |= ((VAR_5 - VAR_3->range_uni10) & 0x7) << 4;
 }

 switch (VAR_6) {
 case 129:
  break;

 case 131:
  VAR_7 |= 0x80;
  break;

 case 130:
  VAR_7 |= 0x400;
  break;

 case 128:
  break;
 }
 return VAR_7;
}
