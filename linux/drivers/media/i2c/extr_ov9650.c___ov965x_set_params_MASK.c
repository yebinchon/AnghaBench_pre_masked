
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ov965x_ctrls {TYPE_2__* light_freq; } ;
struct ov965x {scalar_t__ tslb_reg; TYPE_1__* fiv; scalar_t__ apply_frame_fmt; struct ov965x_ctrls ctrls; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {scalar_t__ clkrc_div; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct ov965x*,int ,scalar_t__*) ;
 int FUNC_1 (struct ov965x*,int ) ;
 int FUNC_2 (struct ov965x*) ;
 int FUNC_3 (struct ov965x*) ;
 int FUNC_4 (struct ov965x*) ;
 int FUNC_5 (struct ov965x*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct ov965x *VAR_6)
{
 struct ov965x_ctrls *VAR_7 = &VAR_6->ctrls;
 int VAR_8 = 0;
 u8 VAR_9;

 if (VAR_6->apply_frame_fmt) {
  VAR_9 = VAR_1 + VAR_6->fiv->clkrc_div;
  VAR_8 = FUNC_5(VAR_6, VAR_2, VAR_9);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_8 = FUNC_4(VAR_6);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_8 = FUNC_0(VAR_6, VAR_4, &VAR_9);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_9 &= ~VAR_5;
  VAR_9 |= VAR_6->tslb_reg;
  VAR_8 = FUNC_5(VAR_6, VAR_4, VAR_9);
  if (VAR_8 < 0)
   return VAR_8;
 }
 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;




 VAR_8 = FUNC_0(VAR_6, VAR_3, &VAR_9);
 if (!VAR_8)
  VAR_9 |= VAR_0;
 VAR_8 = FUNC_5(VAR_6, VAR_3, VAR_9);
 if (VAR_8 < 0)
  return VAR_8;




 return FUNC_1(VAR_6, VAR_7->light_freq->val);
}
