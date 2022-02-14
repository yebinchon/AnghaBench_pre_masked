
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l4_kwq_update_pg {int pg_cid; int pg_host_opaque; } ;
struct l4_kcq {int op_code; int pg_cid; int pg_host_opaque; } ;
struct kwqe {int dummy; } ;
struct kcqe {int dummy; } ;
struct cnic_dev {int dummy; } ;
typedef int kcqe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cnic_dev*,int ,struct kcqe**,int) ;
 int FUNC_1 (struct l4_kcq*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct cnic_dev *VAR_2, struct kwqe *VAR_3)
{
 struct l4_kwq_update_pg *VAR_4 = (struct l4_kwq_update_pg *) VAR_3;
 struct l4_kcq VAR_5;
 struct kcqe *VAR_6[1];

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.pg_host_opaque = VAR_4->pg_host_opaque;
 VAR_5.pg_cid = VAR_4->pg_cid;
 VAR_5.op_code = VAR_1;
 VAR_6[0] = (struct kcqe *) &VAR_5;
 FUNC_0(VAR_2, VAR_0, VAR_6, 1);
 return 0;
}
