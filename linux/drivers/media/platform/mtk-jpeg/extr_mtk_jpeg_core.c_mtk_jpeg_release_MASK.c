
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_jpeg_dev {int lock; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct mtk_jpeg_ctx {TYPE_1__ fh; } ;
struct file {int private_data; } ;


 int FUNC_0 (struct mtk_jpeg_ctx*) ;
 struct mtk_jpeg_ctx* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 struct mtk_jpeg_dev* FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_0)
{
 struct mtk_jpeg_dev *VAR_1 = FUNC_7(VAR_0);
 struct mtk_jpeg_ctx *VAR_2 = FUNC_1(VAR_0->private_data);

 FUNC_2(&VAR_1->lock);
 FUNC_6(VAR_2->fh.m2m_ctx);
 FUNC_4(&VAR_2->fh);
 FUNC_5(&VAR_2->fh);
 FUNC_0(VAR_2);
 FUNC_3(&VAR_1->lock);
 return 0;
}
