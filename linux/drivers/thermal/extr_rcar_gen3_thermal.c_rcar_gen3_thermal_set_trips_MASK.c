
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_gen3_thermal_tsc {int low; int high; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct rcar_gen3_thermal_tsc*,int) ;
 int FUNC_2 (struct rcar_gen3_thermal_tsc*,int ,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, int VAR_3, int VAR_4)
{
 struct rcar_gen3_thermal_tsc *VAR_5 = VAR_2;

 VAR_3 = FUNC_0(VAR_3, -40000, 120000);
 VAR_4 = FUNC_0(VAR_4, -40000, 120000);

 FUNC_2(VAR_5, VAR_0,
    FUNC_1(VAR_5, VAR_3));

 FUNC_2(VAR_5, VAR_1,
    FUNC_1(VAR_5, VAR_4));

 VAR_5->low = VAR_3;
 VAR_5->high = VAR_4;

 return 0;
}
