
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vnt_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vnt_private*,int ,int,int ,int ,int *) ;
 int FUNC_1 (struct vnt_private*,int ,int ,int ) ;
 int FUNC_2 (struct vnt_private*,int ,int) ;
 int FUNC_3 (struct vnt_private*,int ,int ) ;

void FUNC_4(struct vnt_private *VAR_6, u32 VAR_7)
{
 if (VAR_7 > VAR_0 || !VAR_7)
  return;


 FUNC_3(VAR_6, VAR_3, VAR_1);


 FUNC_2(VAR_6, VAR_2, 0xb0);

 FUNC_0(VAR_6, VAR_5,
   VAR_7, 0, 0, ((void*)0));

 FUNC_1(VAR_6, VAR_4, VAR_2,
      (u8)(VAR_7 | 0x80));
}
