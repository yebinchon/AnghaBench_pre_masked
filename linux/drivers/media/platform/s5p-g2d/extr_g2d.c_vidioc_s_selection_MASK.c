
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ top; scalar_t__ left; scalar_t__ height; scalar_t__ width; } ;
struct v4l2_selection {TYPE_1__ r; int type; } ;
struct g2d_frame {scalar_t__ c_width; scalar_t__ o_width; scalar_t__ right; scalar_t__ c_height; scalar_t__ o_height; scalar_t__ bottom; } ;
struct g2d_ctx {int dummy; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (struct g2d_frame*) ;
 int FUNC_1 (struct g2d_frame*) ;
 struct g2d_frame* FUNC_2 (struct g2d_ctx*,int ) ;
 int FUNC_3 (struct file*,void*,struct v4l2_selection*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1,
         struct v4l2_selection *VAR_2)
{
 struct g2d_ctx *VAR_3 = VAR_1;
 struct g2d_frame *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;
 VAR_4 = FUNC_2(VAR_3, VAR_2->type);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_4->c_width = VAR_2->r.width;
 VAR_4->c_height = VAR_2->r.height;
 VAR_4->o_width = VAR_2->r.left;
 VAR_4->o_height = VAR_2->r.top;
 VAR_4->bottom = VAR_4->o_height + VAR_4->c_height;
 VAR_4->right = VAR_4->o_width + VAR_4->c_width;
 return 0;
}
