
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xsdfec_dev {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct xsdfec_dev*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct xsdfec_dev *VAR_12, u32 VAR_13, u32 VAR_14, u32 VAR_15,
        u32 VAR_16)
{
 u32 VAR_17;

 if (VAR_13 < VAR_10 || VAR_13 > VAR_9 || VAR_15 == 0 ||
     (VAR_13 > VAR_11 * VAR_15) || VAR_13 <= VAR_14 || ((VAR_13 % VAR_15) != 0)) {
  FUNC_0(VAR_12->dev, "N value is not in range");
  return -VAR_0;
 }
 VAR_13 <<= VAR_8;

 if (VAR_14 < VAR_6 || VAR_14 > VAR_5 ||
     (VAR_14 > VAR_7 * VAR_15) || ((VAR_14 % VAR_15) != 0)) {
  FUNC_0(VAR_12->dev, "K value is not in range");
  return -VAR_0;
 }
 VAR_14 = VAR_14 << VAR_4;
 VAR_17 = VAR_14 | VAR_13;

 if (VAR_1 + (VAR_16 * VAR_3) >
     VAR_2) {
  FUNC_0(VAR_12->dev, "Writing outside of LDPC reg0 space 0x%x",
   VAR_1 +
    (VAR_16 * VAR_3));
  return -VAR_0;
 }
 FUNC_1(VAR_12,
   VAR_1 +
    (VAR_16 * VAR_3),
   VAR_17);
 return 0;
}
