
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amvdec_session {int should_stop; TYPE_1__* core; TYPE_2__* fmt_out; } ;
struct amvdec_ops {int (* stop ) (struct amvdec_session*) ;} ;
struct amvdec_codec_ops {int (* drain ) (struct amvdec_session*) ;} ;
struct TYPE_4__ {struct amvdec_codec_ops* codec_ops; struct amvdec_ops* vdec_ops; } ;
struct TYPE_3__ {int dos_parser_clk; int dos_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct amvdec_session*) ;
 int FUNC_2 (struct amvdec_session*) ;
 int FUNC_3 (struct amvdec_session*) ;

__attribute__((used)) static void FUNC_4(struct amvdec_session *VAR_0)
{
 struct amvdec_ops *VAR_1 = VAR_0->fmt_out->vdec_ops;
 struct amvdec_codec_ops *VAR_2 = VAR_0->fmt_out->codec_ops;

 VAR_0->should_stop = 1;
 FUNC_3(VAR_0);
 if (VAR_2->drain)
  VAR_2->drain(VAR_0);

 VAR_1->stop(VAR_0);
 FUNC_0(VAR_0->core->dos_clk);
 FUNC_0(VAR_0->core->dos_parser_clk);
}
