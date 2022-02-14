
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_7__ {int ** p_rcv_buff_va; TYPE_2__* descr_block_virt; int bus_dev; scalar_t__ rcv_bufs_to_post; } ;
struct TYPE_6__ {TYPE_1__* rcv_data; } ;
struct TYPE_5__ {int long_1; } ;
typedef TYPE_3__ DFX_board_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2( DFX_board_t *VAR_3 )
 {
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < (int)(VAR_3->rcv_bufs_to_post); VAR_4++)
  for (VAR_5 = 0; (VAR_4 + VAR_5) < (int)VAR_1; VAR_5 += VAR_3->rcv_bufs_to_post)
  {
   struct sk_buff *VAR_6;
   VAR_6 = (struct sk_buff *)VAR_3->p_rcv_buff_va[VAR_4+VAR_5];
   if (VAR_6) {
    FUNC_1(VAR_3->bus_dev,
       VAR_3->descr_block_virt->rcv_data[VAR_4+VAR_5].long_1,
       VAR_2,
       VAR_0);
    FUNC_0(VAR_6);
   }
   VAR_3->p_rcv_buff_va[VAR_4+VAR_5] = ((void*)0);
  }

 }
