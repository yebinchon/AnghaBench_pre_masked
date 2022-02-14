
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ingenic_ecc_params {int bytes; int size; } ;
struct ingenic_ecc {int lock; scalar_t__ base; int dev; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ingenic_ecc*) ;
 int FUNC_3 (struct ingenic_ecc*,struct ingenic_ecc_params*,int) ;
 int FUNC_4 (struct ingenic_ecc*,int ,int*) ;
 int FUNC_5 (struct ingenic_ecc*,int*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct ingenic_ecc *VAR_14,
     struct ingenic_ecc_params *VAR_15,
     u8 *VAR_16, u8 *VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22, VAR_23;

 FUNC_6(&VAR_14->lock);

 FUNC_3(VAR_14, VAR_15, 0);
 FUNC_5(VAR_14, VAR_16, VAR_15->size);
 FUNC_5(VAR_14, VAR_17, VAR_15->bytes);

 if (!FUNC_4(VAR_14, VAR_5, &VAR_18)) {
  FUNC_0(VAR_14->dev, "timed out while correcting data\n");
  VAR_22 = -VAR_13;
  goto out;
 }

 if (VAR_18 & VAR_11) {
  FUNC_1(VAR_14->dev, "uncorrectable ECC error\n");
  VAR_22 = -VAR_12;
  goto out;
 }


 if (VAR_18 & VAR_6) {
  VAR_23 = (VAR_18 & VAR_7) >> VAR_8;
  VAR_22 = (VAR_18 & VAR_9) >> VAR_10;

  for (VAR_21 = 0; VAR_21 < VAR_23; VAR_21++) {
   VAR_18 = FUNC_8(VAR_14->base + VAR_0 + (VAR_21 * 4));
   VAR_19 = (VAR_18 & VAR_3) >>
      VAR_4;
   VAR_20 = (VAR_18 & VAR_1) >>
      VAR_2;
   VAR_16[(VAR_20 * 2) + 0] ^= VAR_19;
   VAR_16[(VAR_20 * 2) + 1] ^= VAR_19 >> 8;
  }
 } else {
  VAR_22 = 0;
 }

out:
 FUNC_2(VAR_14);
 FUNC_7(&VAR_14->lock);
 return VAR_22;
}
