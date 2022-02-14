
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at86rf230_local {int sleep; int regmap; } ;


 int FUNC_0 (struct at86rf230_local*) ;
 int FUNC_1 (struct at86rf230_local*) ;
 int FUNC_2 (int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static inline int
FUNC_3(struct at86rf230_local *VAR_0,
         unsigned int VAR_1, unsigned int VAR_2,
         unsigned int VAR_3, unsigned int VAR_4)
{
 bool VAR_5 = VAR_0->sleep;
 int VAR_6;


 if (VAR_5)
  FUNC_0(VAR_0);

 VAR_6 = FUNC_2(VAR_0->regmap, VAR_1, VAR_2, VAR_4 << VAR_3);


 if (VAR_5)
  FUNC_1(VAR_0);

 return VAR_6;
}
