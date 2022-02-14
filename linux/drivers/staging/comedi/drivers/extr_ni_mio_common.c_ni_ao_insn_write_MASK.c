
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {scalar_t__ is_m_series; scalar_t__ is_6xxx; } ;
struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct ni_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (struct comedi_subdevice*,unsigned int) ;
 scalar_t__ FUNC_6 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*,int *,int,int ) ;
 int FUNC_8 (struct comedi_device*,unsigned int,int) ;
 int FUNC_9 (struct comedi_device*,unsigned int,int) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2,
       struct comedi_insn *VAR_3,
       unsigned int *VAR_4)
{
 struct ni_private *VAR_5 = VAR_1->private;
 unsigned int VAR_6 = FUNC_0(VAR_3->chanspec);
 unsigned int VAR_7 = FUNC_1(VAR_3->chanspec);
 int VAR_8;
 int VAR_9;

 if (VAR_5->is_6xxx) {
  FUNC_8(VAR_1, 1 << VAR_6, VAR_0);

  VAR_8 = FUNC_2(VAR_6);
 } else if (VAR_5->is_m_series) {
  VAR_8 = FUNC_4(VAR_6);
 } else {
  VAR_8 = FUNC_3(VAR_6);
 }

 FUNC_7(VAR_1, VAR_2, &VAR_3->chanspec, 1, 0);

 for (VAR_9 = 0; VAR_9 < VAR_3->n; VAR_9++) {
  unsigned int VAR_10 = VAR_4[VAR_9];

  VAR_2->readback[VAR_6] = VAR_10;

  if (VAR_5->is_6xxx) {




   VAR_10 = FUNC_5(VAR_2, VAR_10);

   FUNC_8(VAR_1, VAR_10, VAR_8);
  } else if (VAR_5->is_m_series) {




   FUNC_9(VAR_1, VAR_10, VAR_8);
  } else {




   if (FUNC_6(VAR_2, VAR_7))
    VAR_10 = FUNC_5(VAR_2, VAR_10);

   FUNC_9(VAR_1, VAR_10, VAR_8);
  }
 }

 return VAR_3->n;
}
