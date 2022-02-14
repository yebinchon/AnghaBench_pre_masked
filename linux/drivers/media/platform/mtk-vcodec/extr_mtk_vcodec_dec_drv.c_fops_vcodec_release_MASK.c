
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_vcodec_dev {int dev_mutex; int pm; } ;
struct mtk_vcodec_ctx {struct mtk_vcodec_ctx* empty_flush_buf; int list; int ctrl_hdl; int fh; int m2m_ctx; int id; } ;
struct file {int private_data; } ;


 struct mtk_vcodec_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct mtk_vcodec_ctx*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mtk_vcodec_ctx*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 struct mtk_vcodec_dev* FUNC_13 (struct file*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_0)
{
 struct mtk_vcodec_dev *VAR_1 = FUNC_13(VAR_0);
 struct mtk_vcodec_ctx *VAR_2 = FUNC_0(VAR_0->private_data);

 FUNC_3(0, "[%d] decoder", VAR_2->id);
 FUNC_6(&VAR_1->dev_mutex);







 FUNC_12(VAR_2->m2m_ctx);
 FUNC_5(VAR_2);

 if (FUNC_11(&VAR_2->fh))
  FUNC_4(&VAR_1->pm);
 FUNC_9(&VAR_2->fh);
 FUNC_10(&VAR_2->fh);
 FUNC_8(&VAR_2->ctrl_hdl);

 FUNC_2(&VAR_2->list);
 FUNC_1(VAR_2->empty_flush_buf);
 FUNC_1(VAR_2);
 FUNC_7(&VAR_1->dev_mutex);
 return 0;
}
