
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xlgmac_pdata {scalar_t__ mac_regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct xlgmac_pdata *VAR_2, u8 *VAR_3)
{
 unsigned int VAR_4, VAR_5;

 VAR_4 = (VAR_3[5] << 8) | (VAR_3[4] << 0);
 VAR_5 = (VAR_3[3] << 24) | (VAR_3[2] << 16) |
        (VAR_3[1] << 8) | (VAR_3[0] << 0);

 FUNC_0(VAR_4, VAR_2->mac_regs + VAR_0);
 FUNC_0(VAR_5, VAR_2->mac_regs + VAR_1);

 return 0;
}
