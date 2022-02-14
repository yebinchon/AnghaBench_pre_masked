
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_rport_priv {int * ops; } ;
struct TYPE_2__ {int disc_mutex; } ;
struct fc_lport {TYPE_1__ disc; int lp_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_lport*,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct fc_lport*,int *) ;
 int VAR_2 ;
 int FUNC_2 (struct fc_lport*) ;
 int FUNC_3 (struct fc_lport*,int ) ;
 struct fc_rport_priv* FUNC_4 (struct fc_lport*,int ) ;
 int FUNC_5 (struct fc_rport_priv*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct fc_lport *VAR_3)
{
 struct fc_rport_priv *VAR_4;

 FUNC_6(&VAR_3->lp_mutex);

 FUNC_0(VAR_3, "Entered DNS state from %s state\n",
       FUNC_2(VAR_3));

 FUNC_3(VAR_3, VAR_1);

 FUNC_7(&VAR_3->disc.disc_mutex);
 VAR_4 = FUNC_4(VAR_3, VAR_0);
 FUNC_8(&VAR_3->disc.disc_mutex);
 if (!VAR_4)
  goto err;

 VAR_4->ops = &VAR_2;
 FUNC_5(VAR_4);
 return;

err:
 FUNC_1(VAR_3, ((void*)0));
}
