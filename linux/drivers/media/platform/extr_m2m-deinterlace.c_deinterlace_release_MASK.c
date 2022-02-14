
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct file {struct deinterlace_ctx* private_data; } ;
struct deinterlace_dev {int dummy; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct deinterlace_ctx {struct deinterlace_ctx* xt; TYPE_1__ fh; } ;


 int FUNC_0 (struct deinterlace_dev*,char*,struct deinterlace_ctx*) ;
 int FUNC_1 (struct deinterlace_ctx*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 struct deinterlace_dev* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_0)
{
 struct deinterlace_dev *VAR_1 = FUNC_5(VAR_0);
 struct deinterlace_ctx *VAR_2 = VAR_0->private_data;

 FUNC_0(VAR_1, "Releasing instance %p\n", VAR_2);

 FUNC_2(&VAR_2->fh);
 FUNC_3(&VAR_2->fh);
 FUNC_4(VAR_2->fh.m2m_ctx);
 FUNC_1(VAR_2->xt);
 FUNC_1(VAR_2);

 return 0;
}
