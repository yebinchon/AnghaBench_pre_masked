
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ast_vhub_port {int status; int dev; } ;
struct ast_vhub {int suspended; struct ast_vhub_port* ports; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct ast_vhub*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ast_vhub *VAR_2)
{
 unsigned int VAR_3;

 FUNC_0(VAR_2, "USB bus resume\n");

 if (!VAR_2->suspended)
  return;

 VAR_2->suspended = 0;





 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct ast_vhub_port *VAR_4 = &VAR_2->ports[VAR_3];

  if (!(VAR_4->status & VAR_1))
   FUNC_1(&VAR_4->dev);
 }
}
