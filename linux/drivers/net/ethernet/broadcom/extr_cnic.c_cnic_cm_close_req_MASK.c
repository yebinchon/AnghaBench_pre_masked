
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l4_kwq_close_req {int flags; int cid; int op_code; } ;
struct kwqe {int dummy; } ;
struct cnic_sock {int cid; int kwqe2; struct cnic_dev* dev; } ;
struct cnic_dev {int (* submit_kwqes ) (struct cnic_dev*,struct kwqe**,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct l4_kwq_close_req*,int ,int) ;
 int FUNC_1 (struct cnic_dev*,struct kwqe**,int) ;

__attribute__((used)) static int FUNC_2(struct cnic_sock *VAR_3)
{
 struct cnic_dev *VAR_4 = VAR_3->dev;
 struct l4_kwq_close_req *VAR_5;
 struct kwqe *VAR_6[1];

 VAR_5 = (struct l4_kwq_close_req *) &VAR_3->kwqe2;
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 VAR_6[0] = (struct kwqe *) VAR_5;

 VAR_5->op_code = VAR_0;
 VAR_5->flags = VAR_2 << VAR_1;
 VAR_5->cid = VAR_3->cid;

 return VAR_4->submit_kwqes(VAR_4, VAR_6, 1);
}
