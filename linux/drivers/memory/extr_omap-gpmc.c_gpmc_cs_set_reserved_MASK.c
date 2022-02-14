
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpmc_cs_data {int flags; } ;


 int VAR_0 ;
 struct gpmc_cs_data* VAR_1 ;

__attribute__((used)) static void FUNC_0(int VAR_2, int VAR_3)
{
 struct gpmc_cs_data *VAR_4 = &VAR_1[VAR_2];

 VAR_4->flags |= VAR_0;
}
