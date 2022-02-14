
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int lock; } ;
struct opp_device {int dummy; } ;
struct device {int dummy; } ;


 struct opp_device* FUNC_0 (struct device const*,struct opp_table*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct opp_device *FUNC_3(const struct device *VAR_0,
    struct opp_table *VAR_1)
{
 struct opp_device *VAR_2;

 FUNC_1(&VAR_1->lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_1->lock);

 return VAR_2;
}
