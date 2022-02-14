
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpot_data {int wipers; int feat; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int) ;
 struct dpot_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct dpot_data*) ;

int FUNC_3(struct device *VAR_2)
{
 struct dpot_data *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 for (VAR_4 = VAR_0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_3->wipers & (1 << VAR_4))
   FUNC_0(VAR_2, VAR_3->feat, VAR_4);

 FUNC_2(VAR_3);

 return 0;
}
