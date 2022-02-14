
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_bridge {struct fake_driver* driver_priv; } ;
struct fake_driver {int int_statid; int int_level; } ;


 int FUNC_0 (struct vme_bridge*,int ,int ) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct vme_bridge *VAR_1;
 struct fake_driver *VAR_2;

 VAR_1 = (struct vme_bridge *) VAR_0;
 VAR_2 = VAR_1->driver_priv;

 FUNC_0(VAR_1, VAR_2->int_level, VAR_2->int_statid);
}
