
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_seq {int dummy; } ;
struct fc_rport_priv {int kref; struct fc_lport* local_port; } ;
struct fc_lport {int dummy; } ;
struct fc_frame {int dummy; } ;
struct TYPE_2__ {int did; } ;


 int FUNC_0 (struct fc_lport*,int ,char*,int ) ;
 int FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_frame*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_4 (struct fc_seq*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct fc_seq *VAR_1, struct fc_frame *VAR_2,
          void *VAR_3)
{
 struct fc_rport_priv *VAR_4 = VAR_3;
 struct fc_lport *VAR_5 = VAR_4->local_port;

 FUNC_0(VAR_5, FUNC_4(VAR_1)->did,
   "Received a LOGO %s\n", FUNC_2(VAR_2));
 if (!FUNC_1(VAR_2))
  FUNC_3(VAR_2);
 FUNC_5(&VAR_4->kref, VAR_0);
}
