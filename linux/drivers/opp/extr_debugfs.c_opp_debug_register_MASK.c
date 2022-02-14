
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {scalar_t__ dentry; } ;
struct opp_device {int dummy; } ;


 int FUNC_0 (struct opp_device*,struct opp_table*) ;
 int FUNC_1 (struct opp_device*,struct opp_table*) ;

void FUNC_2(struct opp_device *VAR_0, struct opp_table *VAR_1)
{
 if (VAR_1->dentry)
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1);
}
