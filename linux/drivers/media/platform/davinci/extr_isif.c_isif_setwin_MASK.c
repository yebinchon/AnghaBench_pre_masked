
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int left; int width; int top; int height; } ;
typedef enum ccdc_frmfmt { ____Placeholder_ccdc_frmfmt } ccdc_frmfmt ;
struct TYPE_2__ {int dev; } ;


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
 int FUNC_0 (int ,char*) ;
 TYPE_1__ VAR_13 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct v4l2_rect *VAR_14,
   enum ccdc_frmfmt VAR_15, int VAR_16)
{
 int VAR_17, VAR_18;
 int VAR_19, VAR_20;
 int VAR_21 = 0;

 FUNC_0(VAR_13.dev, "\nStarting isif_setwin...");





 VAR_17 = VAR_14->left << (VAR_16 - 1);
 VAR_18 = ((VAR_14->width) << (VAR_16 - 1)) - 1;


 FUNC_1(VAR_17 & VAR_8, VAR_7);
 FUNC_1(VAR_18 & VAR_4, VAR_1);
 VAR_19 = VAR_14->top;

 if (VAR_15 == VAR_0) {
  VAR_20 = (VAR_14->height >> 1) - 1;
  VAR_19 >>= 1;

  VAR_19 += 1;
 } else {

  VAR_19 += 1;
  VAR_20 = VAR_14->height - 1;

  VAR_21 = VAR_19 + (VAR_14->height / 2);
  FUNC_1(VAR_21, VAR_12);
 }

 FUNC_1(0, VAR_11);
 FUNC_1(VAR_19 & VAR_9, VAR_5);
 FUNC_1(VAR_19 & VAR_10, VAR_6);
 FUNC_1(VAR_20 & VAR_3, VAR_2);
}
