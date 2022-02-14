
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_dspi {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fsl_dspi*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct fsl_dspi *VAR_4)
{
 int VAR_5 = 1000;
 u32 VAR_6;

 do {
  FUNC_1(VAR_4->regmap, VAR_1, &VAR_6);
  FUNC_2(VAR_4->regmap, VAR_1, VAR_6);

  if (VAR_6 & (VAR_2 | VAR_3))
   break;
 } while (--VAR_5);

 if (!VAR_5)
  return -VAR_0;

 return FUNC_0(VAR_4);
}
