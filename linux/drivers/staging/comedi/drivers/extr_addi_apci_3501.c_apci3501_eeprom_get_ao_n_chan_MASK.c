
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct apci3501_private* private; } ;
struct apci3501_private {int amcc; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (int ,unsigned short) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1)
{
 struct apci3501_private *VAR_2 = VAR_1->private;
 unsigned char VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2->amcc, 10) & 0xff;


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  unsigned short VAR_5 = VAR_4 * 4;
  unsigned short VAR_6;
  unsigned char VAR_7;
  unsigned short VAR_8;

  VAR_7 = FUNC_0(VAR_2->amcc, 12 + VAR_5) & 0x3f;
  VAR_6 = FUNC_0(VAR_2->amcc, 14 + VAR_5);

  if (VAR_7 == VAR_0) {
   VAR_8 = FUNC_0(VAR_2->amcc, VAR_6 + 10);
   return (VAR_8 >> 4) & 0x3ff;
  }
 }
 return 0;
}
