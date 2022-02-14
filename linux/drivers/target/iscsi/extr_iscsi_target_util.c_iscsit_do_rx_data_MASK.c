
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {int msg_iter; } ;
struct iscsi_data_count {int data_length; int iov_count; int iov; } ;
struct iscsi_conn {int sock; int conn_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int) ;
 int FUNC_1 (struct msghdr*,int ,int) ;
 scalar_t__ FUNC_2 (struct msghdr*) ;
 int FUNC_3 (char*,int,int,...) ;
 int FUNC_4 (int ,struct msghdr*,int ) ;

__attribute__((used)) static int FUNC_5(
 struct iscsi_conn *VAR_2,
 struct iscsi_data_count *VAR_3)
{
 int VAR_4 = VAR_3->data_length, VAR_5 = 0, VAR_6 = 0;
 struct msghdr VAR_7;

 if (!VAR_2 || !VAR_2->sock || !VAR_2->conn_ops)
  return -1;

 FUNC_1(&VAR_7, 0, sizeof(struct msghdr));
 FUNC_0(&VAR_7.msg_iter, VAR_1, VAR_3->iov, VAR_3->iov_count, VAR_4);

 while (FUNC_2(&VAR_7)) {
  VAR_5 = FUNC_4(VAR_2->sock, &VAR_7, VAR_0);
  if (VAR_5 <= 0) {
   FUNC_3("rx_loop: %d total_rx: %d\n",
    VAR_5, VAR_6);
   return VAR_5;
  }
  VAR_6 += VAR_5;
  FUNC_3("rx_loop: %d, total_rx: %d, data: %d\n",
    VAR_5, VAR_6, VAR_4);
 }

 return VAR_6;
}
