
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nd_region_data {int dummy; } ;
struct nd_region {int ndr_mappings; int dev; } ;
struct TYPE_2__ {scalar_t__ pid; } ;


 TYPE_1__* VAR_0 ;
 struct nd_region_data* FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct nd_region_data*,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int,scalar_t__) ;

int FUNC_7(struct nd_region *VAR_2)
{
 struct nd_region_data *VAR_3 = FUNC_0(&VAR_2->dev);
 int VAR_4, VAR_5;





 VAR_5 = FUNC_4(VAR_1);
 VAR_5 = FUNC_3(VAR_1, FUNC_1(VAR_0->pid + VAR_5, 8));
 FUNC_5();
 for (VAR_4 = 0; VAR_4 < VAR_2->ndr_mappings; VAR_4++)
  if (FUNC_2(VAR_3, VAR_4, 0))
   FUNC_6(1, FUNC_2(VAR_3, VAR_4, VAR_5));
 FUNC_5();

 return 0;
}
