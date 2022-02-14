
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct enetc_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct enetc_hw*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct enetc_hw *VAR_1, int VAR_2, u16 VAR_3, u8 VAR_4)
{
 u32 VAR_5 = 0;

 if (VAR_3)
  VAR_5 = VAR_0 | FUNC_1(VAR_4) | VAR_3;

 FUNC_2(VAR_1, FUNC_0(VAR_2), VAR_5);
}
