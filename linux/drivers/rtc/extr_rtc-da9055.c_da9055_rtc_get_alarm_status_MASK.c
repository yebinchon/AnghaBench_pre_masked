
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9055 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct da9055*,int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct da9055 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2->dev, "Failed to read ALM: %d\n", VAR_3);
  return VAR_3;
 }
 VAR_3 &= VAR_1;
 return (VAR_3 > 0) ? 1 : 0;
}
