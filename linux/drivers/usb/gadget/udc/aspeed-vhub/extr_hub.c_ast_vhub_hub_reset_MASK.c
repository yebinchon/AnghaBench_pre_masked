
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ast_vhub_port {int dev; scalar_t__ change; int status; } ;
struct ast_vhub {scalar_t__ speed; int suspended; int wakeup_en; scalar_t__ regs; struct ast_vhub_port* ports; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct ast_vhub*,char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(struct ast_vhub *VAR_9)
{
 unsigned int VAR_10;

 FUNC_0(VAR_9, "USB bus reset\n");





 if (VAR_9->speed == VAR_6)
  return;


 VAR_9->suspended = 0;


 VAR_9->speed = VAR_6;


 VAR_9->wakeup_en = 0;





 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  struct ast_vhub_port *VAR_11 = &VAR_9->ports[VAR_10];


  VAR_11->status &= VAR_5;
  VAR_11->change = 0;


  FUNC_1(&VAR_11->dev);
 }


 FUNC_2(0, VAR_9->regs + VAR_0);
 FUNC_2(0, VAR_9->regs + VAR_1);
 FUNC_2(VAR_8 |
        VAR_7,
        VAR_9->regs + VAR_2);
 FUNC_2(0, VAR_9->regs + VAR_3);
}
