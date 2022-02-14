
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct intf_hdl {int dummy; } ;
typedef int s32 ;
typedef int __le16 ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intf_hdl*,int ,int,int *) ;

__attribute__((used)) static s32 FUNC_3(struct intf_hdl *VAR_0, u32 VAR_1, u16 VAR_2)
{
 u32 VAR_3;
 __le16 VAR_4;

 VAR_3 = FUNC_0(VAR_1, ((void*)0), ((void*)0));
 VAR_4 = FUNC_1(VAR_2);
 return FUNC_2(VAR_0, VAR_3, 2, (u8 *)&VAR_4);
}
