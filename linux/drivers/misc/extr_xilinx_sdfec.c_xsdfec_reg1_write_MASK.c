
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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct xsdfec_dev*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct xsdfec_dev *VAR_10, u32 VAR_11,
        u32 VAR_12, u32 VAR_13, u32 VAR_14)
{
 u32 VAR_15;

 if (VAR_11 < VAR_9 || VAR_11 > VAR_8) {
  FUNC_0(VAR_10->dev, "Psize is not in range");
  return -VAR_0;
 }

 if (VAR_12 != 0 && VAR_12 != 1)
  FUNC_0(VAR_10->dev, "No-packing bit register invalid");
 VAR_12 = ((VAR_12 << VAR_6) &
        VAR_7);

 if (VAR_13 & ~(VAR_5 >> VAR_4))
  FUNC_0(VAR_10->dev, "NM is beyond 10 bits");
 VAR_13 = (VAR_13 << VAR_4) & VAR_5;

 VAR_15 = VAR_13 | VAR_12 | VAR_11;
 if (VAR_1 + (VAR_14 * VAR_3) >
     VAR_2) {
  FUNC_0(VAR_10->dev, "Writing outside of LDPC reg1 space 0x%x",
   VAR_1 +
    (VAR_14 * VAR_3));
  return -VAR_0;
 }
 FUNC_1(VAR_10,
   VAR_1 +
    (VAR_14 * VAR_3),
   VAR_15);
 return 0;
}
