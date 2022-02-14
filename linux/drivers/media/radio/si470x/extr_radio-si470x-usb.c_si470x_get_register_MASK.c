
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int * usb_buf; int * registers; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct si470x_device*,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct si470x_device *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_2->usb_buf[0] = FUNC_0(VAR_3);

 VAR_4 = FUNC_2(VAR_2, VAR_2->usb_buf, VAR_1);

 if (VAR_4 >= 0)
  VAR_2->registers[VAR_3] = FUNC_1(&VAR_2->usb_buf[1]);

 return (VAR_4 < 0) ? -VAR_0 : 0;
}
