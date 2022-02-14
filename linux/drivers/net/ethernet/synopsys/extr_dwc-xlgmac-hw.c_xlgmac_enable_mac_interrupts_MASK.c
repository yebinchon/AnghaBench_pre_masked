
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct xlgmac_pdata {scalar_t__ mac_regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (unsigned int,int ,int ,int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct xlgmac_pdata *VAR_9)
{
 unsigned int VAR_10 = 0;
 u32 VAR_11;


 VAR_10 = FUNC_0(VAR_10, VAR_2,
          VAR_1, 1);

 FUNC_2(VAR_10, VAR_9->mac_regs + VAR_0);


 VAR_11 = FUNC_1(VAR_9->mac_regs + VAR_3);
 VAR_11 = FUNC_0(VAR_11, VAR_5,
         VAR_4, 0xffffffff);
 FUNC_2(VAR_11, VAR_9->mac_regs + VAR_3);
 VAR_11 = FUNC_1(VAR_9->mac_regs + VAR_6);
 VAR_11 = FUNC_0(VAR_11, VAR_8,
         VAR_7, 0xffffffff);
 FUNC_2(VAR_11, VAR_9->mac_regs + VAR_6);
}
