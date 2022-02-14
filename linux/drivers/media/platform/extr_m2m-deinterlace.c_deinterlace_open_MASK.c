
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct file {TYPE_1__* private_data; } ;
struct dma_interleaved_template {int dummy; } ;
struct deinterlace_dev {int m2m_dev; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct deinterlace_ctx {TYPE_1__ fh; int colorspace; void* xt; struct deinterlace_dev* dev; } ;
struct data_chunk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct deinterlace_dev*,char*,struct deinterlace_ctx*,int ) ;
 int FUNC_3 (struct deinterlace_ctx*) ;
 void* FUNC_4 (int,int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int ,struct deinterlace_ctx*,int *) ;
 int FUNC_8 (struct file*) ;
 struct deinterlace_dev* FUNC_9 (struct file*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_4)
{
 struct deinterlace_dev *VAR_5 = FUNC_9(VAR_4);
 struct deinterlace_ctx *VAR_6 = ((void*)0);

 VAR_6 = FUNC_4(sizeof *VAR_6, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_6(&VAR_6->fh, FUNC_8(VAR_4));
 VAR_4->private_data = &VAR_6->fh;
 VAR_6->dev = VAR_5;

 VAR_6->fh.m2m_ctx = FUNC_7(VAR_5->m2m_dev, VAR_6, &VAR_3);
 if (FUNC_0(VAR_6->fh.m2m_ctx)) {
  int VAR_7 = FUNC_1(VAR_6->fh.m2m_ctx);

  FUNC_3(VAR_6);
  return VAR_7;
 }

 VAR_6->xt = FUNC_4(sizeof(struct dma_interleaved_template) +
    sizeof(struct data_chunk), VAR_1);
 if (!VAR_6->xt) {
  FUNC_3(VAR_6);
  return -VAR_0;
 }

 VAR_6->colorspace = VAR_2;
 FUNC_5(&VAR_6->fh);

 FUNC_2(VAR_5, "Created instance %p, m2m_ctx: %p\n",
  VAR_6, VAR_6->fh.m2m_ctx);

 return 0;
}
