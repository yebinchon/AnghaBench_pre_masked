
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mipid_device {int dummy; } ;


 int FUNC_0 (struct mipid_device*,int,int *,int) ;

__attribute__((used)) static void FUNC_1(struct mipid_device *VAR_0, int VAR_1)
{
 u16 VAR_2;

 switch (VAR_1) {
 case 16:
  VAR_2 = 0x150;
  break;
 case 18:
  VAR_2 = 0x160;
  break;
 case 24:
  VAR_2 = 0x170;
  break;
 }
 FUNC_0(VAR_0, 0x3a, (u8 *)&VAR_2, 2);
}
