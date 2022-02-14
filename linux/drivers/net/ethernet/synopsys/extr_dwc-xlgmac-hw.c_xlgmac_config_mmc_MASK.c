
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlgmac_pdata {scalar_t__ mac_regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct xlgmac_pdata *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5->mac_regs + VAR_0);

 VAR_6 = FUNC_0(VAR_6, VAR_4,
         VAR_3, 1);

 VAR_6 = FUNC_0(VAR_6, VAR_2,
         VAR_1, 1);
 FUNC_2(VAR_6, VAR_5->mac_regs + VAR_0);
}
