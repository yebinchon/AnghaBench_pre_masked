
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_iter; } ;
struct kvec {int dummy; } ;
struct iscsi_conn {int sock; int conn_ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct kvec*,int,int) ;
 int FUNC_1 (struct msghdr*,int ,int) ;
 scalar_t__ FUNC_2 (struct msghdr*) ;
 int FUNC_3 (char*,int,int,...) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,struct msghdr*) ;

int FUNC_6(
 struct iscsi_conn *VAR_1,
 struct kvec *VAR_2,
 int VAR_3,
 int VAR_4)
{
 struct msghdr VAR_5;
 int VAR_6 = 0;

 if (!VAR_1 || !VAR_1->sock || !VAR_1->conn_ops)
  return -1;

 if (VAR_4 <= 0) {
  FUNC_4("Data length is: %d\n", VAR_4);
  return -1;
 }

 FUNC_1(&VAR_5, 0, sizeof(struct msghdr));

 FUNC_0(&VAR_5.msg_iter, VAR_0, VAR_2, VAR_3, VAR_4);

 while (FUNC_2(&VAR_5)) {
  int VAR_7 = FUNC_5(VAR_1->sock, &VAR_5);
  if (VAR_7 <= 0) {
   FUNC_3("tx_loop: %d total_tx %d\n",
    VAR_7, VAR_6);
   return VAR_7;
  }
  VAR_6 += VAR_7;
  FUNC_3("tx_loop: %d, total_tx: %d, data: %d\n",
     VAR_7, VAR_6, VAR_4);
 }

 return VAR_6;
}
