
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
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct lan9303*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct lan9303 *VAR_5, u16 VAR_6, u32 *VAR_7)
{
 u32 VAR_8;
 int VAR_9;

 VAR_8 = VAR_6;
 VAR_8 |= VAR_2;
 VAR_8 |= VAR_3;
 VAR_8 |= VAR_1;

 FUNC_3(&VAR_5->indirect_mutex);

 VAR_9 = FUNC_2(VAR_5);
 if (VAR_9)
  goto on_error;


 VAR_9 = FUNC_5(VAR_5->regmap, VAR_0, VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_5->dev, "Failed to write csr command reg: %d\n",
   VAR_9);
  goto on_error;
 }

 VAR_9 = FUNC_2(VAR_5);
 if (VAR_9)
  goto on_error;

 VAR_9 = FUNC_1(VAR_5->regmap, VAR_4, VAR_7);
 if (VAR_9)
  FUNC_0(VAR_5->dev, "Failed to read csr data reg: %d\n", VAR_9);
on_error:
 FUNC_4(&VAR_5->indirect_mutex);
 return VAR_9;
}
