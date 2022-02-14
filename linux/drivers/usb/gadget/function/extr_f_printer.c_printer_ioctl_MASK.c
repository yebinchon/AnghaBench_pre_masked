
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct printer_dev {int lock; scalar_t__ printer_status; } ;
struct file {struct printer_dev* private_data; } ;


 int FUNC_0 (struct printer_dev*,char*,unsigned int,...) ;
 int VAR_0 ;


 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static long
FUNC_3(struct file *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 struct printer_dev *VAR_4 = VAR_1->private_data;
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_0(VAR_4, "printer_ioctl: cmd=0x%4.4x, arg=%lu\n", VAR_2, VAR_3);



 FUNC_1(&VAR_4->lock, VAR_5);

 switch (VAR_2) {
 case 129:
  VAR_6 = (int)VAR_4->printer_status;
  break;
 case 128:
  VAR_4->printer_status = (u8)VAR_3;
  break;
 default:

  FUNC_0(VAR_4, "printer_ioctl: ERROR cmd=0x%4.4xis not supported\n",
    VAR_2);
  VAR_6 = -VAR_0;
 }

 FUNC_2(&VAR_4->lock, VAR_5);

 return VAR_6;
}
