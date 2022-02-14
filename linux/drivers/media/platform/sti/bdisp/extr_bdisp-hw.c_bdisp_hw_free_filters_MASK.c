
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int paddr; scalar_t__ virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (struct device*,int,scalar_t__,int ,int ) ;

void FUNC_1(struct device *VAR_6)
{
 int VAR_7 = (VAR_0 * VAR_3) + (VAR_1 * VAR_4);

 if (VAR_5[0].virt)
  FUNC_0(VAR_6, VAR_7, VAR_5[0].virt,
          VAR_5[0].paddr, VAR_2);
}
