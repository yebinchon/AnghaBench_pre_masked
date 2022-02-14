
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
 int FUNC_0 (struct usbnet*,int ,int ,int ,int ,void*,int) ;

__attribute__((used)) static int FUNC_1(struct usbnet *VAR_3, u8 VAR_4, u16 VAR_5, void *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_2, VAR_1, 0, VAR_4, VAR_6,
          VAR_5);
 if ((VAR_7 >= 0) && (VAR_7 < VAR_5))
  VAR_7 = -VAR_0;
 return VAR_7;
}
