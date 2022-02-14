
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adp5061_state {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct adp5061_state *VAR_1,
         u8 *VAR_2, u8 *VAR_3)
{
 u8 VAR_4[2];
 int VAR_5;


 VAR_5 = FUNC_0(VAR_1->regmap, VAR_0,
          &VAR_4[0], 2);
 if (VAR_5 < 0)
  return VAR_5;

 *VAR_2 = VAR_4[0];
 *VAR_3 = VAR_4[1];

 return VAR_5;
}
