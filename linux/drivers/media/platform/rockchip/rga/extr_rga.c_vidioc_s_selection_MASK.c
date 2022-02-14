
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ top; scalar_t__ left; scalar_t__ width; scalar_t__ height; } ;
struct v4l2_selection {int target; TYPE_1__ r; int type; } ;
struct rockchip_rga {int v4l2_dev; } ;
struct rga_frame {scalar_t__ width; scalar_t__ height; TYPE_1__ crop; } ;
struct rga_ctx {struct rockchip_rga* rga; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rga_frame*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rga_frame*) ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 struct rga_frame* FUNC_2 (struct rga_ctx*,int ) ;
 int FUNC_3 (int ,int,int *,char*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, void *VAR_7,
         struct v4l2_selection *VAR_8)
{
 struct rga_ctx *VAR_9 = VAR_7;
 struct rockchip_rga *VAR_10 = VAR_9->rga;
 struct rga_frame *VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_2(VAR_9, VAR_8->type);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 switch (VAR_8->target) {
 case 129:




  if (VAR_8->type != VAR_3)
   return -VAR_0;
  break;
 case 128:




  if (VAR_8->type != VAR_4)
   return -VAR_0;
  break;




 default:
  return -VAR_0;
 }

 if (VAR_8->r.top < 0 || VAR_8->r.left < 0) {
  FUNC_3(VAR_5, 1, &VAR_10->v4l2_dev,
    "doesn't support negative values for top & left.\n");
  return -VAR_0;
 }

 if (VAR_8->r.left + VAR_8->r.width > VAR_11->width ||
     VAR_8->r.top + VAR_8->r.height > VAR_11->height ||
     VAR_8->r.width < VAR_2 || VAR_8->r.height < VAR_1) {
  FUNC_3(VAR_5, 1, &VAR_10->v4l2_dev, "unsupported crop value.\n");
  return -VAR_0;
 }

 VAR_11->crop = VAR_8->r;

 return VAR_12;
}
