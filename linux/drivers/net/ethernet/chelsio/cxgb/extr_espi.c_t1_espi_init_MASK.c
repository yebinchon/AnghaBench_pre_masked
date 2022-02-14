
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct peespi {int misc_ctrl; int lock; TYPE_2__* adapter; } ;
struct TYPE_8__ {int nports; } ;
struct TYPE_9__ {scalar_t__ regs; TYPE_1__ params; } ;
typedef TYPE_2__ adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int,scalar_t__) ;

int FUNC_11(struct peespi *VAR_12, int VAR_13, int VAR_14)
{
 u32 VAR_15 = 0;
 adapter_t *VAR_16 = VAR_12->adapter;


 FUNC_10(0, VAR_16->regs + VAR_3);

 if (FUNC_6(VAR_16)) {
  FUNC_10(FUNC_2(4) |
         FUNC_0(3) |
         FUNC_1(1), VAR_16->regs + VAR_2);
  FUNC_10(VAR_14 == 4 ? 0x200040 : 0x1000080,
         VAR_16->regs + VAR_1);
 } else
  FUNC_10(0x800100, VAR_16->regs + VAR_1);

 if (VAR_13 == VAR_5)
  FUNC_4(VAR_16);
 else if (VAR_13 == VAR_6)
  FUNC_5(VAR_16);
 else if (VAR_13 == VAR_4) {
  VAR_15 = VAR_7;
  FUNC_3(VAR_16, VAR_14);
 } else
  return -1;

 FUNC_10(VAR_15 | VAR_10,
        VAR_16->regs + VAR_0);

 if (FUNC_6(VAR_16)) {
  FUNC_9(VAR_16);




  VAR_12->misc_ctrl = FUNC_7(VAR_16->regs + VAR_2);
  VAR_12->misc_ctrl &= ~VAR_11;
  VAR_12->misc_ctrl |= VAR_8;
  if (VAR_16->params.nports == 1)
   VAR_12->misc_ctrl |= VAR_9;
  FUNC_10(VAR_12->misc_ctrl, VAR_16->regs + VAR_2);
  FUNC_8(&VAR_12->lock);
 }

 return 0;
}
