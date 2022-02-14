
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dvb_usb_device {int rc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct dvb_usb_device*,int,int *,int ,scalar_t__*,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_1)
{
 u8 VAR_2[2];

 if (FUNC_1(VAR_1, 0x10, ((void*)0), 0, VAR_2, 2) < 0)
  return 0;

 if (VAR_2[0] || VAR_2[1])
  FUNC_2(VAR_1->rc_dev, VAR_0,
      FUNC_0(VAR_2[0], VAR_2[1]), 0);
 return 0;
}
