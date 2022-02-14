
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int dbb_irqs; } ;
struct TYPE_6__ {TYPE_1__ req; int ac_wake_work; } ;
struct TYPE_5__ {int sysclk_work; } ;




 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 TYPE_3__ VAR_10 ;
 TYPE_2__ VAR_11 ;
 int* VAR_12 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static bool FUNC_8(void)
{
 bool VAR_14;
 u32 VAR_15;
 unsigned int VAR_16;
 u8 VAR_17;

 VAR_17 = FUNC_5(VAR_13 + VAR_5);
 switch (VAR_17) {
 case 129:
 case 128:
  if (FUNC_5(VAR_13 + VAR_1) & 1)
   VAR_15 = FUNC_6(VAR_13 + VAR_3);
  else
   VAR_15 = FUNC_6(VAR_13 + VAR_2);

  if (VAR_15 & (VAR_7 | VAR_6))
   FUNC_1(&VAR_10.ac_wake_work);
  if (VAR_15 & VAR_8)
   FUNC_1(&VAR_11.sysclk_work);

  VAR_15 &= VAR_10.req.dbb_irqs;

  for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
   if (VAR_15 & VAR_12[VAR_16])
    FUNC_2(FUNC_3(VAR_9, VAR_16));
  }
  VAR_14 = 1;
  break;
 default:
  FUNC_4(0, VAR_17);
  VAR_14 = 0;
  break;
 }
 FUNC_7(FUNC_0(0), VAR_4);
 return VAR_14;
}
