
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_device {int lock; } ;
struct TYPE_4__ {int compressed_frame; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct vicodec_ctx {TYPE_1__ state; int hdl; TYPE_2__ fh; } ;
struct file {int dummy; } ;


 struct vicodec_ctx* FUNC_0 (struct file*) ;
 int FUNC_1 (struct vicodec_ctx*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 struct video_device* FUNC_9 (struct file*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_0)
{
 struct video_device *VAR_1 = FUNC_9(VAR_0);
 struct vicodec_ctx *VAR_2 = FUNC_0(VAR_0);

 FUNC_3(VAR_1->lock);
 FUNC_8(VAR_2->fh.m2m_ctx);
 FUNC_4(VAR_1->lock);
 FUNC_6(&VAR_2->fh);
 FUNC_7(&VAR_2->fh);
 FUNC_5(&VAR_2->hdl);
 FUNC_2(VAR_2->state.compressed_frame);
 FUNC_1(VAR_2);

 return 0;
}
