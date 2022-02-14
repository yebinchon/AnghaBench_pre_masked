
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int FUNC_0 (struct bttv_fh*) ;
 int FUNC_1 (struct bttv_fh*) ;
 int FUNC_2 (struct bttv*,struct bttv_fh*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2,
     enum v4l2_buf_type VAR_3)
{
 struct bttv_fh *VAR_4 = VAR_2;
 struct bttv *VAR_5 = VAR_4->btv;
 int VAR_6 = FUNC_1(VAR_4);

 if (!FUNC_2(VAR_5, VAR_4, VAR_6))
  return -VAR_0;
 return FUNC_3(FUNC_0(VAR_4));
}
