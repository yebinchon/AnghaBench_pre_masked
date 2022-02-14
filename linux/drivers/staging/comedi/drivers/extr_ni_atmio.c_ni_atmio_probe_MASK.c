
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_board_struct {int device_id; } ;
struct comedi_device {int class_dev; } ;


 int FUNC_0 (struct ni_board_struct*) ;
 int FUNC_1 (int ,char*,...) ;
 struct ni_board_struct* VAR_0 ;
 int FUNC_2 (struct comedi_device*,int) ;

__attribute__((used)) static const struct ni_board_struct *FUNC_3(struct comedi_device *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1, 511);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  const struct ni_board_struct *VAR_4 = &VAR_0[VAR_3];

  if (VAR_4->device_id == VAR_2)
   return VAR_4;
 }
 if (VAR_2 == 255)
  FUNC_1(VAR_1->class_dev, "can't find board\n");
 else if (VAR_2 == 0)
  FUNC_1(VAR_1->class_dev,
   "EEPROM read error (?) or device not found\n");
 else
  FUNC_1(VAR_1->class_dev,
   "unknown device ID %d -- contact author\n", VAR_2);

 return ((void*)0);
}
