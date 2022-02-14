
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct ast_vhub_port {TYPE_2__ dev; } ;
struct ast_vhub {int speed; struct ast_vhub_port* ports; } ;
struct TYPE_3__ {int max_speed; } ;


 int FUNC_0 (struct ast_vhub*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int FUNC_1 (struct ast_vhub*,size_t,int,int,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct ast_vhub *VAR_6, u8 VAR_7)
{
 struct ast_vhub_port *VAR_8 = &VAR_6->ports[VAR_7];
 u16 VAR_9, VAR_10, VAR_11;


 FUNC_1(VAR_6, VAR_7,
      VAR_0 |
      VAR_4,
      VAR_3,
      0);

 if (!VAR_8->dev.driver)
  return;





 FUNC_2(&VAR_8->dev);


 VAR_11 = VAR_8->dev.driver->max_speed;
 if (VAR_11 == VAR_5 || VAR_11 > VAR_6->speed)
  VAR_11 = VAR_6->speed;

 switch (VAR_11) {
 case 128:
  VAR_9 = VAR_2;
  VAR_10 = VAR_1;
  break;
 case 130:
  VAR_9 = 0;
  VAR_10 = VAR_2 |
   VAR_1;
  break;
 case 129:
  VAR_9 = VAR_1;
  VAR_10 = VAR_2;
  break;
 default:
  FUNC_0(VAR_6, "Unsupported speed %d when"
         " connecting device\n",
         VAR_11);
  return;
 }
 VAR_10 |= VAR_3;
 VAR_9 |= VAR_0;


 FUNC_1(VAR_6, VAR_7, VAR_10, VAR_9, 1);
}
