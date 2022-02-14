
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union l5cm_specific_data {int dummy; } l5cm_specific_data ;
struct l4_kwq_reset_req {int cid; } ;
struct kwqe {int dummy; } ;
struct cnic_dev {int dummy; } ;
typedef int l5_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cnic_dev*,int ,int ,int ,union l5cm_specific_data*) ;
 int FUNC_1 (union l5cm_specific_data*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct cnic_dev *VAR_2, struct kwqe *VAR_3)
{
 struct l4_kwq_reset_req *VAR_4 = (struct l4_kwq_reset_req *) VAR_3;
 union l5cm_specific_data VAR_5;
 int VAR_6;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_6 = FUNC_0(VAR_2, VAR_1,
   VAR_4->cid, VAR_0, &VAR_5);
 return VAR_6;
}
