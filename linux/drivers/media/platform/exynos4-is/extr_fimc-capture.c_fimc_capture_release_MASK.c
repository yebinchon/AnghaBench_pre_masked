
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int use_count; } ;
struct TYPE_7__ {TYPE_3__ entity; } ;
struct TYPE_10__ {TYPE_1__ vdev; } ;
struct fimc_vid_cap {int streaming; TYPE_4__ ve; } ;
struct fimc_dev {int lock; TYPE_2__* pdev; int state; struct fimc_vid_cap vid_cap; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct file*) ;
 struct fimc_dev* FUNC_12 (struct file*) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_3)
{
 struct fimc_dev *VAR_4 = FUNC_12(VAR_3);
 struct fimc_vid_cap *VAR_5 = &VAR_4->vid_cap;
 bool VAR_6 = FUNC_11(VAR_3);
 int VAR_7;

 FUNC_2("pid: %d, state: 0x%lx", FUNC_10(VAR_2), VAR_4->state);

 FUNC_7(&VAR_4->lock);

 if (VAR_6 && VAR_5->streaming) {
  FUNC_6(&VAR_5->ve.vdev.entity);
  VAR_5->streaming = 0;
 }

 VAR_7 = FUNC_0(VAR_3, ((void*)0));

 if (VAR_6) {
  FUNC_1(VAR_0, &VAR_4->state);
  FUNC_5(&VAR_5->ve, VAR_6);
  FUNC_1(VAR_1, &VAR_4->state);

  FUNC_3(&VAR_5->ve);
  VAR_5->ve.vdev.entity.use_count--;
  FUNC_4(&VAR_5->ve);
 }

 FUNC_9(&VAR_4->pdev->dev);
 FUNC_8(&VAR_4->lock);

 return VAR_7;
}
