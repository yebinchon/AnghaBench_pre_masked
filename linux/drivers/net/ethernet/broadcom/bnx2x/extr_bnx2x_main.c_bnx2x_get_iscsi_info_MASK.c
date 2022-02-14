
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int max_iscsi_conn; } ;
struct bnx2x {int flags; TYPE_1__ cnic_eth_dev; } ;
struct TYPE_4__ {int max_iscsi_conn; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct bnx2x*,int ) ;
 TYPE_2__* VAR_4 ;

void FUNC_4(struct bnx2x *VAR_5)
{
 u32 VAR_6 = VAR_3;
 int VAR_7 = FUNC_1(VAR_5);
 u32 VAR_8 = VAR_2 ^ FUNC_3(VAR_5,
    VAR_4[VAR_7].max_iscsi_conn);

 if (!FUNC_2(VAR_5)) {
  VAR_5->flags |= VAR_6;
  return;
 }


 VAR_5->cnic_eth_dev.max_iscsi_conn =
  (VAR_8 & VAR_0) >>
  VAR_1;

 FUNC_0("max_iscsi_conn 0x%x\n",
         VAR_5->cnic_eth_dev.max_iscsi_conn);





 if (!VAR_5->cnic_eth_dev.max_iscsi_conn)
  VAR_5->flags |= VAR_6;
}
