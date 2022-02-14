
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tcpm_port {scalar_t__ cc2; int attached; scalar_t__ cc1; int pd_capable; int send_discover; TYPE_1__* tcpc; int * partner; } ;
typedef enum typec_cc_polarity { ____Placeholder_typec_cc_polarity } typec_cc_polarity ;
struct TYPE_3__ {int (* set_pd_rx ) (TYPE_1__*,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct tcpm_port*,int ,int ,int ) ;
 int FUNC_3 (struct tcpm_port*,int) ;
 int FUNC_4 (struct tcpm_port*,int,int ,int ) ;
 int FUNC_5 (struct tcpm_port*,int) ;
 int FUNC_6 (struct tcpm_port*,int) ;

__attribute__((used)) static int FUNC_7(struct tcpm_port *VAR_9)
{
 enum typec_cc_polarity VAR_10 =
    VAR_9->cc2 == VAR_1 ? VAR_5
        : VAR_4;
 int VAR_11;

 if (VAR_9->attached)
  return 0;

 VAR_11 = FUNC_3(VAR_9, VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_4(VAR_9, 1, VAR_6, VAR_2);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = VAR_9->tcpc->set_pd_rx(VAR_9->tcpc, 1);
 if (VAR_11 < 0)
  goto out_disable_mux;






 if ((VAR_10 == VAR_4 && VAR_9->cc2 == VAR_0) ||
     (VAR_10 == VAR_5 && VAR_9->cc1 == VAR_0)) {
  VAR_11 = FUNC_6(VAR_9, 1);
  if (VAR_11 < 0)
   goto out_disable_pd;
 }

 VAR_11 = FUNC_5(VAR_9, 1);
 if (VAR_11 < 0)
  goto out_disable_vconn;

 VAR_9->pd_capable = 0;

 VAR_9->partner = ((void*)0);

 VAR_9->attached = 1;
 VAR_9->send_discover = 1;

 return 0;

out_disable_vconn:
 FUNC_6(VAR_9, 0);
out_disable_pd:
 VAR_9->tcpc->set_pd_rx(VAR_9->tcpc, 0);
out_disable_mux:
 FUNC_2(VAR_9, VAR_7, VAR_8,
       VAR_3);
 return VAR_11;
}
