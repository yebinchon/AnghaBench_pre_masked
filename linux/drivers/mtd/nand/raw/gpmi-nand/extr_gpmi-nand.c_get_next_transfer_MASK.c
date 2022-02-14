
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpmi_transfer {int dummy; } ;
struct gpmi_nand_data {size_t ntransfers; struct gpmi_transfer* transfers; } ;


 size_t VAR_0 ;

__attribute__((used)) static struct gpmi_transfer *FUNC_0(struct gpmi_nand_data *VAR_1)
{
 struct gpmi_transfer *VAR_2 = &VAR_1->transfers[VAR_1->ntransfers];

 VAR_1->ntransfers++;

 if (VAR_1->ntransfers == VAR_0)
  return ((void*)0);

 return VAR_2;
}
