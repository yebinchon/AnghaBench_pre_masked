
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct armada_thermal_sensor {int id; struct armada_thermal_priv* priv; } ;
struct armada_thermal_priv {int update_lock; int interrupt_source; } ;


 int FUNC_0 (struct armada_thermal_priv*,int*) ;
 int FUNC_1 (struct armada_thermal_priv*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, int *VAR_1)
{
 struct armada_thermal_sensor *VAR_2 = VAR_0;
 struct armada_thermal_priv *VAR_3 = VAR_2->priv;
 int VAR_4;

 FUNC_2(&VAR_3->update_lock);


 VAR_4 = FUNC_1(VAR_3, VAR_2->id);
 if (VAR_4)
  goto unlock_mutex;


 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4)
  goto unlock_mutex;





 VAR_4 = FUNC_1(VAR_3, VAR_3->interrupt_source);

unlock_mutex:
 FUNC_3(&VAR_3->update_lock);

 return VAR_4;
}
