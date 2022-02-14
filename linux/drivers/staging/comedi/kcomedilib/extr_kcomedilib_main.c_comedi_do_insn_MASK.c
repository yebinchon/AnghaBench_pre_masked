
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ type; int (* insn_bits ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;int (* insn_config ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;struct comedi_device* busy; } ;
struct comedi_insn {size_t subdev; int insn; int chanspec; } ;
struct comedi_device {size_t n_subdevices; int mutex; int class_dev; struct comedi_subdevice* subdevices; int attached; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct comedi_subdevice*,int,int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_4,
     struct comedi_insn *VAR_5,
     unsigned int *VAR_6)
{
 struct comedi_subdevice *VAR_7;
 int VAR_8;

 FUNC_2(&VAR_4->mutex);

 if (!VAR_4->attached) {
  VAR_8 = -VAR_2;
  goto error;
 }


 if (VAR_5->subdev >= VAR_4->n_subdevices) {
  VAR_8 = -VAR_2;
  goto error;
 }
 VAR_7 = &VAR_4->subdevices[VAR_5->subdev];

 if (VAR_7->type == VAR_0) {
  FUNC_1(VAR_4->class_dev,
   "%d not usable subdevice\n", VAR_5->subdev);
  VAR_8 = -VAR_3;
  goto error;
 }



 VAR_8 = FUNC_0(VAR_7, 1, &VAR_5->chanspec);
 if (VAR_8 < 0) {
  FUNC_1(VAR_4->class_dev, "bad chanspec\n");
  VAR_8 = -VAR_2;
  goto error;
 }

 if (VAR_7->busy) {
  VAR_8 = -VAR_1;
  goto error;
 }
 VAR_7->busy = VAR_4;

 switch (VAR_5->insn) {
 case 129:
  VAR_8 = VAR_7->insn_bits(VAR_4, VAR_7, VAR_5, VAR_6);
  break;
 case 128:

  VAR_8 = VAR_7->insn_config(VAR_4, VAR_7, VAR_5, VAR_6);
  break;
 default:
  VAR_8 = -VAR_2;
  break;
 }

 VAR_7->busy = ((void*)0);
error:

 FUNC_3(&VAR_4->mutex);
 return VAR_8;
}
