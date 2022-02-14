
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m2m_ctx; } ;
struct s5p_jpeg_ctx {TYPE_1__ fh; int ctrl_handler; } ;
struct s5p_jpeg {int lock; } ;
struct file {int private_data; } ;


 struct s5p_jpeg_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct s5p_jpeg_ctx*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 struct s5p_jpeg* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_0)
{
 struct s5p_jpeg *VAR_1 = FUNC_8(VAR_0);
 struct s5p_jpeg_ctx *VAR_2 = FUNC_0(VAR_0->private_data);

 FUNC_2(&VAR_1->lock);
 FUNC_7(VAR_2->fh.m2m_ctx);
 FUNC_4(&VAR_2->ctrl_handler);
 FUNC_5(&VAR_2->fh);
 FUNC_6(&VAR_2->fh);
 FUNC_1(VAR_2);
 FUNC_3(&VAR_1->lock);

 return 0;
}
