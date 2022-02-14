
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amvdec_session {TYPE_1__* fmt_out; } ;
struct amvdec_codec_ops {scalar_t__ recycle; scalar_t__ can_recycle; } ;
struct TYPE_2__ {struct amvdec_codec_ops* codec_ops; } ;



__attribute__((used)) static int FUNC_0(struct amvdec_session *VAR_0)
{
 struct amvdec_codec_ops *VAR_1 = VAR_0->fmt_out->codec_ops;

 return VAR_1->can_recycle && VAR_1->recycle;
}
