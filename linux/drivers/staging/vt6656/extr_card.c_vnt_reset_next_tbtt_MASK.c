
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u16 ;
struct vnt_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnt_private*) ;
 int FUNC_1 (struct vnt_private*,int ,int ,int ,int,scalar_t__*) ;
 int FUNC_2 (int,int ) ;

void FUNC_3(struct vnt_private *VAR_2, u16 VAR_3)
{
 u64 VAR_4 = 0;
 u8 VAR_5[8];

 FUNC_0(VAR_2);

 VAR_4 = FUNC_2(VAR_4, VAR_3);

 VAR_5[0] = (u8)VAR_4;
 VAR_5[1] = (u8)(VAR_4 >> 8);
 VAR_5[2] = (u8)(VAR_4 >> 16);
 VAR_5[3] = (u8)(VAR_4 >> 24);
 VAR_5[4] = (u8)(VAR_4 >> 32);
 VAR_5[5] = (u8)(VAR_4 >> 40);
 VAR_5[6] = (u8)(VAR_4 >> 48);
 VAR_5[7] = (u8)(VAR_4 >> 56);

 FUNC_1(VAR_2, VAR_1,
   VAR_0, 0, 8, VAR_5);
}
