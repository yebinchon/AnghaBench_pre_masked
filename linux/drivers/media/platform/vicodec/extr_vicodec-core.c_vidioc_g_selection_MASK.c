
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vicodec_q_data {int coded_height; int coded_width; int visible_height; int visible_width; } ;
struct vicodec_ctx {scalar_t__ is_enc; } ;
struct TYPE_2__ {int height; int width; int top; int left; } ;
struct v4l2_selection {int target; TYPE_1__ r; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 struct vicodec_ctx* FUNC_0 (struct file*) ;
 struct vicodec_q_data* FUNC_1 (struct vicodec_ctx*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
         struct v4l2_selection *VAR_5)
{
 struct vicodec_ctx *VAR_6 = FUNC_0(VAR_3);
 struct vicodec_q_data *VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_5->type);
 if (!VAR_7)
  return -VAR_0;




 if (VAR_6->is_enc && VAR_5->type == VAR_2) {
  switch (VAR_5->target) {
  case 130:
   VAR_5->r.left = 0;
   VAR_5->r.top = 0;
   VAR_5->r.width = VAR_7->visible_width;
   VAR_5->r.height = VAR_7->visible_height;
   return 0;
  case 128:
  case 129:
   VAR_5->r.left = 0;
   VAR_5->r.top = 0;
   VAR_5->r.width = VAR_7->coded_width;
   VAR_5->r.height = VAR_7->coded_height;
   return 0;
  }
 } else if (!VAR_6->is_enc && VAR_5->type == VAR_1) {
  switch (VAR_5->target) {
  case 133:
   VAR_5->r.left = 0;
   VAR_5->r.top = 0;
   VAR_5->r.width = VAR_7->visible_width;
   VAR_5->r.height = VAR_7->visible_height;
   return 0;
  case 131:
  case 132:
   VAR_5->r.left = 0;
   VAR_5->r.top = 0;
   VAR_5->r.width = VAR_7->coded_width;
   VAR_5->r.height = VAR_7->coded_height;
   return 0;
  }
 }
 return -VAR_0;
}
