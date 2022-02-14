
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct hwrm_vnic_alloc_output {int vnic_id; } ;
struct hwrm_vnic_alloc_input {int flags; int member_0; } ;
struct bnxt_vnic_info {scalar_t__* fw_grp_ids; int fw_vnic_id; scalar_t__* fw_rss_cos_lb_ctx; } ;
struct bnxt {int flags; int hwrm_cmd_lock; TYPE_3__* grp_info; int dev; TYPE_2__* rx_ring; struct bnxt_vnic_info* vnic_info; struct hwrm_vnic_alloc_output* hwrm_cmd_resp_addr; } ;
typedef int req ;
struct TYPE_6__ {scalar_t__ fw_grp_id; } ;
struct TYPE_5__ {TYPE_1__* bnapi; } ;
struct TYPE_4__ {unsigned int index; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnxt*,struct hwrm_vnic_alloc_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_vnic_alloc_input*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct bnxt *VAR_6, u16 VAR_7,
    unsigned int VAR_8,
    unsigned int VAR_9)
{
 int VAR_10 = 0;
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14 = VAR_8 + VAR_9;
 struct hwrm_vnic_alloc_input VAR_15 = {0};
 struct hwrm_vnic_alloc_output *VAR_16 = VAR_6->hwrm_cmd_resp_addr;
 struct bnxt_vnic_info *VAR_17 = &VAR_6->vnic_info[VAR_7];

 if (VAR_6->flags & VAR_0)
  goto vnic_no_ring_grps;


 for (VAR_11 = VAR_8, VAR_12 = 0; VAR_11 < VAR_14; VAR_11++, VAR_12++) {
  VAR_13 = VAR_6->rx_ring[VAR_11].bnapi->index;
  if (VAR_6->grp_info[VAR_13].fw_grp_id == VAR_4) {
   FUNC_6(VAR_6->dev, "Not enough ring groups avail:%x req:%x\n",
       VAR_12, VAR_9);
   break;
  }
  VAR_17->fw_grp_ids[VAR_12] = VAR_6->grp_info[VAR_13].fw_grp_id;
 }

vnic_no_ring_grps:
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
  VAR_17->fw_rss_cos_lb_ctx[VAR_11] = VAR_4;
 if (VAR_7 == 0)
  VAR_15.flags = FUNC_2(VAR_5);

 FUNC_1(VAR_6, &VAR_15, VAR_3, -1, -1);

 FUNC_4(&VAR_6->hwrm_cmd_lock);
 VAR_10 = FUNC_0(VAR_6, &VAR_15, sizeof(VAR_15), VAR_2);
 if (!VAR_10)
  VAR_17->fw_vnic_id = FUNC_3(VAR_16->vnic_id);
 FUNC_5(&VAR_6->hwrm_cmd_lock);
 return VAR_10;
}
