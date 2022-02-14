
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amvdec_session {TYPE_2__* fmt_out; } ;
struct amvdec_core {struct amvdec_session* cur_sess; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* codec_ops; } ;
struct TYPE_3__ {int (* threaded_isr ) (struct amvdec_session*) ;} ;


 int FUNC_0 (struct amvdec_session*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_0, void *VAR_1)
{
 struct amvdec_core *VAR_2 = VAR_1;
 struct amvdec_session *VAR_3 = VAR_2->cur_sess;

 return VAR_3->fmt_out->codec_ops->threaded_isr(VAR_3);
}
