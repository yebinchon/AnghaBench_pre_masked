
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_8__ {int pixelformat; } ;
struct TYPE_7__ {TYPE_4__ pix_mp; } ;
struct v4l2_format {TYPE_3__ fmt; int type; } ;
struct fimc_frame {int dummy; } ;
struct fimc_fmt {int dummy; } ;
struct TYPE_6__ {int vfd; } ;
struct fimc_dev {TYPE_2__ m2m; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct fimc_ctx {struct fimc_frame d_frame; struct fimc_frame s_frame; TYPE_1__ fh; struct fimc_dev* fimc_dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fimc_frame*,struct fimc_fmt*,TYPE_4__*) ;
 struct fimc_ctx* FUNC_1 (void*) ;
 int FUNC_2 (struct fimc_ctx*) ;
 struct fimc_fmt* FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (struct fimc_ctx*,struct v4l2_format*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int ) ;
 struct vb2_queue* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_3, void *VAR_4,
     struct v4l2_format *VAR_5)
{
 struct fimc_ctx *VAR_6 = FUNC_1(VAR_4);
 struct fimc_dev *VAR_7 = VAR_6->fimc_dev;
 struct fimc_fmt *VAR_8;
 struct vb2_queue *VAR_9;
 struct fimc_frame *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_6, VAR_5);
 if (VAR_11)
  return VAR_11;

 VAR_9 = FUNC_7(VAR_6->fh.m2m_ctx, VAR_5->type);

 if (FUNC_8(VAR_9)) {
  FUNC_6(&VAR_7->m2m.vfd, "queue (%d) busy\n", VAR_5->type);
  return -VAR_0;
 }

 if (VAR_5->type == VAR_2)
  VAR_10 = &VAR_6->s_frame;
 else
  VAR_10 = &VAR_6->d_frame;

 VAR_8 = FUNC_3(&VAR_5->fmt.pix_mp.pixelformat, ((void*)0),
          FUNC_5(VAR_5->type), 0);
 if (!VAR_8)
  return -VAR_1;

 FUNC_0(VAR_10, VAR_8, &VAR_5->fmt.pix_mp);


 FUNC_2(VAR_6);

 return 0;
}
