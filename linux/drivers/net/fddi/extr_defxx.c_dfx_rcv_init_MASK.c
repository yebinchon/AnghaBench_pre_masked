
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u32 ;
struct sk_buff {int data; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_10__ {scalar_t__ rcv_prod; } ;
struct TYPE_11__ {int lword; TYPE_3__ index; } ;
struct TYPE_12__ {char** p_rcv_buff_va; char* rcv_block_virt; TYPE_4__ rcv_xmt_reg; scalar_t__ rcv_bufs_to_post; scalar_t__ rcv_block_phys; TYPE_2__* descr_block_virt; int bus_dev; int dev; } ;
struct TYPE_9__ {TYPE_1__* rcv_data; } ;
struct TYPE_8__ {void* long_1; void* long_0; } ;
typedef TYPE_5__ DFX_board_t ;


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
 struct sk_buff* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (TYPE_5__*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int,int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_6(DFX_board_t *VAR_10, int VAR_11)
 {
 int VAR_12, VAR_13;
 if (VAR_11) {
 for (VAR_12=0; VAR_12 < (int)(VAR_10->rcv_bufs_to_post); VAR_12++)
  for (VAR_13=0; (VAR_12 + VAR_13) < (int)VAR_6; VAR_13 += VAR_10->rcv_bufs_to_post)
   {
   VAR_10->descr_block_virt->rcv_data[VAR_12+VAR_13].long_0 = (u32) (VAR_8 |
    ((VAR_7 / VAR_4) << VAR_9));
   VAR_10->descr_block_virt->rcv_data[VAR_12+VAR_13].long_1 = (u32) (VAR_10->rcv_block_phys + (VAR_12 * VAR_7));
   VAR_10->p_rcv_buff_va[VAR_12+VAR_13] = (VAR_10->rcv_block_virt + (VAR_12 * VAR_7));
   }

 }



 VAR_10->rcv_xmt_reg.index.rcv_prod = VAR_10->rcv_bufs_to_post;
 FUNC_2(VAR_10, VAR_5, VAR_10->rcv_xmt_reg.lword);
 return 0;
 }
