
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct cb_pcidda_private* private; } ;
struct cb_pcidda_private {scalar_t__ daqio; int dac_cal1_bits; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_2, unsigned int VAR_3,
     unsigned int VAR_4)
{
 struct cb_pcidda_private *VAR_5 = VAR_2->private;
 int VAR_6;

 for (VAR_6 = 1; VAR_6 <= VAR_4; VAR_6++) {

  if (VAR_3 & (1 << (VAR_4 - VAR_6)))
   VAR_5->dac_cal1_bits |= VAR_1;
  else
   VAR_5->dac_cal1_bits &= ~VAR_1;
  FUNC_0(VAR_5->dac_cal1_bits, VAR_5->daqio + VAR_0);
 }
}
