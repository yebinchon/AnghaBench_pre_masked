
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_endpoint {struct bnx2i_endpoint* dd_data; } ;
struct iscsi_conn {int dummy; } ;
struct bnx2i_hba {scalar_t__ age; int eh_wait; int net_dev_lock; int adapter_state; } ;
struct bnx2i_endpoint {scalar_t__ state; scalar_t__ hba_age; struct bnx2i_hba* hba; struct bnx2i_conn* conn; scalar_t__ timestamp; } ;
struct bnx2i_conn {int * ep; TYPE_1__* cls_conn; } ;
struct TYPE_2__ {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnx2i_hba*,struct bnx2i_endpoint*) ;
 int FUNC_1 (struct iscsi_endpoint*) ;
 int FUNC_2 (struct bnx2i_hba*,struct bnx2i_endpoint*) ;
 scalar_t__ FUNC_3 (struct bnx2i_endpoint*) ;
 int FUNC_4 (struct iscsi_conn*) ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct iscsi_endpoint *VAR_6)
{
 struct bnx2i_endpoint *VAR_7;
 struct bnx2i_conn *VAR_8 = ((void*)0);
 struct iscsi_conn *VAR_9 = ((void*)0);
 struct bnx2i_hba *VAR_10;

 VAR_7 = VAR_6->dd_data;





 while ((VAR_7->state == VAR_1) &&
  !FUNC_9(VAR_5, VAR_7->timestamp + (12 * VAR_4)))
  FUNC_5(250);

 if (VAR_7->conn) {
  VAR_8 = VAR_7->conn;
  VAR_9 = VAR_8->cls_conn->dd_data;
  FUNC_4(VAR_9);
 }
 VAR_10 = VAR_7->hba;

 FUNC_6(&VAR_10->net_dev_lock);

 if (VAR_7->state == VAR_2)
  goto out;

 if (VAR_7->state == VAR_3)
  goto free_resc;

 if (!FUNC_8(VAR_0, &VAR_10->adapter_state) ||
     (VAR_7->hba_age != VAR_10->age)) {
  FUNC_0(VAR_10, VAR_7);
  goto free_resc;
 }


 if (FUNC_3(VAR_7)) {
  FUNC_7(&VAR_10->net_dev_lock);
  return;
 }
free_resc:
 FUNC_2(VAR_10, VAR_7);

 if (VAR_8)
  VAR_8->ep = ((void*)0);

 FUNC_1(VAR_6);
out:
 FUNC_7(&VAR_10->net_dev_lock);

 FUNC_10(&VAR_10->eh_wait);
}
