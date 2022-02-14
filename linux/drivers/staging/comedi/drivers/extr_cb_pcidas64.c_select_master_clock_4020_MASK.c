
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chanspec; } ;
struct pcidas64_private {scalar_t__ main_iobase; int hw_config_bits; TYPE_1__ ext_clock; } ;
struct comedi_device {struct pcidas64_private* private; } ;
struct comedi_cmd {scalar_t__ scan_begin_src; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_6,
         const struct comedi_cmd *VAR_7)
{
 struct pcidas64_private *VAR_8 = VAR_6->private;


 VAR_8->hw_config_bits &= ~VAR_4;
 if (VAR_7->scan_begin_src == VAR_5) {
  int VAR_9 = VAR_8->ext_clock.chanspec;

  if (FUNC_0(VAR_9))
   VAR_8->hw_config_bits |= VAR_0;
  else
   VAR_8->hw_config_bits |= VAR_1;
 } else {
  VAR_8->hw_config_bits |= VAR_3;
 }
 FUNC_1(VAR_8->hw_config_bits,
        VAR_8->main_iobase + VAR_2);
}
