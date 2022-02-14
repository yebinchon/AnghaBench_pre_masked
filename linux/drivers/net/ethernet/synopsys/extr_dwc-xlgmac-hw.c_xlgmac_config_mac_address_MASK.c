
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ hash_table_size; } ;
struct xlgmac_pdata {scalar_t__ mac_regs; TYPE_2__ hw_feat; TYPE_1__* netdev; } ;
struct TYPE_3__ {int dev_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct xlgmac_pdata*,int ) ;

__attribute__((used)) static void FUNC_4(struct xlgmac_pdata *VAR_7)
{
 u32 VAR_8;

 FUNC_3(VAR_7, VAR_7->netdev->dev_addr);


 if (VAR_7->hw_feat.hash_table_size) {
  VAR_8 = FUNC_1(VAR_7->mac_regs + VAR_0);
  VAR_8 = FUNC_0(VAR_8, VAR_4,
          VAR_3, 1);
  VAR_8 = FUNC_0(VAR_8, VAR_6,
          VAR_5, 1);
  VAR_8 = FUNC_0(VAR_8, VAR_2,
          VAR_1, 1);
  FUNC_2(VAR_8, VAR_7->mac_regs + VAR_0);
 }
}
