
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amvdec_session {scalar_t__ priv; TYPE_1__* fmt_out; struct amvdec_core* core; } ;
struct amvdec_core {int vdec_1_clk; int regmap_ao; } ;
struct amvdec_codec_ops {int (* stop ) (struct amvdec_session*) ;} ;
struct TYPE_2__ {struct amvdec_codec_ops* codec_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct amvdec_core*,int ) ;
 int FUNC_2 (struct amvdec_core*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct amvdec_session*) ;

__attribute__((used)) static int FUNC_7(struct amvdec_session *VAR_8)
{
 struct amvdec_core *VAR_9 = VAR_8->core;
 struct amvdec_codec_ops *VAR_10 = VAR_8->fmt_out->codec_ops;

 FUNC_2(VAR_9, VAR_7, 0);
 FUNC_2(VAR_9, VAR_3, 0);
 FUNC_2(VAR_9, VAR_2, 0);

 FUNC_2(VAR_9, VAR_5, FUNC_0(12) | FUNC_0(11));
 FUNC_2(VAR_9, VAR_5, 0);
 FUNC_1(VAR_9, VAR_5);


 FUNC_5(VAR_9->regmap_ao, VAR_0, 0xc0);

 FUNC_2(VAR_9, VAR_4, 0xffffffff);

 FUNC_4(VAR_9->regmap_ao, VAR_1,
      VAR_6, VAR_6);

 FUNC_3(VAR_9->vdec_1_clk);

 if (VAR_8->priv)
  VAR_10->stop(VAR_8);

 return 0;
}
