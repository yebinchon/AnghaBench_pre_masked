
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int * usb_buf; int * registers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct si470x_device*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct si470x_device *VAR_5)
{
 int VAR_6;
 unsigned char VAR_7;

 VAR_5->usb_buf[0] = VAR_1;

 VAR_6 = FUNC_1(VAR_5, VAR_5->usb_buf, VAR_2);

 if (VAR_6 >= 0)
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
   VAR_5->registers[VAR_7] = FUNC_0(
    &VAR_5->usb_buf[VAR_7 * VAR_4 + 1]);

 return (VAR_6 < 0) ? -VAR_0 : 0;
}
