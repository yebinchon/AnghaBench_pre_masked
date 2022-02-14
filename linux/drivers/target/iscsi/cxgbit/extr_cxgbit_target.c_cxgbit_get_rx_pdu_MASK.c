
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn {struct cxgbit_sock* context; } ;
struct cxgbit_sock {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cxgbit_sock*) ;
 int FUNC_1 (struct iscsi_conn*,int ,int ) ;
 int FUNC_2 () ;

void FUNC_3(struct iscsi_conn *VAR_1)
{
 struct cxgbit_sock *VAR_2 = VAR_1->context;

 while (!FUNC_2()) {
  FUNC_1(VAR_1, VAR_0, 0);
  if (FUNC_0(VAR_2))
   return;
 }
}
