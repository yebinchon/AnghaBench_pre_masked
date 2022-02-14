
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct service_processor {int dev; } ;
struct dot_command_header {int type; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct service_processor*,void*,int) ;
 int FUNC_3 (struct service_processor*,void*,int) ;
 int FUNC_4 (struct service_processor*,void*,int) ;




void FUNC_5(struct service_processor *VAR_0, void *VAR_1, int VAR_2)
{
 u32 VAR_3;
 struct dot_command_header *VAR_4 = (struct dot_command_header *)VAR_1;

 if (VAR_2 == 0)
  return;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 == 0)
  return;

 if (VAR_3 > VAR_2)
  VAR_3 = VAR_2;

 switch (VAR_4->type) {
 case 129:
  FUNC_3(VAR_0, VAR_1, VAR_3);
  break;
 case 130:
  FUNC_2(VAR_0, VAR_1, VAR_3);
  break;
 case 128:
  FUNC_4(VAR_0, VAR_1, VAR_3);
  break;
 default:
  FUNC_0(VAR_0->dev, "Received unknown message from service processor\n");
 }
}
