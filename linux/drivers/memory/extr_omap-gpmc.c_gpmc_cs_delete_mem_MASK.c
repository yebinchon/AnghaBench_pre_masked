
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ end; scalar_t__ start; } ;
struct gpmc_cs_data {struct resource mem; } ;


 struct gpmc_cs_data* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct resource*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(int VAR_2)
{
 struct gpmc_cs_data *VAR_3 = &VAR_0[VAR_2];
 struct resource *VAR_4 = &VAR_3->mem;
 int VAR_5;

 FUNC_1(&VAR_1);
 VAR_5 = FUNC_0(VAR_4);
 VAR_4->start = 0;
 VAR_4->end = 0;
 FUNC_2(&VAR_1);

 return VAR_5;
}
