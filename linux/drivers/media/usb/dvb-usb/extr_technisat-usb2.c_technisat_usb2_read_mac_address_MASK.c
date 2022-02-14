
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (struct dvb_usb_device*,int ,int *,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_3,
  u8 VAR_4[])
{
 u8 VAR_5[VAR_1];

 if (FUNC_1(VAR_3, VAR_0,
    VAR_5, VAR_1, 4) != 0)
  return -VAR_2;

 FUNC_0(VAR_4, VAR_5, 6);
 return 0;
}
