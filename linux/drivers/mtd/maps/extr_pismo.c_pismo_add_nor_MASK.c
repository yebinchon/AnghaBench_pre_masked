
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pismo_mem {int width; } ;
struct pismo_data {scalar_t__ vpp; } ;
struct physmap_flash_data {int set_vpp; int width; } ;
typedef int data ;


 int FUNC_0 (struct pismo_data*,int,struct pismo_mem*,char*,struct physmap_flash_data*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pismo_data *VAR_1, int VAR_2,
    struct pismo_mem *VAR_3)
{
 struct physmap_flash_data VAR_4 = {
  .width = VAR_3->width,
 };

 if (VAR_1->vpp)
  VAR_4.set_vpp = VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, "physmap-flash",
  &VAR_4, sizeof(VAR_4));
}
