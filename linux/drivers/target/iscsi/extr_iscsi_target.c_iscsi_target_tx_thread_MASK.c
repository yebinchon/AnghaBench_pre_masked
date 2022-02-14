
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {scalar_t__ conn_state; int queues_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct iscsi_conn*) ;
 int FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_conn*) ;
 int FUNC_4 (struct iscsi_conn*,int*) ;
 int FUNC_5 (struct iscsi_conn*,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;

int FUNC_10(void *VAR_4)
{
 int VAR_5 = 0;
 struct iscsi_conn *VAR_6 = VAR_4;
 bool VAR_7 = 0;





 FUNC_0(VAR_1);

 while (!FUNC_6()) {




  FUNC_5(VAR_6, VAR_3, 1);

  FUNC_9(VAR_6->queues_wq,
      !FUNC_1(VAR_6));

  if (FUNC_8(VAR_3))
   goto transport_err;

get_immediate:
  VAR_5 = FUNC_2(VAR_6);
  if (VAR_5 < 0)
   goto transport_err;

  VAR_5 = FUNC_3(VAR_6);
  if (VAR_5 == 1) {
   goto get_immediate;
  } else if (VAR_5 == -VAR_0) {
   VAR_7 = 1;
   goto out;
  } else if (VAR_5 < 0) {
   goto transport_err;
  }
 }

transport_err:





 if (VAR_6->conn_state != VAR_2)
  FUNC_4(VAR_6, &VAR_7);
out:
 if (!VAR_7) {
  while (!FUNC_6()) {
   FUNC_7(100);
  }
 }
 return 0;
}
