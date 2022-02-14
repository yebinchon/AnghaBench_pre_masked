
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct intf_priv {int dummy; } ;
struct intf_hdl {struct intf_priv* pintfpriv; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct intf_priv*,int,int,int,int *,int,int) ;

__attribute__((used)) static u32 FUNC_2(struct intf_hdl *VAR_0, u32 VAR_1)
{
 u8 VAR_2;
 u8 VAR_3;
 u16 VAR_4;
 u16 VAR_5;
 u16 VAR_6;
 __le32 VAR_7;
 struct intf_priv *VAR_8 = VAR_0->pintfpriv;

 VAR_2 = 0x05;
 VAR_3 = 0x01;
 VAR_5 = 0;
 VAR_4 = (u16)(VAR_1 & 0x0000ffff);
 VAR_6 = 4;
 FUNC_1(VAR_8, VAR_2, VAR_4, VAR_5, &VAR_7, VAR_6,
    VAR_3);
 return FUNC_0(VAR_7);
}
