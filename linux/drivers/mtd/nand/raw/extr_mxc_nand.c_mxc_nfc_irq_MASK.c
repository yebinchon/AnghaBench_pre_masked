
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxc_nand_host {int op_completion; TYPE_1__* devtype_data; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* check_int ) (struct mxc_nand_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mxc_nand_host*,int ) ;
 int FUNC_2 (struct mxc_nand_host*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct mxc_nand_host *VAR_4 = VAR_3;

 if (!VAR_4->devtype_data->check_int(VAR_4))
  return VAR_1;

 FUNC_1(VAR_4, 0);

 FUNC_0(&VAR_4->op_completion);

 return VAR_0;
}
