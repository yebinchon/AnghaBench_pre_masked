
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error; } ;
union event_ring_elem {TYPE_1__ message; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ starting_cid; scalar_t__ iscsi_l2_cid; } ;
struct bnx2x {TYPE_2__ cnic_eth_dev; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct bnx2x*,scalar_t__,int ) ;
 int FUNC_3 (struct bnx2x*,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_1, u32 VAR_2,
          union event_ring_elem *VAR_3)
{
 u8 VAR_4 = VAR_3->message.error;

 if (!VAR_1->cnic_eth_dev.starting_cid ||
     (VAR_2 < VAR_1->cnic_eth_dev.starting_cid &&
     VAR_2 != VAR_1->cnic_eth_dev.iscsi_l2_cid))
  return 1;

 FUNC_1(VAR_0, "got delete ramrod for CNIC CID %d\n", VAR_2);

 if (FUNC_4(VAR_4)) {

  FUNC_0("got delete ramrod for CNIC CID %d with error!\n",
     VAR_2);
  FUNC_3(VAR_1, 0);
 }
 FUNC_2(VAR_1, VAR_2, VAR_4);
 return 0;
}
