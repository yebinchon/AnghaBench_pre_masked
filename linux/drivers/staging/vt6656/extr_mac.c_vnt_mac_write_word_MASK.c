
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct vnt_private {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vnt_private*,int ,scalar_t__,int ,int ,scalar_t__*) ;

void FUNC_2(struct vnt_private *VAR_2, u8 VAR_3, u16 VAR_4)
{
 u8 VAR_5[2];

 VAR_5[0] = (u8)(VAR_4 & 0xff);
 VAR_5[1] = (u8)(VAR_4 >> 8);

 FUNC_1(VAR_2, VAR_1, VAR_3,
   VAR_0, FUNC_0(VAR_5), VAR_5);
}
