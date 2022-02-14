
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int lo; int hi; } ;
union l5cm_specific_data {TYPE_4__ phy_address; } ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {void* hi; void* lo; } ;
struct TYPE_8__ {TYPE_2__ phy_address; } ;
struct TYPE_6__ {scalar_t__ reserved1; int type; void* conn_and_cmd_data; } ;
struct l5cm_spe {TYPE_3__ data; TYPE_1__ hdr; } ;
struct kwqe_16 {int dummy; } ;
struct cnic_local {int cnic_ulp_lock; TYPE_5__* ethdev; } ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;
struct bnx2x {int pfid; } ;
struct TYPE_10__ {int (* drv_submit_kwqes_16 ) (int ,struct kwqe_16**,int) ;} ;


 int FUNC_0 (struct bnx2x*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 struct bnx2x* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct kwqe_16**,int) ;

__attribute__((used)) static int FUNC_7(struct cnic_dev *VAR_5, u32 VAR_6, u32 VAR_7,
    u32 VAR_8, union l5cm_specific_data *VAR_9)
{
 struct cnic_local *VAR_10 = VAR_5->cnic_priv;
 struct bnx2x *VAR_11 = FUNC_3(VAR_5->netdev);
 struct l5cm_spe VAR_12;
 struct kwqe_16 *VAR_13[1];
 u16 VAR_14;
 int VAR_15;

 VAR_12.hdr.conn_and_cmd_data =
  FUNC_2(((VAR_6 << VAR_0) |
        FUNC_0(VAR_11, VAR_7)));

 VAR_14 = (VAR_8 << VAR_2) & VAR_1;
 VAR_14 |= (VAR_11->pfid << VAR_4) &
     VAR_3;

 VAR_12.hdr.type = FUNC_1(VAR_14);
 VAR_12.hdr.reserved1 = 0;
 VAR_12.data.phy_address.lo = FUNC_2(VAR_9->phy_address.lo);
 VAR_12.data.phy_address.hi = FUNC_2(VAR_9->phy_address.hi);

 VAR_13[0] = (struct kwqe_16 *) &VAR_12;

 FUNC_4(&VAR_10->cnic_ulp_lock);
 VAR_15 = VAR_10->ethdev->drv_submit_kwqes_16(VAR_5->netdev, VAR_13, 1);
 FUNC_5(&VAR_10->cnic_ulp_lock);

 if (VAR_15 == 1)
  return 0;

 return VAR_15;
}
