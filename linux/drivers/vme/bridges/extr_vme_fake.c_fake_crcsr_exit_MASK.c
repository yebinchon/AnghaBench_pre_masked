
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_bridge {struct fake_driver* driver_priv; } ;
struct fake_driver {int crcsr_kernel; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct vme_bridge *VAR_0)
{
 struct fake_driver *VAR_1;

 VAR_1 = VAR_0->driver_priv;

 FUNC_0(VAR_1->crcsr_kernel);
}
