
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct regmap*,int ,unsigned int,unsigned int,int ,int ) ;
 int FUNC_2 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regmap *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_0, VAR_8,
           !(VAR_8 & VAR_3),
           0, VAR_4);
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_2(VAR_6, VAR_5,
      FUNC_0(VAR_7));
 if (VAR_9)
  return VAR_9;


 VAR_9 = FUNC_2(VAR_6, VAR_0, VAR_2 | VAR_1);
 if (!VAR_9)




  VAR_9 = FUNC_1(VAR_6, VAR_0, VAR_8,
            (VAR_8 & VAR_3),
            0, VAR_4);

 return VAR_9;
}
