
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct notifier_block {int dummy; } ;
struct TYPE_10__ {TYPE_1__* soc; } ;
struct TYPE_9__ {int scratch0; } ;
struct TYPE_8__ {TYPE_2__* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_8,
        unsigned long VAR_9, void *VAR_10)
{
 const char *VAR_11 = VAR_10;
 u32 VAR_12;

 VAR_12 = FUNC_2(VAR_7, VAR_7->soc->regs->scratch0);
 VAR_12 &= ~VAR_4;

 if (VAR_11) {
  if (FUNC_0(VAR_11, "recovery") == 0)
   VAR_12 |= VAR_6;

  if (FUNC_0(VAR_11, "bootloader") == 0)
   VAR_12 |= VAR_3;

  if (FUNC_0(VAR_11, "forced-recovery") == 0)
   VAR_12 |= VAR_5;
 }

 FUNC_3(VAR_7, VAR_12, VAR_7->soc->regs->scratch0);


 VAR_12 = FUNC_1(VAR_7, VAR_1);
 VAR_12 |= VAR_2;
 FUNC_4(VAR_7, VAR_12, VAR_1);

 return VAR_0;
}
