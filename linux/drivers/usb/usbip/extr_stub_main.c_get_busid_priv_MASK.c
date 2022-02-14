
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_id_priv {int busid_lock; } ;


 struct bus_id_priv* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct bus_id_priv *FUNC_3(const char *VAR_2)
{
 int VAR_3;
 struct bus_id_priv *VAR_4 = ((void*)0);

 FUNC_1(&VAR_1);
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 >= 0) {
  VAR_4 = &(VAR_0[VAR_3]);

  FUNC_1(&VAR_4->busid_lock);
 }
 FUNC_2(&VAR_1);

 return VAR_4;
}
