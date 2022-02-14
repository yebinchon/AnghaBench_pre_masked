
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct lan9303 {int regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct lan9303 *VAR_3, int VAR_4, u16 VAR_5)
{
 if (VAR_4 > VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_3->regmap, VAR_1 + VAR_4, VAR_5);
}
