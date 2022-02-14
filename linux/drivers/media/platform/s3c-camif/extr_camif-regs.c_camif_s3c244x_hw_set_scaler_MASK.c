
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct camif_scaler {int main_h_ratio; int main_v_ratio; scalar_t__ scaleup_v; scalar_t__ scaleup_h; scalar_t__ enable; } ;
struct camif_vp {scalar_t__ id; int offset; TYPE_1__* out_fmt; struct camif_scaler scaler; struct camif_dev* camif; } ;
struct camif_dev {int dummy; } ;
struct TYPE_2__ {unsigned int color; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct camif_vp*) ;
 int FUNC_2 (struct camif_dev*,int ) ;
 int FUNC_3 (struct camif_dev*,int ,int) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static void FUNC_5(struct camif_vp *VAR_12)
{
 struct camif_dev *VAR_13 = VAR_12->camif;
 struct camif_scaler *VAR_14 = &VAR_12->scaler;
 unsigned int VAR_15 = VAR_12->out_fmt->color;
 u32 VAR_16;

 FUNC_1(VAR_12);

 VAR_16 = FUNC_2(VAR_13, FUNC_0(VAR_12->id, VAR_12->offset));

 VAR_16 &= ~(VAR_7 | VAR_5 |
   VAR_4 | VAR_0);

 if (VAR_14->enable) {
  if (VAR_14->scaleup_h) {
   if (VAR_12->id == VAR_10)
    VAR_16 |= VAR_6;
   else
    VAR_16 |= VAR_2;
  }
  if (VAR_14->scaleup_v) {
   if (VAR_12->id == VAR_10)
    VAR_16 |= VAR_8;
   else
    VAR_16 |= VAR_3;
  }
 } else {
  if (VAR_12->id == VAR_10)
   VAR_16 |= VAR_5;
 }

 VAR_16 |= ((VAR_14->main_h_ratio & 0x1ff) << 16);
 VAR_16 |= VAR_14->main_v_ratio & 0x1ff;

 if (VAR_12->id == VAR_11) {
  if (VAR_15 == VAR_9)
   VAR_16 |= VAR_0;
  VAR_16 |= VAR_1;
 }

 FUNC_3(VAR_13, FUNC_0(VAR_12->id, VAR_12->offset), VAR_16);

 FUNC_4("main: h_ratio: %#x, v_ratio: %#x",
   VAR_14->main_h_ratio, VAR_14->main_v_ratio);
}
