
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; int top; int left; } ;
struct v4l2_selection {scalar_t__ type; TYPE_2__ r; } ;
struct fimc_frame {int height; int width; int offs_v; int offs_h; } ;
struct TYPE_3__ {int vfd; } ;
struct fimc_dev {TYPE_1__ m2m; } ;
struct fimc_ctx {int rotation; struct fimc_frame s_frame; struct fimc_frame d_frame; struct fimc_dev* fimc_dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct fimc_ctx* FUNC_0 (void*) ;
 int FUNC_1 (struct fimc_ctx*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,struct fimc_ctx*) ;
 int FUNC_3 (struct fimc_ctx*,struct v4l2_selection*) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4,
    struct v4l2_selection *VAR_5)
{
 struct fimc_ctx *VAR_6 = FUNC_0(VAR_4);
 struct fimc_dev *VAR_7 = VAR_6->fimc_dev;
 struct fimc_frame *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_6, VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_8 = (VAR_5->type == VAR_2) ?
  &VAR_6->s_frame : &VAR_6->d_frame;


 if (VAR_5->type == VAR_2) {
  VAR_9 = FUNC_1(VAR_6, VAR_5->r.width,
    VAR_5->r.height, VAR_6->d_frame.width,
    VAR_6->d_frame.height, VAR_6->rotation);
 } else {
  VAR_9 = FUNC_1(VAR_6, VAR_6->s_frame.width,
    VAR_6->s_frame.height, VAR_5->r.width,
    VAR_5->r.height, VAR_6->rotation);
 }
 if (VAR_9) {
  FUNC_4(&VAR_7->m2m.vfd, "Out of scaler range\n");
  return -VAR_0;
 }

 VAR_8->offs_h = VAR_5->r.left;
 VAR_8->offs_v = VAR_5->r.top;
 VAR_8->width = VAR_5->r.width;
 VAR_8->height = VAR_5->r.height;

 FUNC_2(VAR_1, VAR_6);

 return 0;
}
