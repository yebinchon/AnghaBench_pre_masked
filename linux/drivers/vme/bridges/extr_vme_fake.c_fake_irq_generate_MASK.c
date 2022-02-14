
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_bridge {struct fake_driver* driver_priv; } ;
struct fake_driver {int int_level; int int_statid; int vme_int; int int_tasklet; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct vme_bridge *VAR_0, int VAR_1,
  int VAR_2)
{
 struct fake_driver *VAR_3;

 VAR_3 = VAR_0->driver_priv;

 FUNC_0(&VAR_3->vme_int);

 VAR_3->int_level = VAR_1;

 VAR_3->int_statid = VAR_2;





 FUNC_2(&VAR_3->int_tasklet);

 FUNC_1(&VAR_3->vme_int);

 return 0;
}
