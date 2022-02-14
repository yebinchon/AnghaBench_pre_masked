
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_stats_info {scalar_t__ rxq_avg_depth; scalar_t__ txq_avg_depth; int rxq_size; int txq_size; int max_frame_size; scalar_t__ mac_add1; int version; } ;
struct bnx2i_hba {int max_cqes; int max_sqes; TYPE_2__* netdev; TYPE_1__* cnic; } ;
struct TYPE_4__ {int mtu; } ;
struct TYPE_3__ {int mac_addr; scalar_t__ stats_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2i_hba*,struct iscsi_stats_info*,int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_3(void *VAR_8)
{
 struct bnx2i_hba *VAR_9 = VAR_8;
 struct iscsi_stats_info *VAR_10;

 if (!VAR_9)
  return -VAR_1;

 VAR_10 = (struct iscsi_stats_info *)VAR_9->cnic->stats_addr;

 if (!VAR_10)
  return -VAR_2;

 FUNC_2(VAR_10->version, VAR_0, sizeof(VAR_10->version));
 FUNC_1(VAR_10->mac_add1 + 2, VAR_9->cnic->mac_addr, VAR_3);

 VAR_10->max_frame_size = VAR_9->netdev->mtu;
 VAR_10->txq_size = VAR_9->max_sqes;
 VAR_10->rxq_size = VAR_9->max_cqes;

 VAR_10->txq_avg_depth = 0;
 VAR_10->rxq_avg_depth = 0;

 FUNC_0(VAR_9, VAR_10, VAR_5);
 FUNC_0(VAR_9, VAR_10, VAR_4);

 FUNC_0(VAR_9, VAR_10, VAR_7);
 FUNC_0(VAR_9, VAR_10, VAR_6);

 return 0;
}
