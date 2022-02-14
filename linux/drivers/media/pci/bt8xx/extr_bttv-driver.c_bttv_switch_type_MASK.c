
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int dummy; } ;
struct bttv_fh {int type; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 struct videobuf_queue* FUNC_0 (struct bttv_fh*) ;
 int FUNC_1 (struct bttv_fh*) ;
 scalar_t__ FUNC_2 (struct bttv_fh*,int) ;
 scalar_t__ FUNC_3 (struct videobuf_queue*) ;

__attribute__((used)) static int FUNC_4(struct bttv_fh *VAR_1, enum v4l2_buf_type VAR_2)
{
 struct videobuf_queue *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = FUNC_1(VAR_1);

 if (FUNC_2(VAR_1,VAR_4))
  return -VAR_0;
 if (FUNC_3(VAR_3))
  return -VAR_0;
 VAR_1->type = VAR_2;
 return 0;
}
