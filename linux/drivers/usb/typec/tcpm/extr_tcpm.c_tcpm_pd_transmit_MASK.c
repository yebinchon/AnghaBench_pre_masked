
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpm_port {int tx_status; int message_id; int lock; int tx_complete; TYPE_1__* tcpc; } ;
struct pd_message {int header; } ;
typedef enum tcpm_transmit_type { ____Placeholder_tcpm_transmit_type } tcpm_transmit_type ;
struct TYPE_2__ {int (* pd_transmit ) (TYPE_1__*,int,struct pd_message const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int,struct pd_message const*) ;
 int FUNC_6 (struct tcpm_port*,char*,int) ;
 unsigned long FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct tcpm_port *VAR_5,
       enum tcpm_transmit_type VAR_6,
       const struct pd_message *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;

 if (VAR_7)
  FUNC_6(VAR_5, "PD TX, header: %#x", FUNC_0(VAR_7->header));
 else
  FUNC_6(VAR_5, "PD TX, type: %#x", VAR_6);

 FUNC_4(&VAR_5->tx_complete);
 VAR_9 = VAR_5->tcpc->pd_transmit(VAR_5->tcpc, VAR_6, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_3(&VAR_5->lock);
 VAR_8 = FUNC_7(&VAR_5->tx_complete,
    FUNC_1(VAR_4));
 FUNC_2(&VAR_5->lock);
 if (!VAR_8)
  return -VAR_2;

 switch (VAR_5->tx_status) {
 case 128:
  VAR_5->message_id = (VAR_5->message_id + 1) & VAR_3;
  return 0;
 case 130:
  return -VAR_0;
 case 129:
 default:
  return -VAR_1;
 }
}
