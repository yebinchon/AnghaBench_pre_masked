
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int tmp ;
struct usbnet {int dummy; } ;


 int FUNC_0 (struct usbnet*,int ,int ,int ,int,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_0, u8 VAR_1, u16 VAR_2,
         u16 VAR_3, u32 *VAR_4)
{
 u32 VAR_5 = *VAR_4;

 FUNC_1(&VAR_5);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, sizeof(VAR_5), &VAR_5);
}
