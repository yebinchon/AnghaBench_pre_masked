
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rv3029_data {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rv3029_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, u8 VAR_3, u8 *VAR_4,
       unsigned int VAR_5)
{
 struct rv3029_data *VAR_6 = FUNC_0(VAR_2);

 if ((VAR_3 > VAR_1 + 7) ||
     (VAR_3 + VAR_5 > VAR_1 + 8))
  return -VAR_0;

 return FUNC_1(VAR_6->regmap, VAR_3, VAR_4, VAR_5);
}
