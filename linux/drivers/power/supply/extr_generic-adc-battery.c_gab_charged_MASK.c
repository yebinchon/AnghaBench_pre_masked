
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gab_platform_data {int jitter_delay; } ;
struct gab {int bat_work; struct gab_platform_data* pdata; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct gab *VAR_4 = VAR_3;
 struct gab_platform_data *VAR_5 = VAR_4->pdata;
 int VAR_6;

 VAR_6 = VAR_5->jitter_delay ? VAR_5->jitter_delay : VAR_1;
 FUNC_1(&VAR_4->bat_work,
   FUNC_0(VAR_6));
 return VAR_0;
}
