
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxc_nand_host {int dev; TYPE_1__* devtype_data; int op_completion; } ;
struct TYPE_2__ {int (* check_int ) (struct mxc_nand_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mxc_nand_host*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mxc_nand_host*) ;
 int FUNC_5 (struct mxc_nand_host*) ;
 int FUNC_6 (struct mxc_nand_host*) ;
 int FUNC_7 (int) ;
 unsigned long FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct mxc_nand_host *VAR_2, int VAR_3)
{
 int VAR_4 = 0;





 if (VAR_2->devtype_data->check_int(VAR_2))
  return 0;

 if (VAR_3) {
  unsigned long VAR_5;

  FUNC_3(&VAR_2->op_completion);

  FUNC_2(VAR_2, 1);

  VAR_5 = FUNC_8(&VAR_2->op_completion, VAR_1);
  if (!VAR_5 && !VAR_2->devtype_data->check_int(VAR_2)) {
   FUNC_1(VAR_2->dev, "timeout waiting for irq\n");
   VAR_4 = -VAR_0;
  }
 } else {
  int VAR_6 = 8000;
  int VAR_7;

  do {
   FUNC_7(1);

   VAR_7 = VAR_2->devtype_data->check_int(VAR_2);
   if (VAR_7)
    break;

  } while (--VAR_6);

  if (!VAR_7) {
   FUNC_1(VAR_2->dev, "timeout polling for completion\n");
   VAR_4 = -VAR_0;
  }
 }

 FUNC_0(VAR_4 < 0, "timeout! useirq=%d\n", VAR_3);

 return VAR_4;
}
