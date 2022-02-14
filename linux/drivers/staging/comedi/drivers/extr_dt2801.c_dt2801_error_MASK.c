
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int class_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2, int VAR_3)
{
 if (VAR_3 < 0) {
  if (VAR_3 == -VAR_1)
   FUNC_0(VAR_2->class_dev, "timeout\n");
  else
   FUNC_0(VAR_2->class_dev, "error %d\n", VAR_3);
  return VAR_3;
 }
 FUNC_0(VAR_2->class_dev, "error status 0x%02x, resetting...\n", VAR_3);

 FUNC_1(VAR_2);
 FUNC_1(VAR_2);

 return -VAR_0;
}
