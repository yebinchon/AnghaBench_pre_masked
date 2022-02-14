
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {int dummy; } ;


 int FUNC_0 (struct usbnet*,int ,int,int,int,void*,int ) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_0, u8 VAR_1, u16 VAR_2, u16 VAR_3,
        u16 VAR_4, void *VAR_5)
{
 int VAR_6;

 if (2 == VAR_4) {
  u16 VAR_7;
  VAR_7 = *((u16 *)VAR_5);
  FUNC_1(&VAR_7);
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
       VAR_4, &VAR_7, 0);
 } else {
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
       VAR_4, VAR_5, 0);
 }

 return VAR_6;
}
