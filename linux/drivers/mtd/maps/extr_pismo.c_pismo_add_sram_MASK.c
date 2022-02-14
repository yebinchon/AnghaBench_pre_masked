
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platdata_mtd_ram {int bankwidth; } ;
struct pismo_mem {int width; } ;
struct pismo_data {int dummy; } ;
typedef int data ;


 int FUNC_0 (struct pismo_data*,int,struct pismo_mem*,char*,struct platdata_mtd_ram*,int) ;

__attribute__((used)) static int FUNC_1(struct pismo_data *VAR_0, int VAR_1,
     struct pismo_mem *VAR_2)
{
 struct platdata_mtd_ram VAR_3 = {
  .bankwidth = VAR_2->width,
 };

 return FUNC_0(VAR_0, VAR_1, VAR_2, "mtd-ram",
  &VAR_3, sizeof(VAR_3));
}
