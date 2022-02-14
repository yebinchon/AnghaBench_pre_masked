
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;


 int FUNC_0 (int *,int *,unsigned int) ;
 int FUNC_1 (struct dvb_usb_device*,int ,int *,unsigned int,int *,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_0, u8 VAR_1, u8 *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 u8 VAR_6[60];
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_6, VAR_4);
 if (!VAR_5)
  FUNC_0(VAR_2, VAR_6, VAR_4);
 return VAR_5;
}
