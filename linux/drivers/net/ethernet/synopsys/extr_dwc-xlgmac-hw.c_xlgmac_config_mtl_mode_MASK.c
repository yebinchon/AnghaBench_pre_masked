
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int tc_cnt; } ;
struct xlgmac_pdata {scalar_t__ mac_regs; TYPE_1__ hw_feat; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct xlgmac_pdata*,unsigned int,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct xlgmac_pdata *VAR_14)
{
 unsigned int VAR_15;
 u32 VAR_16;


 VAR_16 = FUNC_2(VAR_14->mac_regs + VAR_1);
 VAR_16 = FUNC_1(VAR_16, VAR_3,
         VAR_2, VAR_0);
 FUNC_3(VAR_16, VAR_14->mac_regs + VAR_1);


 for (VAR_15 = 0; VAR_15 < VAR_14->hw_feat.tc_cnt; VAR_15++) {
  VAR_16 = FUNC_2(FUNC_0(VAR_14, VAR_15, VAR_7));
  VAR_16 = FUNC_1(VAR_16, VAR_9,
          VAR_8, VAR_13);
  FUNC_3(VAR_16, FUNC_0(VAR_14, VAR_15, VAR_7));

  VAR_16 = FUNC_2(FUNC_0(VAR_14, VAR_15, VAR_10));
  VAR_16 = FUNC_1(VAR_16, VAR_12,
          VAR_11, 1);
  FUNC_3(VAR_16, FUNC_0(VAR_14, VAR_15, VAR_10));
 }


 VAR_16 = FUNC_2(VAR_14->mac_regs + VAR_1);
 VAR_16 = FUNC_1(VAR_16, VAR_5,
         VAR_4, VAR_6);
 FUNC_3(VAR_16, VAR_14->mac_regs + VAR_1);
}
