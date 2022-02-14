
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int rc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct dvb_usb_device*,int ,int *,int ,int*,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_2)
{
 u8 VAR_3[4];

 FUNC_1(VAR_2, VAR_0, ((void*)0), 0, VAR_3, 4);

 if (VAR_3[2] || VAR_3[3])
  FUNC_2(VAR_2->rc_dev, VAR_1,
      FUNC_0(~VAR_3[2] & 0xff, VAR_3[3]), 0);
 return 0;
}
