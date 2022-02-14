
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ingenic_ecc_params {int bytes; int size; } ;
struct ingenic_ecc {int lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ingenic_ecc*) ;
 int FUNC_2 (struct ingenic_ecc*,int *,int ) ;
 int FUNC_3 (struct ingenic_ecc*,struct ingenic_ecc_params*,int) ;
 scalar_t__ FUNC_4 (struct ingenic_ecc*,int ,int *) ;
 int FUNC_5 (struct ingenic_ecc*,int const*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ingenic_ecc *VAR_2,
       struct ingenic_ecc_params *VAR_3,
       const u8 *VAR_4, u8 *VAR_5)
{
 int VAR_6 = 0;

 FUNC_6(&VAR_2->lock);

 FUNC_3(VAR_2, VAR_3, 1);
 FUNC_5(VAR_2, VAR_4, VAR_3->size);

 if (FUNC_4(VAR_2, VAR_0, ((void*)0))) {
  FUNC_2(VAR_2, VAR_5, VAR_3->bytes);
 } else {
  FUNC_0(VAR_2->dev, "timed out while calculating ECC\n");
  VAR_6 = -VAR_1;
 }

 FUNC_1(VAR_2);
 FUNC_7(&VAR_2->lock);
 return VAR_6;
}
