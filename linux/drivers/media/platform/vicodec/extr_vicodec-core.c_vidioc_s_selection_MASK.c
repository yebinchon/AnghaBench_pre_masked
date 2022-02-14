
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vicodec_q_data {void* visible_height; int coded_height; void* visible_width; int coded_width; } ;
struct vicodec_ctx {int is_enc; } ;
struct TYPE_2__ {void* height; void* width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_selection {scalar_t__ target; TYPE_1__ r; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (void*,int ,int ) ;
 struct vicodec_ctx* FUNC_1 (struct file*) ;
 struct vicodec_q_data* FUNC_2 (struct vicodec_ctx*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
         struct v4l2_selection *VAR_7)
{
 struct vicodec_ctx *VAR_8 = FUNC_1(VAR_5);
 struct vicodec_q_data *VAR_9;

 if (VAR_7->type != VAR_3)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8, VAR_7->type);
 if (!VAR_9)
  return -VAR_0;

 if (!VAR_8->is_enc || VAR_7->target != VAR_4)
  return -VAR_0;

 VAR_7->r.left = 0;
 VAR_7->r.top = 0;
 VAR_9->visible_width = FUNC_0(VAR_7->r.width, VAR_2,
          VAR_9->coded_width);
 VAR_7->r.width = VAR_9->visible_width;
 VAR_9->visible_height = FUNC_0(VAR_7->r.height, VAR_1,
           VAR_9->coded_height);
 VAR_7->r.height = VAR_9->visible_height;
 return 0;
}
