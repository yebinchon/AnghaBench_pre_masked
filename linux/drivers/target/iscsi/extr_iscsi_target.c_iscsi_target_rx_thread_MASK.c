
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_conn {int transport_failed; TYPE_1__* conn_transport; int rx_login_comp; } ;
struct TYPE_2__ {int (* iscsit_get_rx_pdu ) (struct iscsi_conn*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_conn*,int*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct iscsi_conn*) ;
 int FUNC_8 (int *) ;

int FUNC_9(void *VAR_2)
{
 int VAR_3;
 struct iscsi_conn *VAR_4 = VAR_2;
 bool VAR_5 = 0;





 FUNC_0(VAR_0);




 VAR_3 = FUNC_8(&VAR_4->rx_login_comp);
 if (VAR_3 < 0 || FUNC_2(VAR_4))
  goto out;

 if (!VAR_4->conn_transport->iscsit_get_rx_pdu)
  return 0;

 VAR_4->conn_transport->iscsit_get_rx_pdu(VAR_4);

 if (!FUNC_6(VAR_1))
  FUNC_1(&VAR_4->transport_failed, 1);
 FUNC_3(VAR_4, &VAR_5);

out:
 if (!VAR_5) {
  while (!FUNC_4()) {
   FUNC_5(100);
  }
 }

 return 0;
}
