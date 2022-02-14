
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulpi_ops {int dummy; } ;
struct ulpi {struct ulpi_ops const* ops; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct ulpi* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct ulpi*) ;
 struct ulpi* FUNC_2 (int,int ) ;
 int FUNC_3 (struct device*,struct ulpi*) ;

struct ulpi *FUNC_4(struct device *VAR_2,
         const struct ulpi_ops *VAR_3)
{
 struct ulpi *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->ops = VAR_3;

 VAR_5 = FUNC_3(VAR_2, VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_4);
  return FUNC_0(VAR_5);
 }

 return VAR_4;
}
