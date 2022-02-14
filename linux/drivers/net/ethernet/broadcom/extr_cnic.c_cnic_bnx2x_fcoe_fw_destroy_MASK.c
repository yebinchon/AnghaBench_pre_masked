
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union l5cm_specific_data {int dummy; } l5cm_specific_data ;
typedef int u32 ;
struct kwqe {int dummy; } ;
struct cnic_local {int fcoe_init_cid; } ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;
struct bnx2x {int dummy; } ;
typedef int l5_data ;


 int FUNC_0 (struct bnx2x*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cnic_dev*,int ) ;
 int FUNC_2 (struct cnic_dev*,int ,int ,int ,union l5cm_specific_data*) ;
 int FUNC_3 (union l5cm_specific_data*,int ,int) ;
 struct bnx2x* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct cnic_dev *VAR_3, struct kwqe *VAR_4)
{
 union l5cm_specific_data VAR_5;
 struct cnic_local *VAR_6 = VAR_3->cnic_priv;
 struct bnx2x *VAR_7 = FUNC_4(VAR_3->netdev);
 int VAR_8;
 u32 VAR_9;

 FUNC_1(VAR_3, VAR_2);

 VAR_9 = FUNC_0(VAR_7, VAR_6->fcoe_init_cid);

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_8 = FUNC_2(VAR_3, VAR_1, VAR_9,
      VAR_0, &VAR_5);
 return VAR_8;
}
