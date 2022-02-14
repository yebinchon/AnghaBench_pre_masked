
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int class_dev; scalar_t__ mmio; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct comedi_device*,int,unsigned int*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_6)
{
 unsigned int VAR_7 = FUNC_0(0, 0, VAR_0);
 unsigned int VAR_8;
 static const unsigned int VAR_9 = 0x2000;
 unsigned int VAR_10 = 0;

 FUNC_5(0, VAR_6->mmio + VAR_5);
 FUNC_3(VAR_6, 1, &VAR_7);

 FUNC_5(0, VAR_6->mmio + VAR_4);

 for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
  unsigned int VAR_11;

  FUNC_6(0, VAR_6->mmio + VAR_3);
  FUNC_4(1, 1000);
  VAR_11 = FUNC_2(VAR_6->mmio + VAR_3);
  if ((VAR_11 & VAR_2) == 0) {
   VAR_10 = 2 * VAR_8;
   break;
  }
 }
 if (VAR_8 == VAR_9) {
  FUNC_1(VAR_6->class_dev, "failed to probe fifo size.\n");
  return -VAR_1;
 }
 FUNC_5(0, VAR_6->mmio + VAR_5);
 if (VAR_10 != 0x400 && VAR_10 != 0x2000) {
  FUNC_1(VAR_6->class_dev,
    "unexpected fifo size of %i, expected 1024 or 8192.\n",
    VAR_10);
  return -VAR_1;
 }
 return VAR_10;
}
