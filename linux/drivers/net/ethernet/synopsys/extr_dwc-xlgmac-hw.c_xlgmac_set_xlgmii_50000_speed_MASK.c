
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlgmac_pdata {scalar_t__ mac_regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct xlgmac_pdata *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(FUNC_2(VAR_3->mac_regs + VAR_0),
         VAR_2, VAR_1);
 if (VAR_4 == 0x2)
  return 0;

 VAR_4 = FUNC_2(VAR_3->mac_regs + VAR_0);
 VAR_4 = FUNC_1(VAR_4, VAR_2,
         VAR_1, 0x2);
 FUNC_3(VAR_4, VAR_3->mac_regs + VAR_0);

 return 0;
}
