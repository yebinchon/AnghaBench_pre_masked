
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* bas; } ;
struct bc_state {int rx_fcs; int rx_skb; TYPE_3__ hw; TYPE_1__* cs; int ignore; } ;
struct TYPE_5__ {int alignerrs; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (struct bc_state*) ;
 int FUNC_3 (struct bc_state*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(struct bc_state *VAR_1, unsigned VAR_2)
{
 if (FUNC_4(VAR_1->ignore)) {
  VAR_1->ignore--;
  FUNC_3(VAR_1);
  return;
 }

 FUNC_1(VAR_1->cs->dev, "received partial byte (%d bits)\n", VAR_2);
 VAR_1->hw.bas->alignerrs++;
 FUNC_2(VAR_1);
 FUNC_0(VAR_1->rx_skb, 0);
 VAR_1->rx_fcs = VAR_0;
}
