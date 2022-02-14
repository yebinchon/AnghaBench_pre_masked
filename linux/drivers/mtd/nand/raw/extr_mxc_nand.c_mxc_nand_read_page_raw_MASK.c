
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct nand_chip {void* oob_poi; } ;
struct mxc_nand_host {TYPE_1__* devtype_data; } ;
struct TYPE_2__ {int (* read_page ) (struct nand_chip*,int *,void*,int ,int) ;} ;


 struct mxc_nand_host* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*,int *,void*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_0, uint8_t *VAR_1,
      int VAR_2, int VAR_3)
{
 struct mxc_nand_host *VAR_4 = FUNC_0(VAR_0);
 void *VAR_5;

 if (VAR_2)
  VAR_5 = VAR_0->oob_poi;
 else
  VAR_5 = ((void*)0);

 return VAR_4->devtype_data->read_page(VAR_0, VAR_1, VAR_5, 0, VAR_3);
}
