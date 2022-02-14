
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int error; } ;
struct TYPE_6__ {TYPE_2__* ctrl_handler; int entity; } ;
struct TYPE_8__ {int flags; } ;
struct rvin_dev {TYPE_2__ ctrl_handler; TYPE_1__ vdev; TYPE_5__ pad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,TYPE_5__*) ;
 int VAR_2 ;
 int FUNC_1 (struct rvin_dev*) ;
 int FUNC_2 (struct rvin_dev*) ;
 int FUNC_3 (struct rvin_dev*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int *,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct rvin_dev *VAR_3)
{
 int VAR_4;

 VAR_3->pad.flags = VAR_0;
 VAR_4 = FUNC_0(&VAR_3->vdev.entity, 1, &VAR_3->pad);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  FUNC_2(VAR_3);

 VAR_4 = FUNC_5(&VAR_3->ctrl_handler, 1);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_6(&VAR_3->ctrl_handler, &VAR_2,
     VAR_1, 0, 255, 1, 255);

 if (VAR_3->ctrl_handler.error) {
  VAR_4 = VAR_3->ctrl_handler.error;
  FUNC_4(&VAR_3->ctrl_handler);
  return VAR_4;
 }

 VAR_3->vdev.ctrl_handler = &VAR_3->ctrl_handler;

 return VAR_4;
}
