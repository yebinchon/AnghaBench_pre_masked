
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_live_connection {TYPE_1__* oc_conn; } ;
struct TYPE_2__ {int cc_recovery_data; int (* cc_recovery_handler ) (int,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ocfs2_live_connection* FUNC_3 (char const*) ;
 int VAR_0 ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(const char *VAR_1,
        int VAR_2)
{
 struct ocfs2_live_connection *VAR_3;

 FUNC_1(&VAR_0);

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_3->oc_conn == ((void*)0));
  VAR_3->oc_conn->cc_recovery_handler(VAR_2,
      VAR_3->oc_conn->cc_recovery_data);
 }

 FUNC_2(&VAR_0);
}
