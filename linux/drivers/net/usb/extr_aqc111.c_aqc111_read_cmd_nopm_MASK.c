
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct usbnet*,int ,int,int ,int ,void*,int ) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_3, u8 VAR_4, u16 VAR_5,
    u16 VAR_6, u16 VAR_7, void *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_0 | VAR_2 |
       VAR_1, VAR_5, VAR_6, VAR_8, VAR_7);

 if (FUNC_1(VAR_9 < 0))
  FUNC_0(VAR_3->net,
       "Failed to read(0x%x) reg index 0x%04x: %d\n",
       VAR_4, VAR_6, VAR_9);

 return VAR_9;
}
