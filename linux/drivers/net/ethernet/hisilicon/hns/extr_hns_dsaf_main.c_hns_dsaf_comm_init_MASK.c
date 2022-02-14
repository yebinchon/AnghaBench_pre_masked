
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dsaf_device {int dsaf_tc_mode; int dsaf_en; int dsaf_ver; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct dsaf_device*,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (struct dsaf_device*,int ,scalar_t__) ;
 int FUNC_4 (struct dsaf_device*) ;
 int FUNC_5 (struct dsaf_device*,scalar_t__,int) ;
 int FUNC_6 (struct dsaf_device*,scalar_t__,int) ;
 int FUNC_7 (struct dsaf_device*,scalar_t__,int) ;
 int FUNC_8 (struct dsaf_device*,scalar_t__,int) ;
 int FUNC_9 (struct dsaf_device*,int) ;
 int FUNC_10 (struct dsaf_device*,int) ;
 int FUNC_11 (struct dsaf_device*,scalar_t__,int) ;
 int FUNC_12 (struct dsaf_device*,scalar_t__,int) ;
 int FUNC_13 (struct dsaf_device*) ;
 int FUNC_14 (struct dsaf_device*,scalar_t__,int ) ;
 int FUNC_15 (struct dsaf_device*,int ) ;
 int FUNC_16 (struct dsaf_device*,int) ;
 int FUNC_17 (struct dsaf_device*,scalar_t__,int,int) ;
 int FUNC_18 (struct dsaf_device*,int ) ;
 int FUNC_19 (struct dsaf_device*,int ) ;

__attribute__((used)) static void FUNC_20(struct dsaf_device *VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 bool VAR_13 = FUNC_0(VAR_10->dsaf_ver);

 VAR_12 = FUNC_1(VAR_10, VAR_0);
 FUNC_2(VAR_12, VAR_2, VAR_10->dsaf_en);
 FUNC_2(VAR_12, VAR_5, VAR_10->dsaf_tc_mode);
 FUNC_2(VAR_12, VAR_1, 0);
 FUNC_2(VAR_12, VAR_4, 0);
 FUNC_2(VAR_12, VAR_3, 0);
 FUNC_3(VAR_10, VAR_0, VAR_12);

 FUNC_16(VAR_10, 1);
 FUNC_18(VAR_10, VAR_8);


 FUNC_15(VAR_10, VAR_7);


 FUNC_13(VAR_10);


 FUNC_4(VAR_10);


 FUNC_19(VAR_10, VAR_9);


 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  FUNC_14(VAR_10, VAR_11, 0);
  FUNC_17(VAR_10, VAR_11, VAR_13, VAR_13);
 }


 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  FUNC_12(VAR_10, VAR_11, 0xfffffffful);
  FUNC_6(VAR_10, VAR_11, 0xfffffffful);
  FUNC_8(VAR_10, VAR_11, 0xfffffffful);

  FUNC_11(VAR_10, VAR_11, 0xfffffffful);
  FUNC_5(VAR_10, VAR_11, 0xfffffffful);
  FUNC_7(VAR_10, VAR_11, 0xfffffffful);
 }
 FUNC_10(VAR_10, 0xfffffffful);
 FUNC_9(VAR_10, 0xfffffffful);
}
