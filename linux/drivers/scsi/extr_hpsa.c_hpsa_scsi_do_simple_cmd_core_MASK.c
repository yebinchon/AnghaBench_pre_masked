
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {TYPE_1__* pdev; } ;
struct CommandList {int * waiting; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (unsigned long) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct ctlr_info *VAR_4,
 struct CommandList *VAR_5, int VAR_6, unsigned long VAR_7)
{
 FUNC_0(VAR_3);

 VAR_5->waiting = &VAR_3;
 FUNC_1(VAR_4, VAR_5, VAR_6);
 if (VAR_7 == VAR_2) {

  FUNC_4(&VAR_3);
  return VAR_1;
 }
 if (!FUNC_5(&VAR_3,
     FUNC_3(VAR_7))) {
  FUNC_2(&VAR_4->pdev->dev, "Command timed out.\n");
  return -VAR_0;
 }
 return VAR_1;
}
