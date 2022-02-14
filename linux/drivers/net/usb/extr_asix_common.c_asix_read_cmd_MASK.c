
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int net; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct usbnet*,int,int,int ,int ,void*,int ) ;
 int FUNC_4 (struct usbnet*,int,int,int ,int ,void*,int ) ;

int FUNC_5(struct usbnet *VAR_3, u8 VAR_4, u16 VAR_5, u16 VAR_6,
    u16 VAR_7, void *VAR_8, int VAR_9)
{
 int VAR_10;
 int (*VAR_11)(struct usbnet *, u8, u8, u16, u16, void *, u16);

 FUNC_0(!VAR_3);

 if (!VAR_9)
  VAR_11 = FUNC_3;
 else
  VAR_11 = FUNC_4;

 VAR_10 = VAR_11(VAR_3, VAR_4, VAR_0 | VAR_2 | VAR_1,
   VAR_5, VAR_6, VAR_8, VAR_7);

 if (FUNC_2(VAR_10 < 0))
  FUNC_1(VAR_3->net, "Failed to read reg index 0x%04x: %d\n",
       VAR_6, VAR_10);

 return VAR_10;
}
