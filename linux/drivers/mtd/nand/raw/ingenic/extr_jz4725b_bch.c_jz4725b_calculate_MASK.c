
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ingenic_ecc_params {int bytes; int size; } ;
struct ingenic_ecc {int lock; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ingenic_ecc*) ;
 int FUNC_2 (struct ingenic_ecc*,int *,int ) ;
 int FUNC_3 (struct ingenic_ecc*,struct ingenic_ecc_params*,int) ;
 int FUNC_4 (struct ingenic_ecc*,int ,int *) ;
 int FUNC_5 (struct ingenic_ecc*,int const*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ingenic_ecc *VAR_1,
        struct ingenic_ecc_params *VAR_2,
        const u8 *VAR_3, u8 *VAR_4)
{
 int VAR_5;

 FUNC_6(&VAR_1->lock);

 VAR_5 = FUNC_3(VAR_1, VAR_2, 1);
 if (VAR_5) {
  FUNC_0(VAR_1->dev, "Unable to init BCH with given parameters\n");
  goto out_disable;
 }

 FUNC_5(VAR_1, VAR_3, VAR_2->size);

 VAR_5 = FUNC_4(VAR_1, VAR_0, ((void*)0));
 if (VAR_5) {
  FUNC_0(VAR_1->dev, "timed out while calculating ECC\n");
  goto out_disable;
 }

 FUNC_2(VAR_1, VAR_4, VAR_2->bytes);

out_disable:
 FUNC_1(VAR_1);
 FUNC_7(&VAR_1->lock);

 return VAR_5;
}
