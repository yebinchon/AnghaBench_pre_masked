
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mxc_nand_host {TYPE_1__* devtype_data; } ;
struct TYPE_2__ {int irqpending_quirk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct mxc_nand_host *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (!(VAR_3 & VAR_1))
  return 0;

 if (!VAR_2->devtype_data->irqpending_quirk)
  FUNC_1(VAR_3 & ~VAR_1, VAR_0);

 return 1;
}
