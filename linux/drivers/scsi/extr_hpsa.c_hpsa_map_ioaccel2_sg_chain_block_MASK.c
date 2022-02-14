
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ioaccel2_sg_element {int dummy; } ;
struct io_accel2_cmd {TYPE_2__* sg; } ;
struct ctlr_info {TYPE_1__* pdev; struct ioaccel2_sg_element** ioaccel2_cmd_sg_list; } ;
struct CommandList {size_t cmdindex; } ;
struct TYPE_4__ {int address; int length; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct ioaccel2_sg_element*,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ctlr_info *VAR_1,
 struct io_accel2_cmd *VAR_2, struct CommandList *VAR_3)
{
 struct ioaccel2_sg_element *VAR_4;
 u64 VAR_5;
 u32 VAR_6;

 VAR_4 = VAR_1->ioaccel2_cmd_sg_list[VAR_3->cmdindex];
 VAR_6 = FUNC_3(VAR_2->sg[0].length);
 VAR_5 = FUNC_1(&VAR_1->pdev->dev, VAR_4, VAR_6,
    VAR_0);
 if (FUNC_2(&VAR_1->pdev->dev, VAR_5)) {

  VAR_2->sg->address = 0;
  return -1;
 }
 VAR_2->sg->address = FUNC_0(VAR_5);
 return 0;
}
