
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int udev; int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void const*,int ,int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,void*,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_4, u8 VAR_5, u8 VAR_6,
         u16 VAR_7, u16 VAR_8, const void *VAR_9,
         u16 VAR_10)
{
 void *VAR_11 = ((void*)0);
 int VAR_12 = -VAR_1;

 FUNC_3(VAR_4->net, "usbnet_write_cmd cmd=0x%02x reqtype=%02x"
     " value=0x%04x index=0x%04x size=%d\n",
     VAR_5, VAR_6, VAR_7, VAR_8, VAR_10);

 if (VAR_9) {
  VAR_11 = FUNC_2(VAR_9, VAR_10, VAR_2);
  if (!VAR_11)
   goto out;
 } else {
        if (VAR_10) {
            FUNC_0(1);
            VAR_12 = -VAR_0;
            goto out;
        }
    }

 VAR_12 = FUNC_4(VAR_4->udev, FUNC_5(VAR_4->udev, 0),
         VAR_5, VAR_6, VAR_7, VAR_8, VAR_11, VAR_10,
         VAR_3);
 FUNC_1(VAR_11);

out:
 return VAR_12;
}
