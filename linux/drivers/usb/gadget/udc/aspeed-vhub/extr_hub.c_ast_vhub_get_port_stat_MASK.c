
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct ast_vhub_ep {struct ast_vhub* vhub; } ;
struct ast_vhub {TYPE_1__* ports; } ;
typedef enum std_req_rc { ____Placeholder_std_req_rc } std_req_rc ;
struct TYPE_2__ {int status; int change; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ast_vhub_ep*,char*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct ast_vhub_ep*,int,int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static enum std_req_rc FUNC_2(struct ast_vhub_ep *VAR_3,
           u8 VAR_4)
{
 struct ast_vhub *VAR_5 = VAR_3->vhub;
 u16 VAR_6, VAR_7;

 if (VAR_4 == 0 || VAR_4 > VAR_0)
  return VAR_2;
 VAR_4--;

 VAR_6 = VAR_5->ports[VAR_4].status;
 VAR_7 = VAR_5->ports[VAR_4].change;


 VAR_6 |= VAR_1;

 FUNC_0(VAR_3, " port status=%04x change=%04x\n", VAR_6, VAR_7);

 return FUNC_1(VAR_3,
         VAR_6 & 0xff,
         VAR_6 >> 8,
         VAR_7 & 0xff,
         VAR_7 >> 8);
}
