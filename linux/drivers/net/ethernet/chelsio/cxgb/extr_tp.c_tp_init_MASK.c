
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct tp_params {int use_5tuple_mode; int pm_size; } ;
struct TYPE_6__ {int nports; } ;
struct TYPE_7__ {scalar_t__ regs; TYPE_1__ params; } ;
typedef TYPE_2__ adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(adapter_t * VAR_20, const struct tp_params *VAR_21,
      unsigned int VAR_22)
{
 u32 VAR_23;

 if (!FUNC_6(VAR_20))
  return;

 VAR_23 = VAR_12 | VAR_10 |
  VAR_11 | VAR_15;
 if (!VAR_21->pm_size)
  VAR_23 |= VAR_8;
 else
  VAR_23 |= VAR_13 | VAR_14;
 FUNC_7(VAR_23, VAR_20->regs + VAR_1);
 FUNC_7(VAR_16 |
        VAR_17 |
        VAR_18 |
        VAR_19, VAR_20->regs + VAR_2);
 FUNC_7(FUNC_2(64) |
        VAR_9 |
        FUNC_0(VAR_21->use_5tuple_mode) |
        FUNC_4(29), VAR_20->regs + VAR_0);



 if (FUNC_5(VAR_20) && VAR_20->params.nports > 1) {
  u32 VAR_24 = VAR_4 * (VAR_22 / 1000);

  FUNC_7(VAR_6 | VAR_7 |
         FUNC_1(VAR_24) |
         FUNC_3(VAR_5),
         VAR_20->regs + VAR_3);
 }
}
