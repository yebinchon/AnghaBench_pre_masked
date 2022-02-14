
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_requestbuffers {scalar_t__ type; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct coda_ctx {TYPE_2__* ops; TYPE_1__ fh; } ;
struct TYPE_4__ {int (* reqbufs ) (struct coda_ctx*,struct v4l2_requestbuffers*) ;} ;


 scalar_t__ VAR_0 ;
 struct coda_ctx* FUNC_0 (void*) ;
 int FUNC_1 (struct coda_ctx*,struct v4l2_requestbuffers*) ;
 int FUNC_2 (struct file*,int ,struct v4l2_requestbuffers*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
   struct v4l2_requestbuffers *VAR_3)
{
 struct coda_ctx *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_4->fh.m2m_ctx, VAR_3);
 if (VAR_5)
  return VAR_5;





 if (VAR_3->type == VAR_0 && VAR_4->ops->reqbufs)
  return VAR_4->ops->reqbufs(VAR_4, VAR_3);

 return 0;
}
