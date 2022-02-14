
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int id; int val; } ;
struct s5p_jpeg_ctx {struct s5p_jpeg* jpeg; } ;
struct s5p_jpeg {int slock; } ;



 struct s5p_jpeg_ctx* FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct s5p_jpeg_ctx*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_0)
{
 struct s5p_jpeg_ctx *VAR_1 = FUNC_0(VAR_0);
 struct s5p_jpeg *VAR_2 = VAR_1->jpeg;
 unsigned long VAR_3;

 switch (VAR_0->id) {
 case 128:
  FUNC_2(&VAR_2->slock, VAR_3);
  VAR_0->val = FUNC_1(VAR_1);
  FUNC_3(&VAR_2->slock, VAR_3);
  break;
 }

 return 0;
}
