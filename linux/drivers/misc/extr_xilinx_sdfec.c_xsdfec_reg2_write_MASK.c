
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct xsdfec_dev*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct xsdfec_dev *VAR_16, u32 VAR_17, u32 VAR_18,
        u32 VAR_19, u32 VAR_20, u32 VAR_21,
        u32 VAR_22, u32 VAR_23)
{
 u32 VAR_24;

 if (VAR_17 < VAR_7 ||
     VAR_17 > VAR_6) {
  FUNC_0(VAR_16->dev, "Nlayers is not in range");
  return -VAR_0;
 }

 if (VAR_18 & ~(VAR_9 >> VAR_8))
  FUNC_0(VAR_16->dev, "NMQC exceeds 11 bits");
 VAR_18 = (VAR_18 << VAR_8) & VAR_9;

 if (VAR_19 > 1)
  FUNC_0(VAR_16->dev, "Norm type is invalid");
 VAR_19 = ((VAR_19 << VAR_10) &
       VAR_11);
 if (VAR_20 > 1)
  FUNC_0(VAR_16->dev, "Special QC in invalid");
 VAR_20 = ((VAR_20 << VAR_15) &
        VAR_14);

 if (VAR_21 > 1)
  FUNC_0(VAR_16->dev, "No final parity check invalid");
 VAR_21 =
  ((VAR_21 << VAR_12) &
   VAR_13);
 if (VAR_22 &
     ~(VAR_5 >> VAR_4))
  FUNC_0(VAR_16->dev, "Max Schedule exceeds 2 bits");
 VAR_22 = ((VAR_22 << VAR_4) &
   VAR_5);

 VAR_24 = (VAR_22 | VAR_21 | VAR_20 | VAR_19 |
   VAR_18 | VAR_17);

 if (VAR_1 + (VAR_23 * VAR_3) >
     VAR_2) {
  FUNC_0(VAR_16->dev, "Writing outside of LDPC reg2 space 0x%x",
   VAR_1 +
    (VAR_23 * VAR_3));
  return -VAR_0;
 }
 FUNC_1(VAR_16,
   VAR_1 +
    (VAR_23 * VAR_3),
   VAR_24);
 return 0;
}
