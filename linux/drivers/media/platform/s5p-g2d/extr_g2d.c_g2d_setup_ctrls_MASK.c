
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct g2d_dev {int v4l2_dev; } ;
struct TYPE_5__ {int error; } ;
struct g2d_ctx {void* ctrl_hflip; TYPE_1__ ctrl_handler; void* ctrl_vflip; struct g2d_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,void**) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 void* FUNC_3 (TYPE_1__*,int *,int ,int ,int,int,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int,int,int) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(struct g2d_ctx *VAR_6)
{
 struct g2d_dev *VAR_7 = VAR_6->dev;

 FUNC_2(&VAR_6->ctrl_handler, 3);

 VAR_6->ctrl_hflip = FUNC_3(&VAR_6->ctrl_handler, &VAR_5,
      VAR_1, 0, 1, 1, 0);

 VAR_6->ctrl_vflip = FUNC_3(&VAR_6->ctrl_handler, &VAR_5,
      VAR_2, 0, 1, 1, 0);

 FUNC_4(
  &VAR_6->ctrl_handler,
  &VAR_5,
  VAR_0,
  VAR_3,
  ~((1 << VAR_4) | (1 << VAR_3)),
  VAR_4);

 if (VAR_6->ctrl_handler.error) {
  int VAR_8 = VAR_6->ctrl_handler.error;
  FUNC_5(&VAR_7->v4l2_dev, "g2d_setup_ctrls failed\n");
  FUNC_1(&VAR_6->ctrl_handler);
  return VAR_8;
 }

 FUNC_0(2, &VAR_6->ctrl_hflip);

 return 0;
}
