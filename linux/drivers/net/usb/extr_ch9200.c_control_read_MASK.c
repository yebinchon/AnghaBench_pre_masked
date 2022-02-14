
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int udev; int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (unsigned short,int ) ;
 int FUNC_2 (void*,unsigned char*,unsigned short) ;
 int FUNC_3 (int ,char*,unsigned short,unsigned short) ;
 int FUNC_4 (int ,int ,unsigned char,unsigned char,unsigned short,unsigned short,unsigned char*,unsigned short,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_8,
   unsigned char VAR_9, unsigned short VAR_10,
   unsigned short VAR_11, void *VAR_12, unsigned short VAR_13,
   int VAR_14)
{
 unsigned char *VAR_15 = ((void*)0);
 unsigned char VAR_16;
 int VAR_17 = 0;

 if (VAR_9 == VAR_3)
  VAR_16 = (VAR_4 | VAR_7 | VAR_6);
 else
  VAR_16 = (VAR_4 | VAR_7 |
    VAR_5);

 FUNC_3(VAR_8->net, "Control_read() index=0x%02x size=%d\n",
     VAR_11, VAR_13);

 VAR_15 = FUNC_1(VAR_13, VAR_2);
 if (!VAR_15) {
  VAR_17 = -VAR_1;
  goto err_out;
 }

 VAR_17 = FUNC_4(VAR_8->udev,
         FUNC_5(VAR_8->udev, 0),
         VAR_9, VAR_16, VAR_10, VAR_11, VAR_15, VAR_13,
         VAR_14);
 if (VAR_17 == VAR_13)
  FUNC_2(VAR_12, VAR_15, VAR_13);
 else if (VAR_17 >= 0)
  VAR_17 = -VAR_0;
 FUNC_0(VAR_15);

 return VAR_17;

err_out:
 return VAR_17;
}
