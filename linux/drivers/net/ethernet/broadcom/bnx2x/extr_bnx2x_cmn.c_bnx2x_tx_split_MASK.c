
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sw_tx_bd {int flags; } ;
struct eth_tx_start_bd {void* addr_lo; void* addr_hi; void* nbytes; } ;
struct eth_tx_bd {void* addr_lo; void* addr_hi; void* nbytes; } ;
struct bnx2x_fp_txdata {TYPE_1__* tx_desc_ring; } ;
struct bnx2x {int dummy; } ;
typedef size_t dma_addr_t ;
struct TYPE_2__ {struct eth_tx_bd reg_bd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,void*,void*,void*) ;
 size_t FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (size_t) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (size_t) ;
 void* FUNC_6 (size_t) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;

__attribute__((used)) static u16 FUNC_10(struct bnx2x *VAR_2,
     struct bnx2x_fp_txdata *VAR_3,
     struct sw_tx_bd *VAR_4,
     struct eth_tx_start_bd **VAR_5, u16 VAR_6,
     u16 VAR_7)
{
 struct eth_tx_start_bd *VAR_8 = *VAR_5;
 struct eth_tx_bd *VAR_9;
 dma_addr_t VAR_10;
 int VAR_11 = FUNC_8(VAR_8->nbytes);


 VAR_8->nbytes = FUNC_6(VAR_6);

 FUNC_0(VAR_1, "TSO split header size is %d (%x:%x)\n",
    VAR_8->nbytes, VAR_8->addr_hi, VAR_8->addr_lo);



 VAR_7 = FUNC_3(FUNC_2(VAR_7));
 VAR_9 = &VAR_3->tx_desc_ring[VAR_7].reg_bd;

 VAR_10 = FUNC_1(FUNC_9(VAR_8->addr_hi),
      FUNC_9(VAR_8->addr_lo)) + VAR_6;

 VAR_9->addr_hi = FUNC_7(FUNC_4(VAR_10));
 VAR_9->addr_lo = FUNC_7(FUNC_5(VAR_10));
 VAR_9->nbytes = FUNC_6(VAR_11 - VAR_6);


 VAR_4->flags |= VAR_0;

 FUNC_0(VAR_1,
    "TSO split data size is %d (%x:%x)\n",
    VAR_9->nbytes, VAR_9->addr_hi, VAR_9->addr_lo);


 *VAR_5 = (struct eth_tx_start_bd *)VAR_9;

 return VAR_7;
}
