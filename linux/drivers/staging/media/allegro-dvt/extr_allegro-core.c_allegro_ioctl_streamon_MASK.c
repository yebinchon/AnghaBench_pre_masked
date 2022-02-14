
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fh {int m2m_ctx; } ;
struct file {struct v4l2_fh* private_data; } ;
struct allegro_channel {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int FUNC_0 (struct allegro_channel*) ;
 struct allegro_channel* FUNC_1 (struct v4l2_fh*) ;
 int FUNC_2 (struct file*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
      enum v4l2_buf_type VAR_3)
{
 struct v4l2_fh *VAR_4 = VAR_1->private_data;
 struct allegro_channel *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 if (VAR_3 == VAR_0) {
  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 return FUNC_2(VAR_1, VAR_4->m2m_ctx, VAR_3);
}
