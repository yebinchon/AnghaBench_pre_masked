
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_dev {int v4l2_dev; } ;
struct g2d_ctx {int fh; int ctrl_handler; } ;
struct file {int private_data; } ;


 struct g2d_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct g2d_ctx*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 struct g2d_dev* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_0)
{
 struct g2d_dev *VAR_1 = FUNC_6(VAR_0);
 struct g2d_ctx *VAR_2 = FUNC_0(VAR_0->private_data);

 FUNC_2(&VAR_2->ctrl_handler);
 FUNC_3(&VAR_2->fh);
 FUNC_4(&VAR_2->fh);
 FUNC_1(VAR_2);
 FUNC_5(&VAR_1->v4l2_dev, "instance closed\n");
 return 0;
}
