
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct fsl_mc_device *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 if (FUNC_1(VAR_0)) {
  VAR_6 = 2;
  VAR_7 = 4;
 } else if (FUNC_1(VAR_1) ||
     FUNC_1(VAR_2) ||
     FUNC_1(VAR_3)) {
  VAR_6 = 0;
  VAR_7 = 2;
 } else {
  FUNC_0(&VAR_4->dev, "unknown SoC version\n");
  return -1;
 }

 return VAR_6 + VAR_5 / VAR_7;
}
