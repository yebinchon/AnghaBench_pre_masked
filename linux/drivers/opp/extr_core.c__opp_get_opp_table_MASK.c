
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct opp_table*) ;
 int FUNC_1 (struct device*,struct opp_table*) ;
 struct opp_table* FUNC_2 (struct device*,int) ;
 struct opp_table* FUNC_3 (struct device*) ;
 struct opp_table* FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct opp_table*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;

__attribute__((used)) static struct opp_table *FUNC_8(struct device *VAR_1, int VAR_2)
{
 struct opp_table *VAR_3;


 FUNC_6(&VAR_0);

 VAR_3 = FUNC_3(VAR_1);
 if (!FUNC_0(VAR_3))
  goto unlock;

 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (VAR_3) {
  if (!FUNC_1(VAR_1, VAR_3)) {
   FUNC_5(VAR_3);
   VAR_3 = ((void*)0);
  }
  goto unlock;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_2);

unlock:
 FUNC_7(&VAR_0);

 return VAR_3;
}
