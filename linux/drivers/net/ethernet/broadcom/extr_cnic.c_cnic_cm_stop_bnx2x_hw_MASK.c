
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_local {int iscsi_conn; int delete_task; int ctx_tbl; } ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cnic_dev*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct cnic_dev *VAR_1)
{
 struct cnic_local *VAR_2 = VAR_1->cnic_priv;

 if (!VAR_2->ctx_tbl)
  return;

 if (!FUNC_5(VAR_1->netdev))
  return;

 FUNC_2(VAR_1, 0);

 FUNC_1(&VAR_2->delete_task);
 FUNC_3(VAR_0);

 if (FUNC_0(&VAR_2->iscsi_conn) != 0)
  FUNC_4(VAR_1->netdev, "%d iSCSI connections not destroyed\n",
       FUNC_0(&VAR_2->iscsi_conn));
}
