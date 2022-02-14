
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf85363 {int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct pcf85363 *VAR_10, unsigned
       int VAR_11)
{
 unsigned int VAR_12 = VAR_4 | VAR_2 | VAR_1 |
       VAR_0 | VAR_3;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_10->regmap, VAR_7, VAR_12,
     VAR_11 ? VAR_12 : 0);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_0(VAR_10->regmap, VAR_6,
     VAR_9, VAR_11 ? VAR_9 : 0);

 if (VAR_13 || VAR_11)
  return VAR_13;


 return FUNC_0(VAR_10->regmap, VAR_5, VAR_8, 0);
}
