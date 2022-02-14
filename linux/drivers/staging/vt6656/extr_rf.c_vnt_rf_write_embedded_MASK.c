
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct vnt_private {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vnt_private*,int ,int ,int ,int ,scalar_t__*) ;

int FUNC_2(struct vnt_private *VAR_3, u32 VAR_4)
{
 u8 VAR_5[4];

 VAR_4 |= (VAR_2 << 3) | VAR_0;

 VAR_5[0] = (u8)VAR_4;
 VAR_5[1] = (u8)(VAR_4 >> 8);
 VAR_5[2] = (u8)(VAR_4 >> 16);
 VAR_5[3] = (u8)(VAR_4 >> 24);

 FUNC_1(VAR_3, VAR_1,
   0, 0, FUNC_0(VAR_5), VAR_5);

 return 1;
}
