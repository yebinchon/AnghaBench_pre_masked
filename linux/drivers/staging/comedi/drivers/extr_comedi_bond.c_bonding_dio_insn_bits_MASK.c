
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct comedi_bond_private* private; } ;
struct comedi_bond_private {unsigned int nchans; struct bonded_device** devs; } ;
struct bonded_device {unsigned int nchans; int subdev; int dev; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
     struct comedi_subdevice *VAR_1,
     struct comedi_insn *VAR_2, unsigned int *VAR_3)
{
 struct comedi_bond_private *VAR_4 = VAR_0->private;
 unsigned int VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9;
 struct bonded_device **VAR_10;

 VAR_8 = VAR_3[0];
 VAR_9 = VAR_3[1];
 VAR_7 = FUNC_0(VAR_2->chanspec);

 VAR_5 = VAR_4->nchans - VAR_7;
 if (VAR_5 > 32)
  VAR_5 = 32;

 VAR_6 = 0;
 VAR_10 = VAR_4->devs;
 do {
  struct bonded_device *VAR_11 = *VAR_10++;

  if (VAR_7 < VAR_11->nchans) {

   unsigned int VAR_12, VAR_13, VAR_14, VAR_15;
   int VAR_16;





   VAR_12 = VAR_11->nchans - VAR_7;
   if (VAR_12 > VAR_5)
    VAR_12 = VAR_5;
   VAR_13 = (VAR_12 < 32) ? ((1 << VAR_12) - 1)
      : 0xffffffff;
   VAR_14 = (VAR_8 >> VAR_6) & VAR_13;
   VAR_15 = (VAR_9 >> VAR_6) & VAR_13;

   VAR_16 = FUNC_1(VAR_11->dev, VAR_11->subdev,
         VAR_14, &VAR_15,
         VAR_7);
   if (VAR_16 < 0)
    return VAR_16;

   VAR_3[1] &= ~(VAR_13 << VAR_6);
   VAR_3[1] |= (VAR_15 & VAR_13) << VAR_6;




   VAR_7 = 0;
   VAR_6 += VAR_12;
   VAR_5 -= VAR_12;
  } else {

   VAR_7 -= VAR_11->nchans;
  }
 } while (VAR_5);

 return VAR_2->n;
}
