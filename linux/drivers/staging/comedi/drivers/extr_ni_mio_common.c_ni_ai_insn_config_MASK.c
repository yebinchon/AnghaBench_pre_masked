
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned int ai_calib_source; int is_6143; int is_611x; int is_m_series; } ;
struct ni_board_struct {unsigned int ai_speed; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct ni_private* private; struct ni_board_struct* board_ptr; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct comedi_device*,unsigned int) ;
 int FUNC_1 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_2 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4,
        struct comedi_subdevice *VAR_5,
        struct comedi_insn *VAR_6, unsigned int *VAR_7)
{
 const struct ni_board_struct *VAR_8 = VAR_4->board_ptr;
 struct ni_private *VAR_9 = VAR_4->private;

 if (VAR_6->n < 1)
  return -VAR_0;

 switch (VAR_7[0]) {
 case 129:
  if (VAR_9->is_m_series) {
   if (VAR_7[1] & ~VAR_3)
    return -VAR_0;
   VAR_9->ai_calib_source = VAR_7[1];
  } else if (VAR_9->is_6143) {
   unsigned int VAR_10;

   VAR_10 = VAR_7[1] & 0xf;

   VAR_9->ai_calib_source = VAR_10;
   FUNC_2(VAR_4, VAR_10, VAR_2);
  } else {
   unsigned int VAR_11;
   unsigned int VAR_12;

   VAR_11 = VAR_7[1] & 0xf;
   VAR_12 = (VAR_7[1] >> 4) & 0xff;

   if (VAR_11 >= 8)
    return -VAR_0;
   VAR_9->ai_calib_source = VAR_11;
   if (VAR_9->is_611x) {
    FUNC_1(VAR_4, VAR_12,
       VAR_1);
   }
  }
  return 2;
 case 128:


  VAR_7[1] = FUNC_0(VAR_4, VAR_7[3]);
  if (VAR_9->is_611x || VAR_9->is_6143)
   VAR_7[2] = 0;
  else
   VAR_7[2] = VAR_8->ai_speed;
  return 0;
 default:
  break;
 }

 return -VAR_0;
}
