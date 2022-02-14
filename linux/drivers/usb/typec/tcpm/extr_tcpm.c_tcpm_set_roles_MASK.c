
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpm_port {scalar_t__ polarity; int pwr_role; int data_role; int typec_port; TYPE_1__* tcpc; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;
typedef enum typec_role { ____Placeholder_typec_role } typec_role ;
typedef enum typec_orientation { ____Placeholder_typec_orientation } typec_orientation ;
typedef enum typec_data_role { ____Placeholder_typec_data_role } typec_data_role ;
struct TYPE_2__ {int (* set_roles ) (TYPE_1__*,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int,int,int) ;
 int FUNC_1 (struct tcpm_port*,int ,int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct tcpm_port *VAR_7, bool VAR_8,
     enum typec_role VAR_9, enum typec_data_role VAR_10)
{
 enum typec_orientation VAR_11;
 enum usb_role VAR_12;
 int VAR_13;

 if (VAR_7->polarity == VAR_3)
  VAR_11 = VAR_1;
 else
  VAR_11 = VAR_2;

 if (VAR_10 == VAR_0)
  VAR_12 = VAR_6;
 else
  VAR_12 = VAR_5;

 VAR_13 = FUNC_1(VAR_7, VAR_4, VAR_12, VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = VAR_7->tcpc->set_roles(VAR_7->tcpc, VAR_8, VAR_9, VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_7->pwr_role = VAR_9;
 VAR_7->data_role = VAR_10;
 FUNC_2(VAR_7->typec_port, VAR_10);
 FUNC_3(VAR_7->typec_port, VAR_9);

 return 0;
}
