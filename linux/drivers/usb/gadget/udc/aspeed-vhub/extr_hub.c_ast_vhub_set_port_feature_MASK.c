
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct ast_vhub_port {int status; int change; int dev; } ;
struct ast_vhub_ep {struct ast_vhub* vhub; } ;
struct ast_vhub {struct ast_vhub_port* ports; } ;
typedef enum std_req_rc { ____Placeholder_std_req_rc } std_req_rc ;


 size_t VAR_0 ;
 int FUNC_0 (struct ast_vhub_ep*,char*) ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ast_vhub*,size_t,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ast_vhub*,size_t) ;
 int FUNC_4 (struct ast_vhub*,size_t) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static enum std_req_rc FUNC_5(struct ast_vhub_ep *VAR_7,
       u8 VAR_8, u16 VAR_9)
{
 struct ast_vhub *VAR_10 = VAR_7->vhub;
 struct ast_vhub_port *VAR_11;

 if (VAR_8 == 0 || VAR_8 > VAR_0)
  return VAR_6;
 VAR_8--;
 VAR_11 = &VAR_10->ports[VAR_8];

 switch(VAR_9) {
 case 129:
  if (!(VAR_11->status & VAR_3))
   return VAR_5;
  FUNC_1(VAR_10, VAR_8,
       0, VAR_4,
       0);
  FUNC_2(&VAR_11->dev);
  return VAR_5;
 case 130:
  FUNC_0(VAR_7, "Port reset !\n");
  FUNC_3(VAR_10, VAR_8);
  return VAR_5;
 case 131:





  if (VAR_11->status & VAR_1) {
   VAR_11->change |= VAR_2;
   FUNC_4(VAR_10, VAR_8);
  }
  return VAR_5;
 case 128:
 case 132:

  return VAR_5;
 }
 return VAR_6;
}
