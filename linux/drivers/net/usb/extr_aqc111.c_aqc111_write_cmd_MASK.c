
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usbnet*,int ,int,int ,int ,int ,void*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_4, u8 VAR_5, u16 VAR_6,
       u16 VAR_7, u16 VAR_8, void *VAR_9)
{
 int VAR_10;

 if (FUNC_1(VAR_4->intf) < 0)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_1 | VAR_3 |
     VAR_2, VAR_6, VAR_7, VAR_8, VAR_9);

 FUNC_2(VAR_4->intf);

 return VAR_10;
}
