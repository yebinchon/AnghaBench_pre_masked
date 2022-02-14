
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_port {scalar_t__ wwpn; int dev; int status; scalar_t__ wwnn; } ;
struct TYPE_6__ {scalar_t__ status; struct zfcp_port* port; } ;
struct fc_els_adisc {int adisc_wwpn; int adisc_wwnn; } ;
struct TYPE_4__ {struct fc_els_adisc rsp; } ;
struct TYPE_5__ {TYPE_1__ adisc; } ;
struct zfcp_fc_req {TYPE_3__ ct_els; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct zfcp_fc_req*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct zfcp_port*,int ,char*) ;
 int FUNC_6 (struct zfcp_port*,int ,char*) ;
 int VAR_3 ;
 int FUNC_7 (struct zfcp_port*) ;

__attribute__((used)) static void FUNC_8(void *VAR_4)
{
 struct zfcp_fc_req *VAR_5 = VAR_4;
 struct zfcp_port *VAR_6 = VAR_5->ct_els.port;
 struct fc_els_adisc *VAR_7 = &VAR_5->u.adisc.rsp;

 if (VAR_5->ct_els.status) {

  FUNC_5(VAR_6, VAR_0,
         "fcadh_1");
  goto out;
 }

 if (!VAR_6->wwnn)
  VAR_6->wwnn = FUNC_2(VAR_7->adisc_wwnn);

 if ((VAR_6->wwpn != FUNC_2(VAR_7->adisc_wwpn)) ||
     !(FUNC_1(&VAR_6->status) & VAR_1)) {
  FUNC_6(VAR_6, VAR_0,
         "fcadh_2");
  goto out;
 }


 FUNC_7(VAR_6);
 out:
 FUNC_0(VAR_2, &VAR_6->status);
 FUNC_4(&VAR_6->dev);
 FUNC_3(VAR_3, VAR_5);
}
