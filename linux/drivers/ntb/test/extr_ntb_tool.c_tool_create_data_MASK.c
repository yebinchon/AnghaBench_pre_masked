
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tool_ctx {int msg_wq; int db_wq; int link_wq; struct ntb_dev* ntb; } ;
struct ntb_dev {int dev; } ;


 int VAR_0 ;
 struct tool_ctx* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 struct tool_ctx* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct ntb_dev*) ;
 scalar_t__ FUNC_5 (struct ntb_dev*) ;

__attribute__((used)) static struct tool_ctx *FUNC_6(struct ntb_dev *VAR_2)
{
 struct tool_ctx *VAR_3;

 VAR_3 = FUNC_2(&VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (VAR_3 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_3->ntb = VAR_2;
 FUNC_3(&VAR_3->link_wq);
 FUNC_3(&VAR_3->db_wq);
 FUNC_3(&VAR_3->msg_wq);

 if (FUNC_4(VAR_2))
  FUNC_1(&VAR_2->dev, "doorbell is unsafe\n");

 if (FUNC_5(VAR_2))
  FUNC_1(&VAR_2->dev, "scratchpad is unsafe\n");

 return VAR_3;
}
