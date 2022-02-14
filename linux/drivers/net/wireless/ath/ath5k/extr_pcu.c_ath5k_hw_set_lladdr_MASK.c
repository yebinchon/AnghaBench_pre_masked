
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath_common {int macaddr; } ;
struct ath5k_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath_common* FUNC_0 (struct ath5k_hw*) ;
 int FUNC_1 (struct ath5k_hw*,int ) ;
 int FUNC_2 (struct ath5k_hw*,int,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,int const*,int ) ;

int
FUNC_6(struct ath5k_hw *VAR_3, const u8 *VAR_4)
{
 struct ath_common *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6, VAR_7;
 u32 VAR_8;


 FUNC_5(VAR_5->macaddr, VAR_4, VAR_2);

 VAR_8 = FUNC_1(VAR_3, VAR_1) & 0xffff0000;

 VAR_6 = FUNC_4(VAR_4);
 VAR_7 = FUNC_3(VAR_4 + 4);

 FUNC_2(VAR_3, VAR_6, VAR_0);
 FUNC_2(VAR_3, VAR_8 | VAR_7, VAR_1);

 return 0;
}
