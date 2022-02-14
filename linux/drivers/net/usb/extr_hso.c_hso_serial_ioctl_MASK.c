
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct hso_serial* driver_data; } ;
struct hso_serial {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int,char*,unsigned int,unsigned long) ;
 int FUNC_1 (struct hso_serial*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_2,
       unsigned int VAR_3, unsigned long VAR_4)
{
 struct hso_serial *VAR_5 = VAR_2->driver_data;
 int VAR_6 = 0;
 FUNC_0(0x8, "IOCTL cmd: %d, arg: %ld\n", VAR_3, VAR_4);

 if (!VAR_5)
  return -VAR_0;
 switch (VAR_3) {
 case 128:
  VAR_6 = FUNC_1(VAR_5, VAR_4);
  break;
 default:
  VAR_6 = -VAR_1;
  break;
 }
 return VAR_6;
}
