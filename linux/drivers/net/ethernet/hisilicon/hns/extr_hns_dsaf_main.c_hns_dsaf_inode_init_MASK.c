
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsaf_device {scalar_t__ dsaf_tc_mode; int dsaf_ver; } ;


 scalar_t__ FUNC_0 (int ) ;
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
 scalar_t__ VAR_19 ;
 int FUNC_1 (struct dsaf_device*,int,int ,int ,int) ;
 int FUNC_2 (struct dsaf_device*,int,int) ;

__attribute__((used)) static void FUNC_3(struct dsaf_device *VAR_20)
{
 u32 VAR_21;
 u32 VAR_22;
 u32 VAR_23;

 if (VAR_20->dsaf_tc_mode == VAR_19)
  VAR_22 = VAR_17;
 else
  VAR_22 = VAR_18;

 if (FUNC_0(VAR_20->dsaf_ver)) {
  for (VAR_23 = 0; VAR_23 < VAR_13; VAR_23++) {
   VAR_21 = VAR_10 + 0x80 * VAR_23;
   FUNC_1(VAR_20, VAR_21,
        VAR_11,
        VAR_12,
        VAR_23 % VAR_16);
  }
 } else {
  for (VAR_23 = 0; VAR_23 < VAR_15; VAR_23++) {
   VAR_21 = VAR_10 + 0x80 * VAR_23;
   FUNC_1(VAR_20, VAR_21,
        VAR_11,
        VAR_12, 0);
   FUNC_1(VAR_20, VAR_21,
        VAR_0,
        VAR_1, 1);
   FUNC_1(VAR_20, VAR_21,
        VAR_2,
        VAR_3, 2);
   FUNC_1(VAR_20, VAR_21,
        VAR_4,
        VAR_5, 3);
   FUNC_1(VAR_20, VAR_21,
        VAR_6,
        VAR_7, 4);
   FUNC_1(VAR_20, VAR_21,
        VAR_8,
        VAR_9, 5);
  }
 }
 for (VAR_23 = 0; VAR_23 < VAR_13; VAR_23++) {
  VAR_21 = VAR_14 + 0x80 * VAR_23;
  FUNC_2(VAR_20, VAR_21, VAR_22);
 }
}
