
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpm_port {int typec_port; scalar_t__ role_sw; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;
typedef enum typec_orientation { ____Placeholder_typec_orientation } typec_orientation ;


 int FUNC_0 (struct tcpm_port*,char*,int,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct tcpm_port *VAR_0, int VAR_1,
   enum usb_role VAR_2,
   enum typec_orientation VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0, "Requesting mux state %d, usb-role %d, orientation %d",
   VAR_1, VAR_2, VAR_3);

 VAR_4 = FUNC_2(VAR_0->typec_port, VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_0->role_sw) {
  VAR_4 = FUNC_3(VAR_0->role_sw, VAR_2);
  if (VAR_4)
   return VAR_4;
 }

 return FUNC_1(VAR_0->typec_port, VAR_1);
}
