
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int ,int *,int ,int *,int) ;
 int FUNC_1 (struct dvb_usb_device*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_1, int VAR_2)
{
 int VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_2)
  return VAR_3;

 FUNC_2(128);
 FUNC_0(VAR_1, VAR_0, ((void*)0), 0, &VAR_4, 1);
 FUNC_2(100);
 return VAR_3;
}
