
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int is_m_series; } ;
struct comedi_subdevice {int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 unsigned int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4,
       struct comedi_insn *VAR_5,
       unsigned int *VAR_6)
{
 struct ni_private *VAR_7 = VAR_3->private;

 if (!VAR_7->is_m_series)
  return -VAR_0;

 if (FUNC_0(VAR_4, VAR_6))
  FUNC_2(VAR_3, VAR_4->state, VAR_2);

 VAR_6[1] = FUNC_1(VAR_3, VAR_1);

 return VAR_5->n;
}
