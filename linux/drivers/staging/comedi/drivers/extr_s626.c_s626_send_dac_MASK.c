
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s626_private {int * dac_wbuf; int dacpol; } ;
struct comedi_device {int class_dev; scalar_t__ mmio; struct s626_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct comedi_device*,int *,int *,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct comedi_device*,int ,int ) ;
 int FUNC_5 (struct comedi_device*,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_17, u32 VAR_18)
{
 struct s626_private *VAR_19 = VAR_17->private;
 int VAR_20;
 FUNC_4(VAR_17, VAR_2, VAR_19->dacpol);





 *VAR_19->dac_wbuf = VAR_18;







 FUNC_5(VAR_17, VAR_3, VAR_6);
 FUNC_6(VAR_1, VAR_17->mmio + VAR_5);
 VAR_20 = FUNC_1(VAR_17, ((void*)0), ((void*)0), VAR_12,
        VAR_15);
 if (VAR_20) {
  FUNC_2(VAR_17->class_dev, "DMA transfer timeout\n");
  return VAR_20;
 }
 FUNC_6(VAR_11 | VAR_8 | VAR_9,
        VAR_17->mmio + FUNC_0(0));
 VAR_20 = FUNC_1(VAR_17, ((void*)0), ((void*)0), VAR_12,
        VAR_16);
 if (VAR_20) {
  FUNC_2(VAR_17->class_dev,
   "TSL timeout waiting for slot 1 to execute\n");
  return VAR_20;
 }
 FUNC_6(VAR_11 | VAR_10 | VAR_7 | VAR_9 | VAR_0,
        VAR_17->mmio + FUNC_0(0));
 if (FUNC_3(VAR_17->mmio + VAR_4) & 0xff000000) {







  VAR_20 = FUNC_1(VAR_17, ((void*)0), ((void*)0), VAR_12,
         VAR_13);
  if (VAR_20) {
   FUNC_2(VAR_17->class_dev,
    "TSL timeout waiting for slot 0 to execute\n");
   return VAR_20;
  }
 }
 FUNC_6(VAR_8 | VAR_9 | VAR_0,
        VAR_17->mmio + FUNC_0(0));






 VAR_20 = FUNC_1(VAR_17, ((void*)0), ((void*)0), VAR_12,
        VAR_14);
 if (VAR_20) {
  FUNC_2(VAR_17->class_dev,
   "TSL timeout waiting for slot 0 to execute\n");
  return VAR_20;
 }
 return 0;
}
