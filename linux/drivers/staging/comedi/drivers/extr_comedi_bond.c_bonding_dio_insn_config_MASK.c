
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct comedi_bond_private* private; } ;
struct comedi_bond_private {struct bonded_device** devs; } ;
struct bonded_device {unsigned int nchans; int subdev; int dev; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;



 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2,
       struct comedi_insn *VAR_3, unsigned int *VAR_4)
{
 struct comedi_bond_private *VAR_5 = VAR_1->private;
 unsigned int VAR_6 = FUNC_0(VAR_3->chanspec);
 int VAR_7;
 struct bonded_device *VAR_8;
 struct bonded_device **VAR_9;




 VAR_9 = VAR_5->devs;
 for (VAR_8 = *VAR_9++; VAR_6 >= VAR_8->nchans; VAR_8 = *VAR_9++)
  VAR_6 -= VAR_8->nchans;
 switch (VAR_4[0]) {
 case 129:
 case 130:
  VAR_7 = FUNC_1(VAR_8->dev, VAR_8->subdev, VAR_6, VAR_4[0]);
  break;
 case 128:
  VAR_7 = FUNC_2(VAR_8->dev, VAR_8->subdev, VAR_6,
         &VAR_4[1]);
  break;
 default:
  VAR_7 = -VAR_0;
  break;
 }
 if (VAR_7 >= 0)
  VAR_7 = VAR_3->n;
 return VAR_7;
}
