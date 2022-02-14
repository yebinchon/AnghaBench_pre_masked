
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef enum ixgbe_ipsec_tbl_sel { ____Placeholder_ixgbe_ipsec_tbl_sel } ixgbe_ipsec_tbl_sel ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_hw *VAR_5, u16 VAR_6,
        enum ixgbe_ipsec_tbl_sel VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_0);
 VAR_8 &= VAR_3;
 VAR_8 |= VAR_7 << VAR_1 |
        VAR_6 << VAR_2 |
        VAR_4;
 FUNC_2(VAR_5, VAR_0, VAR_8);
 FUNC_1(VAR_5);
}
