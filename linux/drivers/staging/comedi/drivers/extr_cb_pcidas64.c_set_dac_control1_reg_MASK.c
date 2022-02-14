
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {scalar_t__ main_iobase; int dac_control1_bits; } ;
struct comedi_device {struct pcidas64_private* private; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct comedi_device*,int *,int,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_2,
     const struct comedi_cmd *VAR_3)
{
 struct pcidas64_private *VAR_4 = VAR_2->private;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->chanlist_len; VAR_5++) {
  int VAR_6, VAR_7;

  VAR_6 = FUNC_0(VAR_3->chanlist[VAR_5]);
  VAR_7 = FUNC_1(VAR_3->chanlist[VAR_5]);
  FUNC_2(VAR_2, &VAR_4->dac_control1_bits, VAR_6,
       VAR_7);
 }
 VAR_4->dac_control1_bits |= VAR_1;
 FUNC_3(VAR_4->dac_control1_bits,
        VAR_4->main_iobase + VAR_0);
}
