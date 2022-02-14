
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pxa168_eth_private {int htpr_dma; scalar_t__ htpr; TYPE_2__* dev; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (struct pxa168_eth_private*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pxa168_eth_private *VAR_4)
{
 if (!VAR_4->htpr) {
  VAR_4->htpr = FUNC_0(VAR_4->dev->dev.parent,
            VAR_2,
            &VAR_4->htpr_dma, VAR_1);
  if (!VAR_4->htpr)
   return -VAR_0;
 } else {
  FUNC_1(VAR_4->htpr, 0, VAR_2);
 }
 FUNC_2(VAR_4, VAR_3, VAR_4->htpr_dma);
 return 0;
}
