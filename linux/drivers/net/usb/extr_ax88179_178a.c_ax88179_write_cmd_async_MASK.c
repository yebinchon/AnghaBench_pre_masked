
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
 int FUNC_0 (int*) ;
 int FUNC_1 (struct usbnet*,int ,int,int,int,void*,int) ;

__attribute__((used)) static void FUNC_2(struct usbnet *VAR_3, u8 VAR_4, u16 VAR_5,
        u16 VAR_6, u16 VAR_7, void *VAR_8)
{
 u16 VAR_9;

 if (2 == VAR_7) {
  VAR_9 = *((u16 *)VAR_8);
  FUNC_0(&VAR_9);
  FUNC_1(VAR_3, VAR_4, VAR_0 | VAR_2 |
           VAR_1, VAR_5, VAR_6, &VAR_9,
           VAR_7);
 } else {
  FUNC_1(VAR_3, VAR_4, VAR_0 | VAR_2 |
           VAR_1, VAR_5, VAR_6, VAR_8,
           VAR_7);
 }
}
