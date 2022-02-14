
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct amvdec_session {scalar_t__ vififo_size; struct amvdec_core* core; TYPE_1__* fmt_out; } ;
struct amvdec_ops {scalar_t__ (* vififo_level ) (struct amvdec_session*) ;} ;
struct amvdec_core {int dev; } ;
struct TYPE_2__ {struct amvdec_ops* vdec_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct amvdec_core*,int ) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct amvdec_session*) ;

__attribute__((used)) static u32 FUNC_3(struct amvdec_session *VAR_2)
{
 u32 VAR_3;
 struct amvdec_ops *VAR_4 = VAR_2->fmt_out->vdec_ops;
 struct amvdec_core *VAR_5 = VAR_2->core;

 VAR_3 = VAR_4->vififo_level(VAR_2);
 VAR_3 += FUNC_0(VAR_5, VAR_0);
 VAR_3 += (6 * VAR_1);

 if (VAR_3 > VAR_2->vififo_size) {
  FUNC_1(VAR_2->core->dev,
    "VIFIFO usage (%u) > VIFIFO size (%u)\n",
    VAR_3, VAR_2->vififo_size);
  return 0;
 }

 return VAR_2->vififo_size - VAR_3;
}
