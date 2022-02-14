
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usbnet*,int ,int,int ,int ,void*,int) ;

__attribute__((used)) static int FUNC_1(struct usbnet *VAR_5, u8 VAR_6, u16 VAR_7, void *VAR_8)
{
 int VAR_9;
 VAR_9 = FUNC_0(VAR_5, VAR_0,
    VAR_2 | VAR_4 | VAR_3,
    0, VAR_6, VAR_8, VAR_7);

 if (VAR_9 >= 0 && VAR_9 < VAR_7)
  VAR_9 = -VAR_1;
 return VAR_9;
}
