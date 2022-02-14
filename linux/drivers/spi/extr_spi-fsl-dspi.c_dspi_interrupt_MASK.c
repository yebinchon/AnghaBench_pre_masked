
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_dspi {int waitflags; int waitq; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct fsl_dspi*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct fsl_dspi *VAR_7 = (struct fsl_dspi *)VAR_6;
 u32 VAR_8;

 FUNC_1(VAR_7->regmap, VAR_2, &VAR_8);
 FUNC_2(VAR_7->regmap, VAR_2, VAR_8);

 if (!(VAR_8 & (VAR_3 | VAR_4)))
  return VAR_1;

 if (FUNC_0(VAR_7) == 0) {
  VAR_7->waitflags = 1;
  FUNC_3(&VAR_7->waitq);
 }

 return VAR_0;
}
