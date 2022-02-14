
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov965x {int * gpios; int sd; int regmap; } ;
struct ov9650_platform_data {int gpio_pwdn; int gpio_reset; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,int,int ,char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 struct device* FUNC_6 (int ) ;
 int FUNC_7 (int,int ,int *,char*,int) ;

__attribute__((used)) static int FUNC_8(struct ov965x *VAR_5,
    const struct ov9650_platform_data *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9[VAR_3];
 struct device *VAR_10 = FUNC_6(VAR_5->regmap);

 VAR_9[VAR_1] = VAR_6->gpio_pwdn;
 VAR_9[VAR_2] = VAR_6->gpio_reset;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5->gpios); VAR_8++) {
  int VAR_11 = VAR_9[VAR_8];

  if (!FUNC_3(VAR_11))
   continue;
  VAR_7 = FUNC_1(VAR_10, VAR_11,
         VAR_0, "OV965X");
  if (VAR_7 < 0)
   return VAR_7;
  FUNC_7(1, VAR_4, &VAR_5->sd, "set gpio %d to 1\n", VAR_11);

  FUNC_4(VAR_11, 1);
  FUNC_2(VAR_11, 0);
  VAR_5->gpios[VAR_8] = FUNC_5(VAR_11);
 }

 return 0;
}
