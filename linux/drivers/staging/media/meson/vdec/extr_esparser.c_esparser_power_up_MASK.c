
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amvdec_session {int vififo_paddr; int vififo_size; TYPE_1__* fmt_out; struct amvdec_core* core; } ;
struct amvdec_ops {int (* conf_esparser ) (struct amvdec_session*) ;} ;
struct amvdec_core {int esparser_reset; } ;
struct TYPE_2__ {struct amvdec_ops* vdec_ops; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct amvdec_core*,int ) ;
 int FUNC_2 (struct amvdec_core*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct amvdec_session*) ;

int FUNC_5(struct amvdec_session *VAR_20)
{
 struct amvdec_core *VAR_21 = VAR_20->core;
 struct amvdec_ops *VAR_22 = VAR_20->fmt_out->vdec_ops;

 FUNC_3(VAR_21->esparser_reset);
 FUNC_2(VAR_21, VAR_4,
       (10 << VAR_18) |
       (1 << VAR_16) |
       (16 << VAR_17));

 FUNC_2(VAR_21, VAR_14, 0);
 FUNC_2(VAR_21, VAR_15, 0);

 FUNC_2(VAR_21, VAR_11,
       VAR_3);
 FUNC_2(VAR_21, VAR_10, VAR_2);

 FUNC_2(VAR_21, VAR_4,
       (10 << VAR_18) |
       (1 << VAR_16) |
       (16 << VAR_17) |
       (2 << VAR_19));

 FUNC_2(VAR_21, VAR_5,
       (VAR_1 | VAR_0));

 FUNC_2(VAR_21, VAR_13, VAR_20->vififo_paddr);
 FUNC_2(VAR_21, VAR_12,
       VAR_20->vififo_paddr + VAR_20->vififo_size - 8);
 FUNC_2(VAR_21, VAR_6,
       FUNC_1(VAR_21, VAR_6) & ~1);

 if (VAR_22->conf_esparser)
  VAR_22->conf_esparser(VAR_20);

 FUNC_2(VAR_21, VAR_9, 0xffff);
 FUNC_2(VAR_21, VAR_7,
       FUNC_0(VAR_8));

 return 0;
}
