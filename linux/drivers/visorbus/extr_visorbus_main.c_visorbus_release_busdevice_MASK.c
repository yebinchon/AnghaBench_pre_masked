
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visor_device {int visorchannel; int debugfs_dir; int debugfs_bus_info; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct visor_device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct visor_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct visor_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->debugfs_bus_info);
 FUNC_1(VAR_1->debugfs_dir);
 FUNC_4(VAR_1->visorchannel);
 FUNC_3(VAR_1);
}
