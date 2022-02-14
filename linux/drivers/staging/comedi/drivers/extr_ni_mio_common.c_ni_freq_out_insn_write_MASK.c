
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int clock_and_fout; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct ni_private* private; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3,
      struct comedi_subdevice *VAR_4,
      struct comedi_insn *VAR_5,
      unsigned int *VAR_6)
{
 struct ni_private *VAR_7 = VAR_3->private;

 if (VAR_5->n) {
  unsigned int VAR_8 = VAR_6[VAR_5->n - 1];

  VAR_7->clock_and_fout &= ~VAR_1;
  FUNC_1(VAR_3, VAR_7->clock_and_fout, VAR_2);
  VAR_7->clock_and_fout &= ~VAR_0;


  VAR_7->clock_and_fout |= FUNC_0(VAR_8);

  VAR_7->clock_and_fout |= VAR_1;
  FUNC_1(VAR_3, VAR_7->clock_and_fout, VAR_2);
 }
 return VAR_5->n;
}
