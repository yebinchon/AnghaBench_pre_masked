
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int flags; int pdev_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_2)
{

 FUNC_2(VAR_2);


 FUNC_0(VAR_2->pdev_dev, "Configuration: %sNIC %s, %s capable\n",
   FUNC_1(VAR_2) ? "R" : "",
   ((VAR_2->flags & VAR_1) ? "MSI-X" :
    (VAR_2->flags & VAR_0) ? "MSI" : ""),
   FUNC_1(VAR_2) ? "Offload" : "non-Offload");
}
