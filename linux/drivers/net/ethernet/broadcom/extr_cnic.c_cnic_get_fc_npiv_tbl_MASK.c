
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cnic_local {TYPE_1__* ethdev; } ;
struct cnic_fc_npiv_tbl {int dummy; } ;
struct cnic_dev {int netdev; int flags; struct cnic_local* cnic_priv; } ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {int (* drv_get_fc_npiv_tbl ) (int ,struct cnic_fc_npiv_tbl*) ;} ;


 int FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bnx2x* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct cnic_fc_npiv_tbl*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct cnic_dev *VAR_3,
    struct cnic_fc_npiv_tbl *VAR_4)
{
 struct cnic_local *VAR_5 = VAR_3->cnic_priv;
 struct bnx2x *VAR_6 = FUNC_1(VAR_3->netdev);
 int VAR_7;

 if (!FUNC_3(VAR_0, &VAR_3->flags))
  return -VAR_1;

 if (!FUNC_0(VAR_6))
  return -VAR_2;

 VAR_7 = VAR_5->ethdev->drv_get_fc_npiv_tbl(VAR_3->netdev, VAR_4);
 return VAR_7;
}
