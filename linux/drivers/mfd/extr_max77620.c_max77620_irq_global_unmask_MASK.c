
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77620_chip {int dev; int rmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_2)
{
 struct max77620_chip *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->rmap, VAR_1,
     VAR_0, 0);
 if (VAR_4 < 0)
  FUNC_0(VAR_3->dev, "Failed to reset GLBLM: %d\n", VAR_4);

 return VAR_4;
}
