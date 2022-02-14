
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned int* ao_conf; } ;
struct comedi_subdevice {int maxdata; } ;
struct comedi_device {struct ni_private* private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_4 (struct comedi_subdevice*,unsigned int) ;
 scalar_t__ FUNC_5 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_6 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_7,
         struct comedi_subdevice *VAR_8,
         unsigned int VAR_9[],
         unsigned int VAR_10)
{
 struct ni_private *VAR_11 = VAR_7->private;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 int VAR_15;
 int VAR_16 = 0;

 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  VAR_13 = FUNC_1(VAR_9[VAR_15]);
  VAR_12 = FUNC_2(VAR_9[VAR_15]);
  VAR_14 = FUNC_3(VAR_13);

  if (FUNC_4(VAR_8, VAR_12)) {
   VAR_14 |= VAR_2;
   VAR_16 = (VAR_8->maxdata + 1) >> 1;
  } else {
   VAR_16 = 0;
  }
  if (FUNC_5(VAR_8, VAR_12))
   VAR_14 |= VAR_5;


  if (VAR_9[VAR_15] & VAR_1)
   VAR_14 |= VAR_4;



  if (FUNC_0(VAR_9[VAR_15]) == VAR_0)
   VAR_14 |= VAR_6;

  FUNC_6(VAR_7, VAR_14, VAR_3);
  VAR_11->ao_conf[VAR_13] = VAR_14;
 }
 return VAR_16;
}
