
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int supported; } ;
struct tcpm_port {int attached; int pd_capable; int rx_msgid; int psy; int usb_type; scalar_t__ try_snk_count; scalar_t__ try_src_count; TYPE_2__* tcpc; TYPE_1__ pps_data; } ;
struct TYPE_4__ {int (* set_pd_rx ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (struct tcpm_port*) ;
 int FUNC_3 (struct tcpm_port*) ;
 int FUNC_4 (struct tcpm_port*,int ,int ,int ) ;
 int FUNC_5 (struct tcpm_port*,int) ;
 int FUNC_6 (struct tcpm_port*,int ,int ) ;
 int FUNC_7 (struct tcpm_port*,int ) ;
 int FUNC_8 (struct tcpm_port*) ;
 int FUNC_9 (struct tcpm_port*) ;

__attribute__((used)) static void FUNC_10(struct tcpm_port *VAR_5)
{
 FUNC_9(VAR_5);
 FUNC_8(VAR_5);
 VAR_5->attached = 0;
 VAR_5->pd_capable = 0;
 VAR_5->pps_data.supported = 0;





 VAR_5->rx_msgid = -1;

 VAR_5->tcpc->set_pd_rx(VAR_5->tcpc, 0);
 FUNC_2(VAR_5);
 FUNC_3(VAR_5);
 FUNC_6(VAR_5, 0, 0);
 FUNC_7(VAR_5, VAR_2);
 FUNC_4(VAR_5, VAR_3, VAR_4,
       VAR_1);
 FUNC_5(VAR_5, 0);
 VAR_5->try_src_count = 0;
 VAR_5->try_snk_count = 0;
 VAR_5->usb_type = VAR_0;

 FUNC_0(VAR_5->psy);
}
