
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct xlgmac_pdata {scalar_t__ mac_regs; int netdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int,int ,int ) ;
 unsigned int FUNC_1 (unsigned int,int ,int ,unsigned int) ;
 int VAR_3 ;
 int FUNC_2 (struct xlgmac_pdata*,int ,int ,char*,char*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct xlgmac_pdata *VAR_4,
      unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_5 ? 1 : 0;
 u32 VAR_7;

 VAR_7 = FUNC_0(FUNC_3(VAR_4->mac_regs + VAR_0),
         VAR_2, VAR_1);
 if (VAR_7 == VAR_6)
  return 0;

 FUNC_2(VAR_4, VAR_3, VAR_4->netdev, "%s allmulti mode\n",
    VAR_5 ? "entering" : "leaving");

 VAR_7 = FUNC_3(VAR_4->mac_regs + VAR_0);
 VAR_7 = FUNC_1(VAR_7, VAR_2,
         VAR_1, VAR_6);
 FUNC_4(VAR_7, VAR_4->mac_regs + VAR_0);

 return 0;
}
