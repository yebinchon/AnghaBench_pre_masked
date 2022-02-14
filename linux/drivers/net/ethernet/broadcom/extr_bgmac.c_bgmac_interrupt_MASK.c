
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bgmac {int int_mask; int napi; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bgmac*) ;
 int FUNC_1 (struct bgmac*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 struct bgmac* FUNC_4 (void*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct bgmac *VAR_7 = FUNC_4(VAR_6);

 u32 VAR_8 = FUNC_1(VAR_7, VAR_0);
 VAR_8 &= VAR_7->int_mask;

 if (!VAR_8)
  return VAR_4;

 VAR_8 &= ~(VAR_2 | VAR_1);
 if (VAR_8)
  FUNC_2(VAR_7->dev, "Unknown IRQs: 0x%08X\n", VAR_8);


 FUNC_0(VAR_7);

 FUNC_3(&VAR_7->napi);

 return VAR_3;
}
