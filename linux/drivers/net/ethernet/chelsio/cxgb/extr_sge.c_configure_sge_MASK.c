
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sge_params {int dummy; } ;
struct TYPE_6__ {scalar_t__ size; int dma_addr; } ;
struct sge {int sge_control; int intrtimer_nres; int rx_pkt_pad; TYPE_3__ respQ; TYPE_2__* freelQ; TYPE_1__* cmdQ; struct adapter* adapter; } ;
struct adapter {scalar_t__ regs; } ;
struct TYPE_5__ {scalar_t__ size; int dma_addr; } ;
struct TYPE_4__ {scalar_t__ size; int dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_4 (struct sge*,struct sge_params*) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct sge *VAR_29, struct sge_params *VAR_30)
{
 struct adapter *VAR_31 = VAR_29->adapter;

 FUNC_5(0, VAR_31->regs + VAR_6);
 FUNC_3(VAR_31, VAR_29->cmdQ[0].dma_addr, VAR_29->cmdQ[0].size,
     VAR_0, VAR_1, VAR_2);
 FUNC_3(VAR_31, VAR_29->cmdQ[1].dma_addr, VAR_29->cmdQ[1].size,
     VAR_3, VAR_4, VAR_5);
 FUNC_3(VAR_31, VAR_29->freelQ[0].dma_addr,
     VAR_29->freelQ[0].size, VAR_7,
     VAR_8, VAR_9);
 FUNC_3(VAR_31, VAR_29->freelQ[1].dma_addr,
     VAR_29->freelQ[1].size, VAR_10,
     VAR_11, VAR_12);


 FUNC_5(VAR_28 + 1, VAR_31->regs + VAR_13);

 FUNC_3(VAR_31, VAR_29->respQ.dma_addr, VAR_29->respQ.size,
     VAR_14, VAR_15, VAR_17);
 FUNC_5((u32)VAR_29->respQ.size - 1, VAR_31->regs + VAR_16);

 VAR_29->sge_control = VAR_18 | VAR_19 | VAR_23 |
  VAR_24 | VAR_20 | VAR_26 |
  FUNC_0(2) | VAR_21 | VAR_25 |
  FUNC_1(VAR_29->rx_pkt_pad);






 VAR_29->intrtimer_nres = VAR_27 * FUNC_2(VAR_31);

 FUNC_4(VAR_29, VAR_30);
}
