
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rmnet_port {int dummy; } ;
struct rmnet_map_control_command {unsigned char command_name; } ;


 unsigned char VAR_0 ;


 unsigned char VAR_1 ;
 struct rmnet_map_control_command* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 unsigned char FUNC_2 (struct sk_buff*,struct rmnet_port*,int) ;
 int FUNC_3 (struct sk_buff*,unsigned char,struct rmnet_port*) ;

void FUNC_4(struct sk_buff *VAR_2, struct rmnet_port *VAR_3)
{
 struct rmnet_map_control_command *VAR_4;
 unsigned char VAR_5;
 unsigned char VAR_6 = 0;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = VAR_4->command_name;

 switch (VAR_5) {
 case 128:
  VAR_6 = FUNC_2(VAR_2, VAR_3, 1);
  break;

 case 129:
  VAR_6 = FUNC_2(VAR_2, VAR_3, 0);
  break;

 default:
  VAR_6 = VAR_1;
  FUNC_1(VAR_2);
  break;
 }
 if (VAR_6 == VAR_0)
  FUNC_3(VAR_2, VAR_6, VAR_3);
}
