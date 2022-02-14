
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int ** ep_array; } ;
struct beiscsi_endpoint {struct beiscsi_conn* conn; int ep_cid; struct beiscsi_hba* phba; } ;
struct beiscsi_conn {scalar_t__ login_in_progress; int task; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct beiscsi_conn*,int ) ;
 int FUNC_2 (struct beiscsi_hba*,int ) ;

__attribute__((used)) static void FUNC_3(struct beiscsi_endpoint *VAR_0)
{
 struct beiscsi_hba *VAR_1 = VAR_0->phba;
 struct beiscsi_conn *VAR_2;

 FUNC_2(VAR_1, VAR_0->ep_cid);
 VAR_0->phba = ((void*)0);

 VAR_1->ep_array[FUNC_0(VAR_0->ep_cid)] = ((void*)0);






 if (!VAR_0->conn)
  return;

 VAR_2 = VAR_0->conn;




 VAR_0->conn = ((void*)0);
 if (VAR_2->login_in_progress) {
  FUNC_1(VAR_2,
            VAR_2->task);
  VAR_2->login_in_progress = 0;
 }
}
