
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct xsdfec_dev {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct xsdfec_dev*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct xsdfec_dev *VAR_6, u8 VAR_7, u8 VAR_8,
        u16 VAR_9, u32 VAR_10)
{
 u32 VAR_11;

 VAR_11 = ((VAR_9 << VAR_5) |
   (VAR_8 << VAR_4) | VAR_7);
 if (VAR_1 + (VAR_10 * VAR_3) >
     VAR_2) {
  FUNC_0(VAR_6->dev, "Writing outside of LDPC reg3 space 0x%x",
   VAR_1 +
    (VAR_10 * VAR_3));
  return -VAR_0;
 }
 FUNC_1(VAR_6,
   VAR_1 +
    (VAR_10 * VAR_3),
   VAR_11);
 return 0;
}
