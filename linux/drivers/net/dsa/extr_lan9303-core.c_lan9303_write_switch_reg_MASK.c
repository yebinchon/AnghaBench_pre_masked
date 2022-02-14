
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct lan9303 {int indirect_mutex; int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct lan9303*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct lan9303 *VAR_4, u16 VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 int VAR_8;

 VAR_7 = VAR_5;
 VAR_7 |= VAR_2;
 VAR_7 |= VAR_1;

 FUNC_2(&VAR_4->indirect_mutex);

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8)
  goto on_error;

 VAR_8 = FUNC_4(VAR_4->regmap, VAR_3, VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_4->dev, "Failed to write csr data reg: %d\n", VAR_8);
  goto on_error;
 }


 VAR_8 = FUNC_4(VAR_4->regmap, VAR_0, VAR_7);
 if (VAR_8)
  FUNC_0(VAR_4->dev, "Failed to write csr command reg: %d\n",
   VAR_8);

on_error:
 FUNC_3(&VAR_4->indirect_mutex);
 return VAR_8;
}
