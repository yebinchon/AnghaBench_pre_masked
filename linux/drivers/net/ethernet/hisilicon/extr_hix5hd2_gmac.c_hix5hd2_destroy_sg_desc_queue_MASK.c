
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_desc {int dummy; } ;
struct TYPE_2__ {int * desc; int phys_addr; } ;
struct hix5hd2_priv {TYPE_1__ tx_ring; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct hix5hd2_priv *VAR_1)
{
 if (VAR_1->tx_ring.desc) {
  FUNC_0(VAR_1->dev,
      VAR_0 * sizeof(struct sg_desc),
      VAR_1->tx_ring.desc, VAR_1->tx_ring.phys_addr);
  VAR_1->tx_ring.desc = ((void*)0);
 }
}
