
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct camif_scaler {int main_h_ratio; int main_v_ratio; scalar_t__ copy; scalar_t__ scaleup_v; scalar_t__ scaleup_h; int enable; } ;
struct camif_vp {int offset; int id; TYPE_1__* out_fmt; struct camif_scaler scaler; struct camif_dev* camif; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct camif_vp*) ;
 int FUNC_2 (struct camif_dev*,int ) ;
 int FUNC_3 (struct camif_dev*,int ,int) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static void FUNC_5(struct camif_vp *VAR_13)
{
 struct camif_dev *VAR_14 = VAR_13->camif;
 struct camif_scaler *VAR_15 = &VAR_13->scaler;
 unsigned int VAR_16 = VAR_13->out_fmt->color;
 u32 VAR_17;

 FUNC_1(VAR_13);

 VAR_17 = FUNC_2(VAR_14, FUNC_0(VAR_13->id, VAR_13->offset));

 VAR_17 &= ~(VAR_0 | VAR_1
  | VAR_11 | VAR_12
  | VAR_10 | VAR_6
  | VAR_3 | VAR_7
  | VAR_4 | VAR_2
  | VAR_5);

 VAR_17 |= (VAR_0 | VAR_1);

 if (!VAR_15->enable) {
  VAR_17 |= VAR_10;
 } else {
  if (VAR_15->scaleup_h)
   VAR_17 |= VAR_11;
  if (VAR_15->scaleup_v)
   VAR_17 |= VAR_12;
  if (VAR_15->copy)
   VAR_17 |= VAR_6;
 }

 switch (VAR_16) {
 case 129:
  VAR_17 |= VAR_8;
  break;
 case 128:
  VAR_17 |= VAR_9;
  break;
 }

 VAR_17 |= (VAR_15->main_h_ratio & 0x1ff) << 16;
 VAR_17 |= VAR_15->main_v_ratio & 0x1ff;

 FUNC_3(VAR_14, FUNC_0(VAR_13->id, VAR_13->offset), VAR_17);

 FUNC_4("main: h_ratio: %#x, v_ratio: %#x",
   VAR_15->main_h_ratio, VAR_15->main_v_ratio);
}
