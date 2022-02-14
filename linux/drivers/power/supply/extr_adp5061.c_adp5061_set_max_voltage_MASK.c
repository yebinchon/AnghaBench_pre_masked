
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adp5061_state {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct adp5061_state *VAR_3, int VAR_4)
{
 int VAR_5;


 VAR_4 /= 1000;
 if (VAR_4 > 4500)
  VAR_4 = 4500;

 VAR_5 = FUNC_2(VAR_2,
          FUNC_1(VAR_2), VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 += 0x0F;

 return FUNC_3(VAR_3->regmap, VAR_0,
      VAR_1,
      FUNC_0(VAR_5));
}
