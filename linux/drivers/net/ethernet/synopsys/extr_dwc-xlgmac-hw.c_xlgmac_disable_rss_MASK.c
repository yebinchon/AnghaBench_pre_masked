
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rss; } ;
struct xlgmac_pdata {scalar_t__ mac_regs; TYPE_1__ hw_feat; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct xlgmac_pdata *VAR_4)
{
 u32 VAR_5;

 if (!VAR_4->hw_feat.rss)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4->mac_regs + VAR_1);
 VAR_5 = FUNC_0(VAR_5, VAR_3,
         VAR_2, 0);
 FUNC_2(VAR_5, VAR_4->mac_regs + VAR_1);

 return 0;
}
