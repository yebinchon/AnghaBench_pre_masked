
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct ast_vhub_port {int status; unsigned int change; int dev; } ;
struct ast_vhub_ep {struct ast_vhub* vhub; } ;
struct ast_vhub {struct ast_vhub_port* ports; } ;
typedef enum std_req_rc { ____Placeholder_std_req_rc } std_req_rc ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ast_vhub*,size_t,int,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ast_vhub*,size_t) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum std_req_rc FUNC_4(struct ast_vhub_ep *VAR_5,
       u8 VAR_6, u16 VAR_7)
{
 struct ast_vhub *VAR_8 = VAR_5->vhub;
 struct ast_vhub_port *VAR_9;

 if (VAR_6 == 0 || VAR_6 > VAR_0)
  return VAR_4;
 VAR_6--;
 VAR_9 = &VAR_8->ports[VAR_6];

 switch(VAR_7) {
 case 131:
  FUNC_0(VAR_8, VAR_6,
       VAR_1 |
       VAR_2, 0,
       0);
  FUNC_2(&VAR_9->dev);
  return VAR_3;
 case 128:
  if (!(VAR_9->status & VAR_2))
   return VAR_3;
  FUNC_0(VAR_8, VAR_6,
       VAR_2, 0,
       0);
  FUNC_1(&VAR_9->dev);
  return VAR_3;
 case 129:

  return VAR_3;
 case 130:

  return VAR_3;
 case 136:
 case 135:
 case 132:
 case 134:
 case 133:

  VAR_9->change &= ~(1u << (VAR_7 - 16));
  FUNC_3(VAR_8, VAR_6);
  return VAR_3;
 }
 return VAR_4;
}
