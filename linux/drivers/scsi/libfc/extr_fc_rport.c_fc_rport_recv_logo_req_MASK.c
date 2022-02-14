
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fc_rport_priv {int kref; int rp_mutex; } ;
struct fc_lport {int lp_mutex; } ;
struct fc_frame {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fc_rport_priv*,char*,int ) ;
 int FUNC_1 (struct fc_lport*,int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_frame*) ;
 int VAR_2 ;
 int FUNC_4 (struct fc_rport_priv*,int ) ;
 struct fc_rport_priv* FUNC_5 (struct fc_lport*,int ) ;
 int FUNC_6 (struct fc_rport_priv*) ;
 int FUNC_7 (struct fc_frame*,int ,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct fc_lport *VAR_3, struct fc_frame *VAR_4)
{
 struct fc_rport_priv *VAR_5;
 u32 VAR_6;

 FUNC_9(&VAR_3->lp_mutex);

 FUNC_7(VAR_4, VAR_0, ((void*)0));

 VAR_6 = FUNC_3(VAR_4);

 VAR_5 = FUNC_5(VAR_3, VAR_6);
 if (VAR_5) {
  FUNC_10(&VAR_5->rp_mutex);
  FUNC_0(VAR_5, "Received LOGO request while in state %s\n",
        FUNC_6(VAR_5));

  FUNC_4(VAR_5, VAR_1);
  FUNC_11(&VAR_5->rp_mutex);
  FUNC_8(&VAR_5->kref, VAR_2);
 } else
  FUNC_1(VAR_3, VAR_6,
    "Received LOGO from non-logged-in port\n");
 FUNC_2(VAR_4);
}
