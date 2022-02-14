
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_data_interface {int dummy; } ;
struct nand_chip {int dummy; } ;
struct mxc_nand_host {TYPE_1__* devtype_data; } ;
struct TYPE_2__ {int (* setup_data_interface ) (struct nand_chip*,int,struct nand_data_interface const*) ;} ;


 struct mxc_nand_host* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*,int,struct nand_data_interface const*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_0, int VAR_1,
          const struct nand_data_interface *VAR_2)
{
 struct mxc_nand_host *VAR_3 = FUNC_0(VAR_0);

 return VAR_3->devtype_data->setup_data_interface(VAR_0, VAR_1, VAR_2);
}
