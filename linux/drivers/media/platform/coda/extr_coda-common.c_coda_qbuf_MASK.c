
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_buffer {scalar_t__ type; int flags; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct coda_ctx {scalar_t__ inst_type; TYPE_1__ fh; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct coda_ctx* FUNC_0 (void*) ;
 int FUNC_1 (struct file*,int ,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
       struct v4l2_buffer *VAR_5)
{
 struct coda_ctx *VAR_6 = FUNC_0(VAR_4);

 if (VAR_6->inst_type == VAR_0 &&
     VAR_5->type == VAR_2)
  VAR_5->flags &= ~VAR_1;

 return FUNC_1(VAR_3, VAR_6->fh.m2m_ctx, VAR_5);
}
