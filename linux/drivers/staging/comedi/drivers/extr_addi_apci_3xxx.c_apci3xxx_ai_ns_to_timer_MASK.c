
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct apci3xxx_private* private; struct apci3xxx_boardinfo* board_ptr; } ;
struct apci3xxx_private {int ai_time_base; unsigned int ai_timer; } ;
struct apci3xxx_boardinfo {int ai_conv_units; } ;



 unsigned int VAR_0 ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
       unsigned int *VAR_3, unsigned int VAR_4)
{
 const struct apci3xxx_boardinfo *VAR_5 = VAR_2->board_ptr;
 struct apci3xxx_private *VAR_6 = VAR_2->private;
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9;


 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {

  if (!(VAR_5->ai_conv_units & (1 << VAR_9)))
   continue;

  switch (VAR_9) {
  case 0:
   VAR_7 = 1;
   break;
  case 1:
   VAR_7 = 1000;
   break;
  case 2:
   VAR_7 = 1000000;
   break;
  }

  switch (VAR_4 & VAR_0) {
  case 129:
  default:
   VAR_8 = FUNC_0(*VAR_3, VAR_7);
   break;
  case 130:
   VAR_8 = *VAR_3 / VAR_7;
   break;
  case 128:
   VAR_8 = FUNC_1(*VAR_3, VAR_7);
   break;
  }

  if (VAR_8 < 0x10000) {
   VAR_6->ai_time_base = VAR_9;
   VAR_6->ai_timer = VAR_8;
   *VAR_3 = VAR_8 * VAR_9;
   return 0;
  }
 }
 return -VAR_1;
}
