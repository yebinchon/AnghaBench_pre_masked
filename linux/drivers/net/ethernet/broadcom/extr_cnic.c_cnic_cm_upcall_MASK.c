
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cnic_ulp_ops {int (* cm_remote_close ) (struct cnic_sock*) ;int (* cm_abort_complete ) (struct cnic_sock*) ;int (* cm_remote_abort ) (struct cnic_sock*) ;int (* cm_close_complete ) (struct cnic_sock*) ;int (* cm_connect_complete ) (struct cnic_sock*) ;} ;
struct cnic_sock {int ulp_type; } ;
struct cnic_local {int * ulp_ops; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct cnic_ulp_ops* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct cnic_sock*) ;
 int FUNC_4 (struct cnic_sock*) ;
 int FUNC_5 (struct cnic_sock*) ;
 int FUNC_6 (struct cnic_sock*) ;
 int FUNC_7 (struct cnic_sock*) ;

__attribute__((used)) static void FUNC_8(struct cnic_local *VAR_5, struct cnic_sock *VAR_6,
      u8 VAR_7)
{
 struct cnic_ulp_ops *VAR_8;
 int VAR_9 = VAR_6->ulp_type;

 FUNC_1();
 VAR_8 = FUNC_0(VAR_5->ulp_ops[VAR_9]);
 if (VAR_8) {
  if (VAR_7 == VAR_2)
   VAR_8->cm_connect_complete(VAR_6);
  else if (VAR_7 == VAR_0)
   VAR_8->cm_close_complete(VAR_6);
  else if (VAR_7 == VAR_4)
   VAR_8->cm_remote_abort(VAR_6);
  else if (VAR_7 == VAR_3)
   VAR_8->cm_abort_complete(VAR_6);
  else if (VAR_7 == VAR_1)
   VAR_8->cm_remote_close(VAR_6);
 }
 FUNC_2();
}
