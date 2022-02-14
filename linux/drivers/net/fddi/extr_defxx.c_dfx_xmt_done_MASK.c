
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef size_t u8 ;
struct TYPE_19__ {TYPE_11__* p_skb; } ;
typedef TYPE_7__ XMT_DRIVER_DESCR ;
struct TYPE_17__ {scalar_t__ xmt_comp; } ;
struct TYPE_18__ {TYPE_5__ index; } ;
struct TYPE_21__ {TYPE_6__ rcv_xmt_reg; TYPE_4__* descr_block_virt; int bus_dev; int xmt_total_bytes; int xmt_total_frames; TYPE_7__* xmt_drv_descr_blk; TYPE_1__* cons_block_virt; } ;
struct TYPE_14__ {scalar_t__ xmt_cons; } ;
struct TYPE_20__ {TYPE_2__ index; } ;
struct TYPE_16__ {TYPE_3__* xmt_data; } ;
struct TYPE_15__ {int long_1; } ;
struct TYPE_13__ {int xmt_rcv_data; } ;
struct TYPE_12__ {scalar_t__ len; } ;
typedef TYPE_8__ PI_TYPE_2_CONSUMER ;
typedef TYPE_9__ DFX_board_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_11__*) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(DFX_board_t *VAR_1)
 {
 XMT_DRIVER_DESCR *VAR_2;
 PI_TYPE_2_CONSUMER *VAR_3;
 u8 VAR_4;
 int VAR_5 = 0;



 VAR_3 = (PI_TYPE_2_CONSUMER *)(&VAR_1->cons_block_virt->xmt_rcv_data);
 while (VAR_1->rcv_xmt_reg.index.xmt_comp != VAR_3->index.xmt_cons)
  {


  VAR_2 = &(VAR_1->xmt_drv_descr_blk[VAR_1->rcv_xmt_reg.index.xmt_comp]);



  VAR_1->xmt_total_frames++;
  VAR_1->xmt_total_bytes += VAR_2->p_skb->len;


  VAR_4 = VAR_1->rcv_xmt_reg.index.xmt_comp;
  FUNC_1(VAR_1->bus_dev,
     VAR_1->descr_block_virt->xmt_data[VAR_4].long_1,
     VAR_2->p_skb->len,
     VAR_0);
  FUNC_0(VAR_2->p_skb);
  VAR_1->rcv_xmt_reg.index.xmt_comp += 1;
  VAR_5++;
  }
 return VAR_5;
 }
