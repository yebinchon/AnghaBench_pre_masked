
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_4__ {int userdata; } ;
struct __vxge_hw_ring {scalar_t__ cmpl_cnt; int doorbell_cnt; int rxds_limit; int total_db_cnt; int rxds_per_block; TYPE_3__* common_reg; TYPE_2__* vp_reg; TYPE_1__ channel; int (* callback ) (struct __vxge_hw_ring*,void*,int ,int ) ;} ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_6__ {int titan_general_int_status; } ;
struct TYPE_5__ {int prc_rxd_doorbell; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct __vxge_hw_ring*,void*,int ,int ) ;
 int FUNC_3 (struct __vxge_hw_ring*,void**,int *) ;
 int FUNC_4 (int ,int *) ;

enum vxge_hw_status FUNC_5(struct __vxge_hw_ring *VAR_1)
{
 u8 VAR_2;
 enum vxge_hw_status VAR_3 = VAR_0;
 void *VAR_4;
 u64 VAR_5 = 0;
 int VAR_6 = 0;

 VAR_1->cmpl_cnt = 0;

 VAR_3 = FUNC_3(VAR_1, &VAR_4, &VAR_2);
 if (VAR_3 == VAR_0)
  VAR_1->callback(VAR_1, VAR_4,
   VAR_2, VAR_1->channel.userdata);

 if (VAR_1->cmpl_cnt != 0) {
  VAR_1->doorbell_cnt += VAR_1->cmpl_cnt;
  if (VAR_1->doorbell_cnt >= VAR_1->rxds_limit) {




   VAR_6 = (VAR_1->doorbell_cnt * 4);


   VAR_1->total_db_cnt += VAR_1->doorbell_cnt;
   if (VAR_1->total_db_cnt >= VAR_1->rxds_per_block) {
    VAR_6 += 4;

    VAR_1->total_db_cnt %= VAR_1->rxds_per_block;
   }
   FUNC_4(FUNC_0(VAR_6),
    &VAR_1->vp_reg->prc_rxd_doorbell);
   VAR_5 =
     FUNC_1(&VAR_1->common_reg->titan_general_int_status);
   VAR_1->doorbell_cnt = 0;
  }
 }

 return VAR_3;
}
