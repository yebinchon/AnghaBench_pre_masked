
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct fza_private {int ring_smt_tx_index; int ring_smt_tx_size; int ring_rmc_tx_index; int ring_rmc_tx_size; TYPE_3__* regs; TYPE_2__* ring_rmc_tx; TYPE_1__* ring_smt_tx; } ;
struct TYPE_6__ {int control_a; } ;
struct TYPE_5__ {int rmc; int own; } ;
struct TYPE_4__ {int own; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fza_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_5)
{
 struct fza_private *VAR_6 = FUNC_0(VAR_5);
 u32 VAR_7;
 int VAR_8;


 VAR_8 = VAR_6->ring_smt_tx_index;
 do {
  FUNC_3(VAR_1, &VAR_6->ring_smt_tx[VAR_8].own);
  VAR_6->ring_smt_tx_index =
   (VAR_6->ring_smt_tx_index + 1) % VAR_6->ring_smt_tx_size;

 } while (VAR_8 != VAR_6->ring_smt_tx_index);


 VAR_8 = VAR_6->ring_rmc_tx_index;
 do {
  VAR_7 = FUNC_1(&VAR_6->ring_rmc_tx[VAR_8].own);
  if ((VAR_7 & VAR_2) == VAR_4) {
   u32 VAR_9 = FUNC_2(&VAR_6->ring_rmc_tx[VAR_8].rmc);

   FUNC_4(VAR_9 | VAR_3,
     &VAR_6->ring_rmc_tx[VAR_8].rmc);
  }
  VAR_6->ring_rmc_tx_index =
   (VAR_6->ring_rmc_tx_index + 1) % VAR_6->ring_rmc_tx_size;

 } while (VAR_8 != VAR_6->ring_rmc_tx_index);


 FUNC_5(VAR_0, &VAR_6->regs->control_a);
}
