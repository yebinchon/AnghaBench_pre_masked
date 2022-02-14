
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport_priv {int rp_state; int flags; int retries; int rp_mutex; struct fc_lport* local_port; } ;
struct fc_lport {int point_to_multipoint; } ;


 int FUNC_0 (struct fc_rport_priv*,char*,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fc_rport_priv*,int ) ;
 int FUNC_2 (struct fc_rport_priv*) ;
 int FUNC_3 (struct fc_rport_priv*) ;
 int FUNC_4 (struct fc_rport_priv*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct fc_rport_priv *VAR_2, int VAR_3)
{
 struct fc_lport *VAR_4 = VAR_2->local_port;

 FUNC_5(&VAR_2->rp_mutex);

 FUNC_0(VAR_2, "Error %d in state %s, retries %d\n",
       -VAR_3, FUNC_4(VAR_2), VAR_2->retries);

 switch (VAR_2->rp_state) {
 case 134:
  VAR_2->flags &= ~VAR_0;
  FUNC_1(VAR_2, VAR_1);
  break;
 case 132:
  if (VAR_4->point_to_multipoint) {
   VAR_2->flags &= ~VAR_0;
   FUNC_1(VAR_2, VAR_1);
  } else
   FUNC_2(VAR_2);
  break;
 case 128:
  FUNC_3(VAR_2);
  break;
 case 130:
 case 136:
  FUNC_2(VAR_2);
  break;
 case 131:
 case 135:
 case 129:
 case 133:
  break;
 }
}
