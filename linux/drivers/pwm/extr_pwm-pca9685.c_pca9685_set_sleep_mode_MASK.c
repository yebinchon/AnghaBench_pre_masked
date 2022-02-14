
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pca9685 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct pca9685 *VAR_2, bool VAR_3)
{
 FUNC_0(VAR_2->regmap, VAR_1,
      VAR_0, VAR_3 ? VAR_0 : 0);
 if (!VAR_3) {

  FUNC_1(500);
 }
}
