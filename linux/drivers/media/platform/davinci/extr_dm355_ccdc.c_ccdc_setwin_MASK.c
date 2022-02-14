
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
 TYPE_1__ VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct v4l2_rect *VAR_12,
   enum ccdc_frmfmt VAR_13, int VAR_14)
{
 int VAR_15, VAR_16;
 int VAR_17, VAR_18;
 int VAR_19 = 0;

 FUNC_0(VAR_11.dev, "\nStarting ccdc_setwin...");






 VAR_15 = VAR_12->left << (VAR_14 - 1);
 VAR_16 = ((VAR_12->width) << (VAR_14 - 1)) - 1;


 FUNC_1(VAR_15, VAR_8);
 FUNC_1(VAR_16, VAR_5);
 VAR_17 = VAR_12->top;

 if (VAR_13 == VAR_0) {
  VAR_18 = (VAR_12->height >> 1) - 1;
  VAR_17 >>= 1;

  VAR_17 += 1;

  FUNC_1(VAR_17, VAR_9);
 } else {

  VAR_17 += 1;
  VAR_18 = VAR_12->height - 1;

  VAR_19 = VAR_17 + (VAR_12->height / 2);
  FUNC_1(VAR_17, VAR_9);
  FUNC_1(VAR_19, VAR_10);
 }
 FUNC_1(VAR_17 & VAR_2, VAR_6);
 FUNC_1(VAR_17 & VAR_3, VAR_7);
 FUNC_1(VAR_18 & VAR_1, VAR_4);
 FUNC_0(VAR_11.dev, "\nEnd of ccdc_setwin...");
}
