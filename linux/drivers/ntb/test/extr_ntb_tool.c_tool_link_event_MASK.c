
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tool_ctx {int link_wq; TYPE_1__* ntb; } ;
typedef enum ntb_width { ____Placeholder_ntb_width } ntb_width ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,char*,int,int) ;
 int FUNC_1 (TYPE_1__*,int*,int*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct tool_ctx *VAR_1 = VAR_0;
 enum ntb_speed VAR_2;
 enum ntb_width VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->ntb, &VAR_2, &VAR_3);

 FUNC_0(&VAR_1->ntb->dev, "link is %s speed %d width %d\n",
  VAR_4 ? "up" : "down", VAR_2, VAR_3);

 FUNC_2(&VAR_1->link_wq);
}
