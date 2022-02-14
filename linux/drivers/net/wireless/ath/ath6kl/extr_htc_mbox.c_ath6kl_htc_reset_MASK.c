
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct htc_target {int free_ctrl_txbuf; int free_ctrl_rxbuf; TYPE_3__* dev; } ;
struct htc_packet {int list; int endpoint; void* buf_start; void* buf; scalar_t__ act_len; scalar_t__ buf_len; } ;
struct TYPE_6__ {TYPE_2__* ar; } ;
struct TYPE_4__ {scalar_t__ block_size; } ;
struct TYPE_5__ {TYPE_1__ mbox_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct htc_packet*) ;
 void* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct htc_target*) ;

__attribute__((used)) static int FUNC_4(struct htc_target *VAR_7)
{
 u32 VAR_8, VAR_9;
 struct htc_packet *VAR_10;
 int VAR_11;

 FUNC_3(VAR_7);

 VAR_8 = VAR_7->dev->ar->mbox_info.block_size;

 VAR_9 = (VAR_8 > VAR_4) ?
        (VAR_8 + VAR_3) :
        (VAR_4 + VAR_3);

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_2);
  if (!VAR_10)
   return -VAR_1;

  VAR_10->buf_start = FUNC_1(VAR_9, VAR_2);
  if (!VAR_10->buf_start) {
   FUNC_0(VAR_10);
   return -VAR_1;
  }

  VAR_10->buf_len = VAR_9;
  if (VAR_11 < VAR_6) {
   VAR_10->act_len = 0;
   VAR_10->buf = VAR_10->buf_start;
   VAR_10->endpoint = VAR_0;
   FUNC_2(&VAR_10->list, &VAR_7->free_ctrl_rxbuf);
  } else {
   FUNC_2(&VAR_10->list, &VAR_7->free_ctrl_txbuf);
  }
 }

 return 0;
}
