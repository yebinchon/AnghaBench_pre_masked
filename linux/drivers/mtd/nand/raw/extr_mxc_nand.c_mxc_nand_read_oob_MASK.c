
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int oob_poi; } ;
struct mxc_nand_host {TYPE_1__* devtype_data; } ;
struct TYPE_2__ {int (* read_page ) (struct nand_chip*,int *,int ,int ,int) ;} ;


 struct mxc_nand_host* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*,int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_0, int VAR_1)
{
 struct mxc_nand_host *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->devtype_data->read_page(VAR_0, ((void*)0), VAR_0->oob_poi, 0,
          VAR_1);
}
