
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned int clock_ns; int clock_and_fout2; unsigned int clock_source; int rtsi_trig_direction_reg; scalar_t__ is_m_series; } ;
struct comedi_device {int class_dev; struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;
 int FUNC_3 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_10,
          unsigned int VAR_11, unsigned int VAR_12)
{
 struct ni_private *VAR_13 = VAR_10->private;

 if (VAR_11 == VAR_3) {
  VAR_13->rtsi_trig_direction_reg &= ~VAR_2;
  FUNC_2(VAR_10, VAR_13->rtsi_trig_direction_reg,
         VAR_1);
  VAR_13->clock_ns = VAR_9;
  if (VAR_13->is_m_series) {
   VAR_13->clock_and_fout2 &=
       ~(VAR_6 |
         VAR_7);
   FUNC_3(VAR_10, VAR_13->clock_and_fout2,
      VAR_5);
   FUNC_3(VAR_10, 0, VAR_8);
  }
  VAR_13->clock_source = VAR_11;
 } else {
  if (VAR_13->is_m_series) {
   return FUNC_1(VAR_10, VAR_11,
              VAR_12);
  } else {
   if (VAR_11 == VAR_4) {
    VAR_13->rtsi_trig_direction_reg |=
        VAR_2;
    FUNC_2(VAR_10,
           VAR_13->rtsi_trig_direction_reg,
           VAR_1);
    if (VAR_12 == 0) {
     FUNC_0(VAR_10->class_dev,
      "we don't handle an unspecified clock period correctly yet, returning error\n");
     return -VAR_0;
    }
    VAR_13->clock_ns = VAR_12;
    VAR_13->clock_source = VAR_11;
   } else {
    return -VAR_0;
   }
  }
 }
 return 3;
}
