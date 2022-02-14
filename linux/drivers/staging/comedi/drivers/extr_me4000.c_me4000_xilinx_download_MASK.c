
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int dummy; } ;
struct me4000_private {scalar_t__ plx_regbase; } ;
struct comedi_device {int class_dev; struct me4000_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 struct pci_dev* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (unsigned long) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__ const,unsigned long) ;
 int FUNC_5 (unsigned int,scalar_t__) ;
 unsigned long FUNC_6 (struct pci_dev*,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_9,
      const u8 *VAR_10, size_t VAR_11,
      unsigned long VAR_12)
{
 struct pci_dev *VAR_13 = FUNC_0(VAR_9);
 struct me4000_private *VAR_14 = VAR_9->private;
 unsigned long VAR_15 = FUNC_6(VAR_13, 5);
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;

 if (!VAR_15)
  return -VAR_1;





 FUNC_5(VAR_7, VAR_14->plx_regbase + VAR_6);


 VAR_17 = FUNC_3(VAR_14->plx_regbase + VAR_2);
 VAR_17 |= VAR_5;
 FUNC_5(VAR_17, VAR_14->plx_regbase + VAR_2);


 FUNC_2(VAR_15 + 0xC8);


 FUNC_7(20, 1000);
 VAR_17 = FUNC_3(VAR_14->plx_regbase + VAR_6);
 if (!(VAR_17 & VAR_8)) {
  FUNC_1(VAR_9->class_dev, "Can't init Xilinx\n");
  return -VAR_0;
 }


 VAR_17 = FUNC_3(VAR_14->plx_regbase + VAR_2);
 VAR_17 &= ~VAR_5;
 FUNC_5(VAR_17, VAR_14->plx_regbase + VAR_2);


 VAR_16 = (((unsigned int)VAR_10[0] & 0xff) << 24) +
        (((unsigned int)VAR_10[1] & 0xff) << 16) +
        (((unsigned int)VAR_10[2] & 0xff) << 8) +
        ((unsigned int)VAR_10[3] & 0xff);
 FUNC_7(10, 1000);

 for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
  FUNC_4(VAR_10[16 + VAR_18], VAR_15);
  FUNC_7(10, 1000);


  VAR_17 = FUNC_3(VAR_14->plx_regbase + VAR_2);
  if (VAR_17 & VAR_4) {
   FUNC_1(VAR_9->class_dev,
    "Xilinx is still busy (i = %d)\n", VAR_18);
   return -VAR_0;
  }
 }


 VAR_17 = FUNC_3(VAR_14->plx_regbase + VAR_2);
 if (!(VAR_17 & VAR_3)) {
  FUNC_1(VAR_9->class_dev, "DONE flag is not set\n");
  FUNC_1(VAR_9->class_dev, "Download not successful\n");
  return -VAR_0;
 }


 VAR_17 = FUNC_3(VAR_14->plx_regbase + VAR_2);
 VAR_17 |= VAR_5;
 FUNC_5(VAR_17, VAR_14->plx_regbase + VAR_2);

 return 0;
}
