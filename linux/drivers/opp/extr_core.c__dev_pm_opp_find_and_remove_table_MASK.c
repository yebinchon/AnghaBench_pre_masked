
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct opp_table*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct opp_table*) ;
 int FUNC_3 (int,char*,char*,int) ;
 struct opp_table* FUNC_4 (struct device*) ;
 int FUNC_5 (struct opp_table*) ;
 char* FUNC_6 (struct device*) ;
 int FUNC_7 (struct opp_table*) ;

void FUNC_8(struct device *VAR_1)
{
 struct opp_table *VAR_2;


 VAR_2 = FUNC_4(VAR_1);
 if (FUNC_0(VAR_2)) {
  int VAR_3 = FUNC_2(VAR_2);

  if (VAR_3 != -VAR_0)
   FUNC_3(1, "%s: opp_table: %d\n",
        FUNC_1(VAR_1) ?
     "Invalid device" : FUNC_6(VAR_1),
        VAR_3);
  return;
 }

 FUNC_5(VAR_2);


 FUNC_7(VAR_2);


 FUNC_7(VAR_2);
}
