
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct iscsi_endpoint {struct beiscsi_endpoint* dd_data; } ;
struct beiscsi_hba {int ** conn_table; int state; int * ep_array; } ;
struct beiscsi_endpoint {int openiscsi_ep; int ep_cid; struct beiscsi_conn* conn; struct beiscsi_hba* phba; } ;
struct beiscsi_conn {int conn; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct beiscsi_hba*,int ,char*,size_t,...) ;
 scalar_t__ FUNC_2 (struct beiscsi_endpoint*) ;
 int FUNC_3 (struct beiscsi_endpoint*) ;
 int FUNC_4 (struct beiscsi_hba*) ;
 int FUNC_5 (struct beiscsi_hba*,int ,int ,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct iscsi_endpoint *VAR_3)
{
 struct beiscsi_endpoint *VAR_4;
 struct beiscsi_conn *VAR_5;
 struct beiscsi_hba *VAR_6;
 uint16_t VAR_7;

 VAR_4 = VAR_3->dd_data;
 VAR_6 = VAR_4->phba;
 FUNC_5(VAR_6, VAR_2, VAR_0,
      "BS_%d : In beiscsi_ep_disconnect for ep_cid = %u\n",
      VAR_4->ep_cid);

 VAR_7 = FUNC_0(VAR_4->ep_cid);
 if (!VAR_6->ep_array[VAR_7]) {
  FUNC_1(VAR_6, VAR_1,
         "BS_%d : ep_array at %u cid %u empty\n",
         VAR_7,
         VAR_4->ep_cid);
  return;
 }

 if (VAR_4->conn) {
  VAR_5 = VAR_4->conn;
  FUNC_7(VAR_5->conn);
 }

 if (!FUNC_4(VAR_6)) {
  FUNC_5(VAR_6, VAR_2, VAR_0,
       "BS_%d : HBA in error 0x%lx\n", VAR_6->state);
 } else {




  if (FUNC_2(VAR_4) < 0)
   FUNC_1(VAR_6, VAR_1,
          "BS_%d : close conn failed cid %d\n",
          VAR_4->ep_cid);
 }

 FUNC_3(VAR_4);
 if (!VAR_6->conn_table[VAR_7])
  FUNC_1(VAR_6, VAR_1,
         "BS_%d : conn_table empty at %u: cid %u\n",
         VAR_7, VAR_4->ep_cid);
 VAR_6->conn_table[VAR_7] = ((void*)0);
 FUNC_6(VAR_4->openiscsi_ep);
}
