
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* height; void* width; int top; int left; } ;
struct v4l2_selection {int target; int flags; TYPE_1__ r; int type; } ;
struct file {int dummy; } ;
struct coda_q_data {TYPE_1__ rect; int height; int width; } ;
struct coda_ctx {int inst_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 void* FUNC_0 (void*,unsigned int,int ) ;
 int FUNC_1 (int,struct coda_ctx*,char*,void*,void*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_selection*) ;
 struct coda_ctx* FUNC_3 (void*) ;
 struct coda_q_data* FUNC_4 (struct coda_ctx*,int ) ;
 void* FUNC_5 (void*,int) ;
 void* FUNC_6 (void*,int) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_4, void *VAR_5,
       struct v4l2_selection *VAR_6)
{
 struct coda_ctx *VAR_7 = FUNC_3(VAR_5);
 struct coda_q_data *VAR_8;

 switch (VAR_6->target) {
 case 129:
  if (VAR_7->inst_type == VAR_0 &&
      VAR_6->type == VAR_2) {
   VAR_8 = FUNC_4(VAR_7, VAR_6->type);
   if (!VAR_8)
    return -VAR_1;

   VAR_6->r.left = 0;
   VAR_6->r.top = 0;
   VAR_6->r.width = FUNC_0(VAR_6->r.width, 2U, VAR_8->width);
   VAR_6->r.height = FUNC_0(VAR_6->r.height, 2U, VAR_8->height);

   if (VAR_6->flags & VAR_3) {
    VAR_6->r.width = FUNC_6(VAR_6->r.width, 2);
    VAR_6->r.height = FUNC_6(VAR_6->r.height, 2);
   } else {
    VAR_6->r.width = FUNC_5(VAR_6->r.width, 2);
    VAR_6->r.height = FUNC_5(VAR_6->r.height, 2);
   }

   VAR_8->rect = VAR_6->r;

   FUNC_1(1, VAR_7, "Setting crop rectangle: %dx%d\n",
     VAR_6->r.width, VAR_6->r.height);

   return 0;
  }

 case 128:
 case 130:
  return FUNC_2(VAR_4, VAR_5, VAR_6);
 default:

  return -VAR_1;
 }
}
