
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_lpspi_data {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct fsl_lpspi_data *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;

 FUNC_0(VAR_2);
 FUNC_1(VAR_2, VAR_0);
 FUNC_2(VAR_2);

 return 0;
}
