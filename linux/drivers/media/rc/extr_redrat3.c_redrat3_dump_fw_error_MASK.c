
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redrat3_dev {int transmitting; int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct redrat3_dev *VAR_0, int VAR_1)
{
 if (!VAR_0->transmitting && (VAR_1 != 0x40))
  FUNC_0(VAR_0->dev, "fw error code 0x%02x: ", VAR_1);

 switch (VAR_1) {
 case 0x00:
  FUNC_1("No Error\n");
  break;


 case 0x20:
  FUNC_1("Initial signal pulse not long enough to measure carrier frequency\n");
  break;
 case 0x21:
  FUNC_1("Not enough length values allocated for signal\n");
  break;
 case 0x22:
  FUNC_1("Not enough memory allocated for signal data\n");
  break;
 case 0x23:
  FUNC_1("Too many signal repeats\n");
  break;
 case 0x28:
  FUNC_1("Insufficient memory available for IR signal data memory allocation\n");
  break;
 case 0x29:
  FUNC_1("Insufficient memory available for IrDa signal data memory allocation\n");
  break;


 case 0x30:
  FUNC_1("Insufficient memory available for bulk transfer structure\n");
  break;





 case 0x40:
  if (!VAR_0->transmitting)
   FUNC_1("Signal capture has been terminated\n");
  break;
 case 0x41:
  FUNC_1("Attempt to set/get and unknown signal I/O algorithm parameter\n");
  break;
 case 0x42:
  FUNC_1("Signal capture already started\n");
  break;

 default:
  FUNC_1("Unknown Error\n");
  break;
 }
}
