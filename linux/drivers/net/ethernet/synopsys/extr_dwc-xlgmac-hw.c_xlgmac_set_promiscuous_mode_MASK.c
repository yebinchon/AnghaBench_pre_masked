
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct xlgmac_pdata {TYPE_1__* netdev; scalar_t__ mac_regs; } ;
struct TYPE_2__ {int features; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (unsigned int,int ,int ) ;
 unsigned int FUNC_1 (unsigned int,int ,int ,unsigned int) ;
 int VAR_4 ;
 int FUNC_2 (struct xlgmac_pdata*,int ,TYPE_1__*,char*,char*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned int,scalar_t__) ;
 int FUNC_5 (struct xlgmac_pdata*) ;
 int FUNC_6 (struct xlgmac_pdata*) ;

__attribute__((used)) static int FUNC_7(struct xlgmac_pdata *VAR_5,
           unsigned int VAR_6)
{
 unsigned int VAR_7 = VAR_6 ? 1 : 0;
 u32 VAR_8;

 VAR_8 = FUNC_0(FUNC_3(VAR_5->mac_regs + VAR_0),
         VAR_2, VAR_1);
 if (VAR_8 == VAR_7)
  return 0;

 FUNC_2(VAR_5, VAR_4, VAR_5->netdev, "%s promiscuous mode\n",
    VAR_6 ? "entering" : "leaving");

 VAR_8 = FUNC_3(VAR_5->mac_regs + VAR_0);
 VAR_8 = FUNC_1(VAR_8, VAR_2,
         VAR_1, VAR_7);
 FUNC_4(VAR_8, VAR_5->mac_regs + VAR_0);


 if (VAR_6) {
  FUNC_5(VAR_5);
 } else {
  if (VAR_5->netdev->features & VAR_3)
   FUNC_6(VAR_5);
 }

 return 0;
}
