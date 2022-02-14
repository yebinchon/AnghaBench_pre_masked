
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int temp_buf ;
struct ds3232 {int regmap; } ;
struct device {int dummy; } ;
typedef int s16 ;


 int VAR_0 ;
 struct ds3232* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, long int *VAR_2)
{
 struct ds3232 *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4[2];
 s16 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3->regmap, VAR_0, VAR_4,
          sizeof(VAR_4));
 if (VAR_6 < 0)
  return VAR_6;





 VAR_5 = (VAR_4[0] << 8) | VAR_4[1];
 VAR_5 >>= 6;
 *VAR_2 = VAR_5 * 250;

 return 0;
}
