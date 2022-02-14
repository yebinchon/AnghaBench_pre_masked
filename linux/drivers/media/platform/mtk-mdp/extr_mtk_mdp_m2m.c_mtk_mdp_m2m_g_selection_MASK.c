
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; int top; int left; } ;
struct v4l2_selection {TYPE_1__ r; int target; int type; } ;
struct TYPE_4__ {int height; int width; int top; int left; } ;
struct mtk_mdp_frame {TYPE_2__ crop; int height; int width; } ;
struct mtk_mdp_ctx {int id; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 struct mtk_mdp_ctx* FUNC_0 (void*) ;
 struct mtk_mdp_frame* FUNC_1 (struct mtk_mdp_ctx*,int ) ;
 int FUNC_2 (int,char*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4,
           struct v4l2_selection *VAR_5)
{
 struct mtk_mdp_frame *VAR_6;
 struct mtk_mdp_ctx *VAR_7 = FUNC_0(VAR_4);
 bool VAR_8 = 0;

 if (VAR_5->type == VAR_1) {
  if (FUNC_3(VAR_5->target))
   VAR_8 = 1;
 } else if (VAR_5->type == VAR_2) {
  if (FUNC_4(VAR_5->target))
   VAR_8 = 1;
 }
 if (!VAR_8) {
  FUNC_2(1, "[%d] invalid type:%d,%u", VAR_7->id, VAR_5->type,
       VAR_5->target);
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_7, VAR_5->type);

 switch (VAR_5->target) {
 case 131:
 case 132:
 case 129:
 case 128:
  VAR_5->r.left = 0;
  VAR_5->r.top = 0;
  VAR_5->r.width = VAR_6->width;
  VAR_5->r.height = VAR_6->height;
  return 0;

 case 133:
 case 130:
  VAR_5->r.left = VAR_6->crop.left;
  VAR_5->r.top = VAR_6->crop.top;
  VAR_5->r.width = VAR_6->crop.width;
  VAR_5->r.height = VAR_6->crop.height;
  return 0;
 }

 return -VAR_0;
}
