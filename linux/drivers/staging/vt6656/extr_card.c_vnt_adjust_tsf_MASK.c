
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct vnt_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnt_private*,int ,int ,int ,int,scalar_t__*) ;
 int FUNC_1 (scalar_t__,int,int) ;

void FUNC_2(struct vnt_private *VAR_2, u8 VAR_3,
      u64 VAR_4, u64 VAR_5)
{
 u64 VAR_6 = 0;
 u8 VAR_7[8];

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);

 VAR_7[0] = (u8)VAR_6;
 VAR_7[1] = (u8)(VAR_6 >> 8);
 VAR_7[2] = (u8)(VAR_6 >> 16);
 VAR_7[3] = (u8)(VAR_6 >> 24);
 VAR_7[4] = (u8)(VAR_6 >> 32);
 VAR_7[5] = (u8)(VAR_6 >> 40);
 VAR_7[6] = (u8)(VAR_6 >> 48);
 VAR_7[7] = (u8)(VAR_6 >> 56);

 FUNC_0(VAR_2, VAR_1,
   VAR_0, 0, 8, VAR_7);
}
