
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; } ;
struct fimc_lite {int lock; int state; int irq_queue; int slock; int out_path; int sensor; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fimc_lite*,int) ;
 int FUNC_4 (struct fimc_lite*) ;
 int FUNC_5 (struct fimc_lite*) ;
 int FUNC_6 (struct fimc_lite*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (struct v4l2_subdev*,char*) ;
 struct fimc_lite* FUNC_15 (struct v4l2_subdev*) ;
 int FUNC_16 (int ,int,int ) ;

__attribute__((used)) static int FUNC_17(struct v4l2_subdev *VAR_4, int VAR_5)
{
 struct fimc_lite *VAR_6 = FUNC_15(VAR_4);
 unsigned long VAR_7;
 int VAR_8;
 VAR_6->sensor = FUNC_2(&VAR_4->entity);

 if (FUNC_0(&VAR_6->out_path) != VAR_1)
  return -VAR_0;

 FUNC_8(&VAR_6->lock);
 if (VAR_5) {
  FUNC_6(VAR_6);
  VAR_8 = FUNC_3(VAR_6, 1);
  if (!VAR_8) {
   FUNC_11(&VAR_6->slock, VAR_7);
   FUNC_4(VAR_6);
   FUNC_12(&VAR_6->slock, VAR_7);
  }
 } else {
  FUNC_10(VAR_2, &VAR_6->state);

  FUNC_11(&VAR_6->slock, VAR_7);
  FUNC_5(VAR_6);
  FUNC_12(&VAR_6->slock, VAR_7);

  VAR_8 = FUNC_16(VAR_6->irq_queue,
    !FUNC_13(VAR_2, &VAR_6->state),
    FUNC_7(200));
  if (VAR_8 == 0)
   FUNC_14(VAR_4, "s_stream(0) timeout\n");
  FUNC_1(VAR_3, &VAR_6->state);
 }

 FUNC_9(&VAR_6->lock);
 return VAR_8;
}
