
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int vin_hstart; int vin_vstart; int vout_hstart; int vout_vstart; scalar_t__ type; scalar_t__ video_type; scalar_t__ video_vsize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 int VAR_8 ;
 int FUNC_10 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (scalar_t__) ;
 scalar_t__ VAR_16 ;
 int FUNC_20 (struct solo_dev*,int ,int) ;

__attribute__((used)) static void FUNC_21(struct solo_dev *VAR_17)
{
 VAR_17->vin_hstart = 8;
 VAR_17->vin_vstart = 2;

 FUNC_20(VAR_17, VAR_2,
         FUNC_0(2) |
         FUNC_8(VAR_3) |
         FUNC_7(VAR_3) |
         FUNC_6(VAR_3) |
         FUNC_5(VAR_3) |
         FUNC_4(VAR_3) |
         FUNC_3(VAR_3) |
         FUNC_2(VAR_3) |
         FUNC_1(VAR_3));

 FUNC_20(VAR_17, VAR_4,
         FUNC_10(VAR_17->vin_hstart) |
         FUNC_18(VAR_17->vin_vstart) |
         FUNC_19(VAR_17->vin_vstart +
          VAR_17->video_vsize));

 FUNC_20(VAR_17, VAR_5,
         FUNC_10(VAR_17->vout_hstart) |
         FUNC_18(VAR_17->vout_vstart) |
         FUNC_19(VAR_17->vout_vstart +
          VAR_17->video_vsize));

 FUNC_20(VAR_17, VAR_6,
         FUNC_10(0) |
         FUNC_18(1) |
         FUNC_19(VAR_1));

 FUNC_20(VAR_17, VAR_7,
         FUNC_9(0) | FUNC_17(0));


 if (VAR_17->type == VAR_0)
  FUNC_20(VAR_17, VAR_8, 0);
 else
  FUNC_20(VAR_17, VAR_8, 16 << 22);

 FUNC_20(VAR_17, VAR_9, 2);

 if (VAR_17->video_type == VAR_16) {
  FUNC_20(VAR_17, VAR_12,
          VAR_15);
  FUNC_20(VAR_17, VAR_14,
          FUNC_11(858) | FUNC_14(246));
  FUNC_20(VAR_17, VAR_11,
          FUNC_15(4) |
          FUNC_16(4 + 240));
 } else {
  FUNC_20(VAR_17, VAR_12,
          VAR_15 | VAR_13);
  FUNC_20(VAR_17, VAR_14,
          FUNC_11(864) | FUNC_14(294));
  FUNC_20(VAR_17, VAR_11,
          FUNC_15(4) |
          FUNC_16(4 + 288));
 }
 FUNC_20(VAR_17, VAR_10, FUNC_12(16) |
         FUNC_13(16 + 720));
}
