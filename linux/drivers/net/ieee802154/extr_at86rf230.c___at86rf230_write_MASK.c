
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at86rf230_local {int sleep; int regmap; } ;


 int FUNC_0 (struct at86rf230_local*) ;
 int FUNC_1 (struct at86rf230_local*) ;
 int FUNC_2 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static inline int
FUNC_3(struct at86rf230_local *VAR_0,
    unsigned int VAR_1, unsigned int VAR_2)
{
 bool VAR_3 = VAR_0->sleep;
 int VAR_4;


 if (VAR_3)
  FUNC_0(VAR_0);

 VAR_4 = FUNC_2(VAR_0->regmap, VAR_1, VAR_2);


 if (VAR_3)
  FUNC_1(VAR_0);

 return VAR_4;
}
