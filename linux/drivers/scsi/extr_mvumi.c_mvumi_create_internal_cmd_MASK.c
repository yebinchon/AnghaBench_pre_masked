
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mvumi_hba {int ib_max_size; TYPE_1__* pdev; } ;
struct mvumi_cmd {TYPE_2__* frame; int frame_phys; int queue_pointer; } ;
struct TYPE_5__ {scalar_t__ sg_counts; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 TYPE_2__* FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int *,int ,TYPE_2__*,int ) ;
 int FUNC_4 (struct mvumi_cmd*) ;
 struct mvumi_cmd* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (struct mvumi_hba*,struct mvumi_cmd*,unsigned int) ;

__attribute__((used)) static struct mvumi_cmd *FUNC_7(struct mvumi_hba *VAR_1,
    unsigned int VAR_2)
{
 struct mvumi_cmd *VAR_3;

 VAR_3 = FUNC_5(sizeof(*VAR_3), VAR_0);
 if (!VAR_3) {
  FUNC_1(&VAR_1->pdev->dev, "failed to create a internal cmd\n");
  return ((void*)0);
 }
 FUNC_0(&VAR_3->queue_pointer);

 VAR_3->frame = FUNC_2(&VAR_1->pdev->dev, VAR_1->ib_max_size,
   &VAR_3->frame_phys, VAR_0);
 if (!VAR_3->frame) {
  FUNC_1(&VAR_1->pdev->dev, "failed to allocate memory for FW"
   " frame,size = %d.\n", VAR_1->ib_max_size);
  FUNC_4(VAR_3);
  return ((void*)0);
 }

 if (VAR_2) {
  if (FUNC_6(VAR_1, VAR_3, VAR_2)) {
   FUNC_1(&VAR_1->pdev->dev, "failed to allocate memory"
      " for internal frame\n");
   FUNC_3(&VAR_1->pdev->dev, VAR_1->ib_max_size,
     VAR_3->frame, VAR_3->frame_phys);
   FUNC_4(VAR_3);
   return ((void*)0);
  }
 } else
  VAR_3->frame->sg_counts = 0;

 return VAR_3;
}
