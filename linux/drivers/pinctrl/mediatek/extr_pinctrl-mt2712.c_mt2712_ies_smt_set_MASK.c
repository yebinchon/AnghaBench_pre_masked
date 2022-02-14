
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct regmap*,int ,int ,unsigned int,unsigned char,int) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_5, unsigned int VAR_6,
         unsigned char VAR_7,
         int VAR_8, enum pin_config_param VAR_9)
{
 if (VAR_9 == VAR_1)
  return FUNC_1(VAR_5, VAR_3,
   FUNC_0(VAR_3), VAR_6, VAR_7, VAR_8);
 if (VAR_9 == VAR_2)
  return FUNC_1(VAR_5, VAR_4,
   FUNC_0(VAR_4), VAR_6, VAR_7, VAR_8);
 return -VAR_0;
}
