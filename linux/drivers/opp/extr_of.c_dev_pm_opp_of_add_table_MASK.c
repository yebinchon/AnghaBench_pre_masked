
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {scalar_t__ np; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct opp_table*) ;
 int FUNC_1 (struct device*,struct opp_table*) ;
 struct opp_table* FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct opp_table*) ;

int FUNC_4(struct device *VAR_1)
{
 struct opp_table *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1, 0);
 if (!VAR_2)
  return -VAR_0;





 if (VAR_2->np)
  VAR_3 = FUNC_1(VAR_1, VAR_2);
 else
  VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3)
  FUNC_3(VAR_2);

 return VAR_3;
}
