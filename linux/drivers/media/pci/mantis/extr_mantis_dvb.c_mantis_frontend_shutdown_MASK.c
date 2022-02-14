
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (struct mantis_pci*,int ) ;
 int FUNC_2 (struct mantis_pci*) ;

__attribute__((used)) static int FUNC_3(struct mantis_pci *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_2);
 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3 != 0) {
  FUNC_0(VAR_0, 1, "Frontend POWER OFF failed! <%d>", VAR_3);
  return 1;
 }

 return 0;
}
