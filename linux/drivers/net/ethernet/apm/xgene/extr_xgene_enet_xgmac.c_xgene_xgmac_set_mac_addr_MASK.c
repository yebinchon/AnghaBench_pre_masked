
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct xgene_enet_pdata {TYPE_1__* ndev; } ;
struct TYPE_2__ {int* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgene_enet_pdata*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct xgene_enet_pdata *VAR_2)
{
 u32 VAR_3, VAR_4;
 u8 *VAR_5 = VAR_2->ndev->dev_addr;

 VAR_3 = (VAR_5[3] << 24) | (VAR_5[2] << 16) |
  (VAR_5[1] << 8) | VAR_5[0];
 VAR_4 = (VAR_5[5] << 24) | (VAR_5[4] << 16);

 FUNC_0(VAR_2, VAR_0, VAR_3);
 FUNC_0(VAR_2, VAR_1, VAR_4);
}
