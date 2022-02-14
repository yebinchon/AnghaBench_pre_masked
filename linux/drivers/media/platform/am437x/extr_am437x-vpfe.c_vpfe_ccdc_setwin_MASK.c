
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_ccdc {int dummy; } ;
struct v4l2_rect {int left; int width; int top; int height; } ;
typedef enum ccdc_frmfmt { ____Placeholder_ccdc_frmfmt } ccdc_frmfmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct vpfe_ccdc*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct vpfe_ccdc *VAR_9,
        struct v4l2_rect *VAR_10,
        enum ccdc_frmfmt VAR_11,
        int VAR_12)
{
 int VAR_13, VAR_14;
 int VAR_15, VAR_16;
 int VAR_17, VAR_18;






 VAR_13 = VAR_10->left * VAR_12;
 VAR_14 = (VAR_10->width * VAR_12) - 1;
 FUNC_0(VAR_9, (VAR_13 << VAR_2) |
    VAR_14, VAR_1);

 VAR_15 = VAR_10->top;

 if (VAR_11 == VAR_0) {
  VAR_16 = (VAR_10->height >> 1) - 1;
  VAR_15 >>= 1;

  VAR_15 += 1;

  VAR_17 = (VAR_15 << VAR_4);
 } else {

  VAR_15 += 1;
  VAR_16 = VAR_10->height - 1;




  VAR_18 = VAR_15 + (VAR_10->height / 2);
  VAR_17 = (VAR_15 << VAR_4) |
    (VAR_18 & VAR_5);
 }

 FUNC_0(VAR_9, VAR_17, VAR_3);

 FUNC_0(VAR_9, (VAR_15 << VAR_8) |
    VAR_15, VAR_7);
 FUNC_0(VAR_9, VAR_16, VAR_6);
}
