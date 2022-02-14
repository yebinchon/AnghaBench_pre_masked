
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int devid; int state; } ;
struct brcmf_usbdev_info {TYPE_1__ bus_pub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct brcmf_usbdev_info*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct brcmf_usbdev_info *VAR_4, u8 *VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_3, "Enter\n");

 if (VAR_4 == ((void*)0))
  return -VAR_2;

 if (VAR_4->bus_pub.devid == 0xDEAD)
  return -VAR_2;

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);
 if (VAR_7 == 0)
  VAR_4->bus_pub.state = VAR_0;
 else
  VAR_4->bus_pub.state = VAR_1;
 FUNC_0(VAR_3, "Exit, err=%d\n", VAR_7);

 return VAR_7;
}
