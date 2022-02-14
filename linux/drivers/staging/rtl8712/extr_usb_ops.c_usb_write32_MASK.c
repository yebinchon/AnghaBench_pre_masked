
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


 int FUNC_0 (int) ;
 int FUNC_1 (struct intf_priv*,int,int,int,int *,int,int) ;

__attribute__((used)) static void FUNC_2(struct intf_hdl *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;
 u16 VAR_5;
 u16 VAR_6;
 u16 VAR_7;
 __le32 VAR_8;
 struct intf_priv *VAR_9 = VAR_0->pintfpriv;

 VAR_3 = 0x05;
 VAR_4 = 0x00;
 VAR_6 = 0;
 VAR_5 = (u16)(VAR_1 & 0x0000ffff);
 VAR_7 = 4;
 VAR_8 = FUNC_0(VAR_2);
 FUNC_1(VAR_9, VAR_3, VAR_5, VAR_6, &VAR_8, VAR_7,
    VAR_4);
}
