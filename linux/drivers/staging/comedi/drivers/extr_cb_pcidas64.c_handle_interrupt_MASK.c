
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcidas64_private {scalar_t__ plx9080_iobase; scalar_t__ main_iobase; } ;
struct comedi_device {int attached; struct pcidas64_private* private; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct comedi_device*,unsigned short,int) ;
 int FUNC_1 (struct comedi_device*,unsigned short,int) ;
 int FUNC_2 (scalar_t__) ;
 unsigned short FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct comedi_device *VAR_7 = VAR_6;
 struct pcidas64_private *VAR_8 = VAR_7->private;
 unsigned short VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 VAR_10 = FUNC_2(VAR_8->plx9080_iobase + VAR_3);
 VAR_9 = FUNC_3(VAR_8->main_iobase + VAR_0);






 if (!VAR_7->attached)
  return VAR_1;

 FUNC_0(VAR_7, VAR_9, VAR_10);
 FUNC_1(VAR_7, VAR_9, VAR_10);


 if (VAR_10 & VAR_2) {

  VAR_11 = FUNC_2(VAR_8->plx9080_iobase + VAR_4);
  FUNC_4(VAR_11, VAR_8->plx9080_iobase + VAR_4);
 }

 return VAR_1;
}
