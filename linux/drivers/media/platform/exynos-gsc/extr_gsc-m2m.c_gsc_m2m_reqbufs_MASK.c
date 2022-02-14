
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_requestbuffers {scalar_t__ type; scalar_t__ count; } ;
struct gsc_dev {TYPE_1__* variant; } ;
struct gsc_ctx {int m2m_ctx; struct gsc_dev* gsc_dev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ in_buf_cnt; scalar_t__ out_buf_cnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct gsc_ctx* FUNC_0 (void*) ;
 int FUNC_1 (struct file*,int ,struct v4l2_requestbuffers*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
     struct v4l2_requestbuffers *VAR_4)
{
 struct gsc_ctx *VAR_5 = FUNC_0(VAR_3);
 struct gsc_dev *VAR_6 = VAR_5->gsc_dev;
 u32 VAR_7;

 VAR_7 = (VAR_4->type == VAR_1) ?
  VAR_6->variant->in_buf_cnt : VAR_6->variant->out_buf_cnt;
 if (VAR_4->count > VAR_7)
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_5->m2m_ctx, VAR_4);
}
