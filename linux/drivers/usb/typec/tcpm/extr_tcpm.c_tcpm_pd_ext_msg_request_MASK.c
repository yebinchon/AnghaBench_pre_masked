
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpm_port {int dummy; } ;
struct TYPE_2__ {int header; int* data; } ;
struct pd_message {TYPE_1__ ext_msg; int header; } ;
typedef enum pd_ext_msg_type { ____Placeholder_pd_ext_msg_type } pd_ext_msg_type ;


 int VAR_0 ;
 int VAR_1 ;

 unsigned int VAR_2 ;





 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tcpm_port*) ;
 int FUNC_3 (struct tcpm_port*,char*,...) ;
 int FUNC_4 (struct tcpm_port*,int ) ;
 int FUNC_5 (struct tcpm_port*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct tcpm_port *VAR_6,
        const struct pd_message *VAR_7)
{
 enum pd_ext_msg_type VAR_8 = FUNC_1(VAR_7->header);
 unsigned int VAR_9 = FUNC_0(VAR_7->ext_msg.header);

 if (!(VAR_7->ext_msg.header & VAR_1)) {
  FUNC_3(VAR_6, "Unchunked extended messages unsupported");
  return;
 }

 if (VAR_9 > VAR_2) {
  FUNC_3(VAR_6, "Chunk handling not yet supported");
  return;
 }

 switch (VAR_8) {
 case 128:




  if (VAR_7->ext_msg.data[VAR_4] &
      VAR_5)
   FUNC_5(VAR_6, VAR_0, 0);
  else
   FUNC_5(VAR_6, FUNC_2(VAR_6), 0);
  break;
 case 132:




  FUNC_5(VAR_6, FUNC_2(VAR_6), 0);
  break;
 case 129:
 case 136:
 case 135:
 case 141:
 case 134:
 case 133:
 case 131:
 case 130:
 case 138:
 case 137:
 case 139:
 case 140:
  FUNC_4(VAR_6, VAR_3);
  break;
 default:
  FUNC_3(VAR_6, "Unhandled extended message type %#x", VAR_8);
  break;
 }
}
