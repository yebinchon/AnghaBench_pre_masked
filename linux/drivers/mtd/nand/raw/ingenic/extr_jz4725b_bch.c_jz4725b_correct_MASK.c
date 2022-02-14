
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
 int FUNC_0 (int) ;
 int VAR_11 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ingenic_ecc*) ;
 int FUNC_3 (struct ingenic_ecc*,struct ingenic_ecc_params*,int) ;
 int FUNC_4 (struct ingenic_ecc*,int ,int*) ;
 int FUNC_5 (struct ingenic_ecc*,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct ingenic_ecc *VAR_12,
      struct ingenic_ecc_params *VAR_13,
      u8 *VAR_14, u8 *VAR_15)
{
 u32 VAR_16, VAR_17, VAR_18;
 unsigned int VAR_19;
 int VAR_20;

 FUNC_6(&VAR_12->lock);

 VAR_20 = FUNC_3(VAR_12, VAR_13, 0);
 if (VAR_20) {
  FUNC_1(VAR_12->dev, "Unable to init BCH with given parameters\n");
  goto out;
 }

 FUNC_5(VAR_12, VAR_14, VAR_13->size);
 FUNC_5(VAR_12, VAR_15, VAR_13->bytes);

 VAR_20 = FUNC_4(VAR_12, VAR_7, &VAR_16);
 if (VAR_20) {
  FUNC_1(VAR_12->dev, "timed out while correcting data\n");
  goto out;
 }

 if (VAR_16 & (VAR_6 | VAR_5)) {

  VAR_20 = 0;
  goto out;
 }

 if (VAR_16 & VAR_10) {

  VAR_20 = -VAR_11;
  goto out;
 }

 VAR_17 = (VAR_16 & VAR_8) >> VAR_9;


 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
  if (VAR_19 & 1) {
   VAR_18 = (VAR_16 & VAR_3) >> VAR_4;
  } else {
   VAR_16 = FUNC_8(VAR_12->base + VAR_0 + (VAR_19 * 4));
   VAR_18 = (VAR_16 & VAR_1) >> VAR_2;
  }

  VAR_14[(VAR_18 >> 3)] ^= FUNC_0(VAR_18 & 0x7);
 }

out:
 FUNC_2(VAR_12);
 FUNC_7(&VAR_12->lock);

 return VAR_20;
}
