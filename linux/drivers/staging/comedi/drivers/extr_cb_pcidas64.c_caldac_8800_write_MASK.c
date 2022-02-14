
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct pcidas64_private {scalar_t__ main_iobase; } ;
struct comedi_device {int class_dev; struct pcidas64_private* private; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4, unsigned int VAR_5,
        u8 VAR_6)
{
 struct pcidas64_private *VAR_7 = VAR_4->private;
 static const int VAR_8 = 8;
 static const int VAR_9 = 11;
 unsigned int VAR_10 = ((VAR_5 & 0x7) << 8) | VAR_6;
 unsigned int VAR_11, VAR_12;
 static const int VAR_13 = 1;

 if (VAR_5 >= VAR_8) {
  FUNC_0(VAR_4->class_dev, "illegal caldac channel\n");
  return -1;
 }
 for (VAR_11 = 1 << (VAR_9 - 1); VAR_11; VAR_11 >>= 1) {
  VAR_12 = 0;
  if (VAR_10 & VAR_11)
   VAR_12 |= VAR_3;
  FUNC_1(VAR_13);
  FUNC_2(VAR_12, VAR_7->main_iobase + VAR_0);
  VAR_12 |= VAR_2;
  FUNC_1(VAR_13);
  FUNC_2(VAR_12, VAR_7->main_iobase + VAR_0);
 }
 FUNC_1(VAR_13);
 FUNC_2(VAR_1, VAR_7->main_iobase + VAR_0);
 FUNC_1(VAR_13);
 FUNC_2(0, VAR_7->main_iobase + VAR_0);
 FUNC_1(VAR_13);
 return 0;
}
