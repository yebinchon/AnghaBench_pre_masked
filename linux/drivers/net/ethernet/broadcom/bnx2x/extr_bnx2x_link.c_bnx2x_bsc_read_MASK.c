
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct link_params {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct bnx2x*,scalar_t__) ;
 int FUNC_2 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_3 (struct link_params*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct link_params *VAR_12,
     struct bnx2x *VAR_13,
     u8 VAR_14,
     u16 VAR_15,
     u8 VAR_16,
     u8 VAR_17,
     u32 *VAR_18)
{
 u32 VAR_19, VAR_20;
 int VAR_21 = 0;

 if (VAR_17 > 16) {
  FUNC_0(VAR_11, "invalid xfer_cnt %d. Max is 16 bytes\n",
     VAR_17);
  return -VAR_1;
 }
 FUNC_3(VAR_12);

 VAR_17 = 16 - VAR_16;


 VAR_19 = FUNC_1(VAR_13, VAR_8);
 VAR_19 |= VAR_2;
 FUNC_2(VAR_13, VAR_8, VAR_19);


 VAR_19 = (VAR_14 << 16) | VAR_15;
 FUNC_2(VAR_13, VAR_10, VAR_19);


 VAR_19 = (VAR_2) |
       (VAR_7 <<
  VAR_4) |
  (VAR_16 << VAR_6) | (0);
 FUNC_2(VAR_13, VAR_8, VAR_19);


 VAR_20 = 0;
 VAR_19 = FUNC_1(VAR_13, VAR_8);
 while (((VAR_19 >> VAR_3) & 0x3) != 1) {
  FUNC_4(10);
  VAR_19 = FUNC_1(VAR_13, VAR_8);
  if (VAR_20++ > 1000) {
   FUNC_0(VAR_11, "wr 0 byte timed out after %d try\n",
        VAR_20);
   VAR_21 = -VAR_0;
   break;
  }
 }
 if (VAR_21 == -VAR_0)
  return VAR_21;


 VAR_19 = (VAR_2) |
  (VAR_5 <<
  VAR_4) |
  (VAR_16 << VAR_6) |
    (VAR_17);
 FUNC_2(VAR_13, VAR_8, VAR_19);


 VAR_20 = 0;
 VAR_19 = FUNC_1(VAR_13, VAR_8);
 while (((VAR_19 >> VAR_3) & 0x3) != 1) {
  FUNC_4(10);
  VAR_19 = FUNC_1(VAR_13, VAR_8);
  if (VAR_20++ > 1000) {
   FUNC_0(VAR_11, "rd op timed out after %d try\n", VAR_20);
   VAR_21 = -VAR_0;
   break;
  }
 }
 if (VAR_21 == -VAR_0)
  return VAR_21;

 for (VAR_20 = (VAR_16 >> 2); VAR_20 < 4; VAR_20++) {
  VAR_18[VAR_20] = FUNC_1(VAR_13, (VAR_9 + VAR_20*4));






 }
 return VAR_21;
}
