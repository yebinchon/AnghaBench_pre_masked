
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct mtk_jpeg_dev {int lock; int m2m_dev; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct mtk_jpeg_ctx {TYPE_1__ fh; struct mtk_jpeg_dev* jpeg; } ;
struct file {TYPE_1__* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mtk_jpeg_ctx*) ;
 struct mtk_jpeg_ctx* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct mtk_jpeg_ctx*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,struct video_device*) ;
 int FUNC_11 (int ,struct mtk_jpeg_ctx*,int ) ;
 struct video_device* FUNC_12 (struct file*) ;
 struct mtk_jpeg_dev* FUNC_13 (struct file*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_4)
{
 struct mtk_jpeg_dev *VAR_5 = FUNC_13(VAR_4);
 struct video_device *VAR_6 = FUNC_12(VAR_4);
 struct mtk_jpeg_ctx *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 if (FUNC_5(&VAR_5->lock)) {
  VAR_8 = -VAR_1;
  goto free;
 }

 FUNC_10(&VAR_7->fh, VAR_6);
 VAR_4->private_data = &VAR_7->fh;
 FUNC_7(&VAR_7->fh);

 VAR_7->jpeg = VAR_5;
 VAR_7->fh.m2m_ctx = FUNC_11(VAR_5->m2m_dev, VAR_7,
         VAR_3);
 if (FUNC_0(VAR_7->fh.m2m_ctx)) {
  VAR_8 = FUNC_1(VAR_7->fh.m2m_ctx);
  goto error;
 }

 FUNC_4(VAR_7);
 FUNC_6(&VAR_5->lock);
 return 0;

error:
 FUNC_8(&VAR_7->fh);
 FUNC_9(&VAR_7->fh);
 FUNC_6(&VAR_5->lock);
free:
 FUNC_2(VAR_7);
 return VAR_8;
}
