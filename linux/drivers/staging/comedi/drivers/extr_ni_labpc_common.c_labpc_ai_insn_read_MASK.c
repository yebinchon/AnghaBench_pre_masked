
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct labpc_private {int cmd4; int (* write_byte ) (struct comedi_device*,int,int ) ;int counter; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct labpc_private* private; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct comedi_device*,int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_7 (struct comedi_device*) ;
 unsigned int FUNC_8 (struct comedi_device*) ;
 int FUNC_9 (struct comedi_device*,struct comedi_subdevice*,int ,int ,unsigned int,unsigned int,int) ;
 int FUNC_10 (struct comedi_device*,int,int ) ;
 int FUNC_11 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_12(struct comedi_device *VAR_10,
         struct comedi_subdevice *VAR_11,
         struct comedi_insn *VAR_12,
         unsigned int *VAR_13)
{
 struct labpc_private *VAR_14 = VAR_10->private;
 unsigned int VAR_15 = FUNC_1(VAR_12->chanspec);
 unsigned int VAR_16 = FUNC_2(VAR_12->chanspec);
 unsigned int VAR_17 = FUNC_0(VAR_12->chanspec);
 int VAR_18;
 int VAR_19;


 FUNC_6(VAR_10, VAR_11);

 FUNC_5(VAR_10, VAR_7, VAR_15, VAR_16, VAR_17);

 FUNC_9(VAR_10, VAR_11, VAR_7, VAR_8,
        VAR_16, VAR_17, 0);


 VAR_14->cmd4 = 0;
 VAR_14->cmd4 |= VAR_2;

 if (VAR_17 == VAR_1)
  VAR_14->cmd4 |= VAR_4;
 VAR_14->write_byte(VAR_10, VAR_14->cmd4, VAR_3);


 FUNC_3(VAR_14->counter, 0, VAR_6 | VAR_5);

 FUNC_7(VAR_10);

 for (VAR_19 = 0; VAR_19 < VAR_12->n; VAR_19++) {

  VAR_14->write_byte(VAR_10, 0x1, VAR_0);

  VAR_18 = FUNC_4(VAR_10, VAR_11, VAR_12, VAR_9, 0);
  if (VAR_18)
   return VAR_18;

  VAR_13[VAR_19] = FUNC_8(VAR_10);
 }

 return VAR_12->n;
}
