
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amvdec_session {scalar_t__ pixfmt_cap; TYPE_1__* fmt_out; struct amvdec_core* core; } ;
struct amvdec_core {int regmap_ao; int vdec_1_clk; } ;
struct amvdec_codec_ops {int (* start ) (struct amvdec_session*) ;} ;
struct TYPE_2__ {int firmware_path; struct amvdec_codec_ops* codec_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (struct amvdec_core*,int ,int ) ;
 int FUNC_2 (struct amvdec_core*,int ,int) ;
 int FUNC_3 (struct amvdec_core*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct amvdec_session*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct amvdec_session*,int ) ;
 int FUNC_11 (struct amvdec_session*) ;
 int FUNC_12 (struct amvdec_session*) ;

__attribute__((used)) static int FUNC_13(struct amvdec_session *VAR_13)
{
 int VAR_14;
 struct amvdec_core *VAR_15 = VAR_13->core;
 struct amvdec_codec_ops *VAR_16 = VAR_13->fmt_out->codec_ops;


 FUNC_5(VAR_15->vdec_1_clk, 666666666);
 VAR_14 = FUNC_4(VAR_15->vdec_1_clk);
 if (VAR_14)
  return VAR_14;


 FUNC_6(VAR_15->regmap_ao, VAR_1,
      VAR_9, 0);
 FUNC_9(10, 20);


 FUNC_2(VAR_15, VAR_6, 0xfffffffc);
 FUNC_2(VAR_15, VAR_6, 0x00000000);

 FUNC_2(VAR_15, VAR_4, 0x3ff);


 FUNC_2(VAR_15, VAR_5, 0);

 FUNC_7(VAR_15->regmap_ao, VAR_0, 0);

 FUNC_2(VAR_15, VAR_7, 0);

 FUNC_2(VAR_15, VAR_8, 0x3ff);
 FUNC_1(VAR_15, VAR_10, FUNC_0(31));

 FUNC_11(VAR_13);

 VAR_14 = FUNC_10(VAR_13, VAR_13->fmt_out->firmware_path);
 if (VAR_14)
  goto stop;

 VAR_14 = VAR_16->start(VAR_13);
 if (VAR_14)
  goto stop;


 FUNC_2(VAR_15, VAR_2, 1);
 FUNC_2(VAR_15, VAR_3, 1);


 if (VAR_13->pixfmt_cap == VAR_12)
  FUNC_3(VAR_15, VAR_10, FUNC_0(17));
 else
  FUNC_1(VAR_15, VAR_10, FUNC_0(17));


 FUNC_2(VAR_15, VAR_11, 1);

 FUNC_9(10, 20);

 return 0;

stop:
 FUNC_12(VAR_13);
 return VAR_14;
}
