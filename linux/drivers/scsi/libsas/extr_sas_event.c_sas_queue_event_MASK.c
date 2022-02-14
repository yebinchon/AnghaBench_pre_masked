
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_work {int dummy; } ;
struct sas_ha_struct {int lock; } ;


 int FUNC_0 (struct sas_ha_struct*,struct sas_work*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(int VAR_0, struct sas_work *VAR_1,
       struct sas_ha_struct *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2->lock, VAR_3);
 VAR_4 = FUNC_0(VAR_2, VAR_1);
 FUNC_2(&VAR_2->lock, VAR_3);

 return VAR_4;
}
