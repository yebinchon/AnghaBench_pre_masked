
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int*,int,int ) ;
 int FUNC_3 (struct usb_device*,int ,void*,int,int *,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct usb_device *VAR_3)
{
 u32 VAR_4 = 0xffffffff;
 void *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(&VAR_4, 4, VAR_0);
 if (!VAR_5)
  return;

 VAR_6 = FUNC_3(VAR_3, FUNC_4(VAR_3, VAR_2),
      VAR_5, 4, ((void*)0), VAR_1);
 if (VAR_6)
  FUNC_0(&VAR_3->dev, "ath9k_htc: USB reboot failed\n");

 FUNC_1(VAR_5);
}
