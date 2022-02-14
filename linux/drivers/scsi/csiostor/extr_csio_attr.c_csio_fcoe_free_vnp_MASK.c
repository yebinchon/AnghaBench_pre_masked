
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_fcoe_vnp_cmd {int alloc_to_len16; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_lnode {int vnp_flowid; int fcf_flowid; } ;
struct csio_hw {int lock; int mb_mempool; } ;


 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct csio_lnode*,struct csio_mb*,int ,int ,int ,int *) ;
 int FUNC_3 (struct csio_lnode*,char*,...) ;
 int FUNC_4 (struct csio_hw*,struct csio_mb*) ;
 struct csio_mb* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct csio_mb*,int ) ;
 int FUNC_7 (int) ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct csio_hw *VAR_7, struct csio_lnode *VAR_8)
{
 struct csio_mb *VAR_9;
 struct fw_fcoe_vnp_cmd *VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;




 FUNC_9(&VAR_7->lock);
 VAR_9 = FUNC_5(VAR_7->mb_mempool, VAR_5);
 if (!VAR_9) {
  FUNC_0(VAR_7, VAR_6);
  VAR_11 = -VAR_3;
  goto out;
 }

 FUNC_2(VAR_8, VAR_9, VAR_0,
       VAR_8->fcf_flowid, VAR_8->vnp_flowid,
       ((void*)0));

 for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
  VAR_11 = FUNC_4(VAR_7, VAR_9);
  if (VAR_11 != -VAR_1)
   break;


  FUNC_10(&VAR_7->lock);
  FUNC_7(2000);
  FUNC_9(&VAR_7->lock);
 }

 if (VAR_11) {
  FUNC_3(VAR_8, "Failed to issue mbox FCoE VNP command\n");
  goto out_free;
 }


 VAR_10 = (struct fw_fcoe_vnp_cmd *)(VAR_9->mb);
 if (FUNC_1(FUNC_8(VAR_10->alloc_to_len16)) != VAR_4) {
  FUNC_3(VAR_8, "FCOE VNP FREE cmd returned 0x%x!\n",
       FUNC_1(FUNC_8(VAR_10->alloc_to_len16)));
  VAR_11 = -VAR_2;
 }

out_free:
 FUNC_6(VAR_9, VAR_7->mb_mempool);
out:
 FUNC_10(&VAR_7->lock);
 return VAR_11;
}
