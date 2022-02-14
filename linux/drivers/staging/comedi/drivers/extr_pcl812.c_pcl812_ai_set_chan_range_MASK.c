
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl812_private {unsigned int last_ai_chanspec; unsigned int range_correction; int max_812_ai_mode0_rangewait; scalar_t__ use_diff; scalar_t__ use_mpc508; } ;
struct comedi_device {scalar_t__ iobase; struct pcl812_private* private; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_4,
         unsigned int VAR_5, char VAR_6)
{
 struct pcl812_private *VAR_7 = VAR_4->private;
 unsigned int VAR_8 = FUNC_0(VAR_5);
 unsigned int VAR_9 = FUNC_1(VAR_5);
 unsigned int VAR_10 = 0;

 if (VAR_5 == VAR_7->last_ai_chanspec)
  return;

 VAR_7->last_ai_chanspec = VAR_5;

 if (VAR_7->use_mpc508) {
  if (VAR_7->use_diff) {
   VAR_10 |= VAR_0 | VAR_1;
  } else {
   if (VAR_8 < 8)
    VAR_10 |= VAR_0;
   else
    VAR_10 |= VAR_1;
  }
 }

 FUNC_3(VAR_10 | FUNC_2(VAR_8), VAR_4->iobase + VAR_2);
 FUNC_3(VAR_9 + VAR_7->range_correction, VAR_4->iobase + VAR_3);

 if (VAR_6)




  FUNC_4(VAR_7->max_812_ai_mode0_rangewait);
}
