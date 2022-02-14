
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pool_dma; int ring; } ;
struct TYPE_5__ {int numq; } ;
struct TYPE_4__ {int numrx; int numtx; } ;
struct velocity_info {TYPE_3__ rx; int dev; TYPE_2__ tx; TYPE_1__ options; } ;
struct tx_desc {int dummy; } ;
struct rx_desc {int dummy; } ;


 int FUNC_0 (int ,int const,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct velocity_info *VAR_0)
{
 const int VAR_1 = VAR_0->options.numrx * sizeof(struct rx_desc) +
  VAR_0->options.numtx * sizeof(struct tx_desc) * VAR_0->tx.numq;

 FUNC_0(VAR_0->dev, VAR_1, VAR_0->rx.ring, VAR_0->rx.pool_dma);
}
