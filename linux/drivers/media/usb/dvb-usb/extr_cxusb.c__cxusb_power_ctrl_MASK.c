
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_usb_device*,int ,int *,int,int *,int ) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_2, int VAR_3)
{
 u8 VAR_4 = 0;

 FUNC_1("setting power %s\n", VAR_3 ? "ON" : "OFF");

 if (VAR_3)
  return FUNC_0(VAR_2, VAR_1, &VAR_4, 1, ((void*)0), 0);
 else
  return FUNC_0(VAR_2, VAR_0, &VAR_4, 1, ((void*)0), 0);
}
