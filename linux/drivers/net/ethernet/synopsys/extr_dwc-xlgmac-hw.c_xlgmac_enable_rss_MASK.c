
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rss; } ;
struct xlgmac_pdata {scalar_t__ mac_regs; int rss_options; TYPE_1__ hw_feat; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct xlgmac_pdata*) ;
 int FUNC_4 (struct xlgmac_pdata*) ;

__attribute__((used)) static int FUNC_5(struct xlgmac_pdata *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 if (!VAR_4->hw_feat.rss)
  return -VAR_0;


 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  return VAR_6;


 FUNC_2(VAR_4->rss_options, VAR_4->mac_regs + VAR_1);


 VAR_5 = FUNC_1(VAR_4->mac_regs + VAR_1);
 VAR_5 = FUNC_0(VAR_5, VAR_3,
         VAR_2, 1);
 FUNC_2(VAR_5, VAR_4->mac_regs + VAR_1);

 return 0;
}
