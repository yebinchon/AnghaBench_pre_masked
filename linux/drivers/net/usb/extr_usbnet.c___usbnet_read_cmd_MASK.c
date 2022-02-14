
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int net; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int ,int ,int ,int,int,void*,int,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_3, u8 VAR_4, u8 VAR_5,
        u16 VAR_6, u16 VAR_7, void *VAR_8, u16 VAR_9)
{
 void *VAR_10 = ((void*)0);
 int VAR_11 = -VAR_0;

 FUNC_3(VAR_3->net, "usbnet_read_cmd cmd=0x%02x reqtype=%02x"
     " value=0x%04x index=0x%04x size=%d\n",
     VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);

 if (VAR_9) {
  VAR_10 = FUNC_1(VAR_9, VAR_1);
  if (!VAR_10)
   goto out;
 }

 VAR_11 = FUNC_4(VAR_3->udev, FUNC_5(VAR_3->udev, 0),
         VAR_4, VAR_5, VAR_6, VAR_7, VAR_10, VAR_9,
         VAR_2);
 if (VAR_11 > 0 && VAR_11 <= VAR_9) {
        if (VAR_8)
            FUNC_2(VAR_8, VAR_10, VAR_11);
        else
            FUNC_3(VAR_3->net,
                "Huh? Data requested but thrown away.\n");
    }
 FUNC_0(VAR_10);
out:
 return VAR_11;
}
