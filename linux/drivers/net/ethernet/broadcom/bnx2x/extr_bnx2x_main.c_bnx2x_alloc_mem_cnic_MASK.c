
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct host_hc_status_block_e2 {int dummy; } ;
struct host_hc_status_block_e1x {int dummy; } ;
struct TYPE_5__ {int * addr_drv_info_to_mcp; } ;
struct TYPE_4__ {void* e1x_sb; void* e2_sb; } ;
struct bnx2x {TYPE_3__* slowpath; TYPE_2__ cnic_eth_dev; void* t2; int t2_mapping; TYPE_1__ cnic_sb; int cnic_sb_mapping; } ;
struct TYPE_6__ {int drv_info_to_mcp; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct bnx2x*) ;
 scalar_t__ FUNC_5 (struct bnx2x*,int ) ;

int FUNC_6(struct bnx2x *VAR_3)
{
 if (!FUNC_2(VAR_3)) {

  VAR_3->cnic_sb.e2_sb = FUNC_1(&VAR_3->cnic_sb_mapping,
          sizeof(struct host_hc_status_block_e2));
  if (!VAR_3->cnic_sb.e2_sb)
   goto alloc_mem_err;
 } else {
  VAR_3->cnic_sb.e1x_sb = FUNC_1(&VAR_3->cnic_sb_mapping,
           sizeof(struct host_hc_status_block_e1x));
  if (!VAR_3->cnic_sb.e1x_sb)
   goto alloc_mem_err;
 }

 if (FUNC_3(VAR_3) && !VAR_3->t2) {

  VAR_3->t2 = FUNC_1(&VAR_3->t2_mapping, VAR_2);
  if (!VAR_3->t2)
   goto alloc_mem_err;
 }


 VAR_3->cnic_eth_dev.addr_drv_info_to_mcp =
  &VAR_3->slowpath->drv_info_to_mcp;

 if (FUNC_5(VAR_3, VAR_1))
  goto alloc_mem_err;

 return 0;

alloc_mem_err:
 FUNC_4(VAR_3);
 FUNC_0("Can't allocate memory\n");
 return -VAR_0;
}
