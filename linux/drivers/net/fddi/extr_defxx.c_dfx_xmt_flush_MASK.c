
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_15__ {TYPE_9__* p_skb; } ;
typedef TYPE_6__ XMT_DRIVER_DESCR ;
struct TYPE_17__ {int len; } ;
struct TYPE_12__ {size_t xmt_comp; size_t xmt_prod; } ;
struct TYPE_13__ {TYPE_3__ index; } ;
struct TYPE_16__ {TYPE_5__* cons_block_virt; TYPE_4__ rcv_xmt_reg; int xmt_discards; TYPE_2__* descr_block_virt; int bus_dev; TYPE_6__* xmt_drv_descr_blk; } ;
struct TYPE_14__ {int xmt_rcv_data; } ;
struct TYPE_11__ {TYPE_1__* xmt_data; } ;
struct TYPE_10__ {int long_1; } ;
typedef TYPE_7__ DFX_board_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2( DFX_board_t *VAR_3 )
 {
 u32 VAR_4;
 XMT_DRIVER_DESCR *VAR_5;
 u8 VAR_6;



 while (VAR_3->rcv_xmt_reg.index.xmt_comp != VAR_3->rcv_xmt_reg.index.xmt_prod)
  {


  VAR_5 = &(VAR_3->xmt_drv_descr_blk[VAR_3->rcv_xmt_reg.index.xmt_comp]);


  VAR_6 = VAR_3->rcv_xmt_reg.index.xmt_comp;
  FUNC_1(VAR_3->bus_dev,
     VAR_3->descr_block_virt->xmt_data[VAR_6].long_1,
     VAR_5->p_skb->len,
     VAR_0);
  FUNC_0(VAR_5->p_skb);



  VAR_3->xmt_discards++;
  VAR_3->rcv_xmt_reg.index.xmt_comp += 1;
  }



 VAR_4 = (u32)(VAR_3->cons_block_virt->xmt_rcv_data & ~VAR_1);
 VAR_4 |= (u32)(VAR_3->rcv_xmt_reg.index.xmt_prod << VAR_2);
 VAR_3->cons_block_virt->xmt_rcv_data = VAR_4;
 }
