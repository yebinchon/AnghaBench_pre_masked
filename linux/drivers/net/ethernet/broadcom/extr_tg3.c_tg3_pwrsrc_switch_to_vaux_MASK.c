
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tg3 {int grc_local_ctrl; int nic_sram_data_cfg; TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (struct tg3*) ;
 int FUNC_1 (struct tg3*,int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct tg3 *VAR_16)
{
 if (!FUNC_1(VAR_16, VAR_11))
  return;

 if (FUNC_0(VAR_16) == VAR_0 ||
     FUNC_0(VAR_16) == VAR_1) {
  FUNC_2(VAR_10, VAR_16->grc_local_ctrl |
       (VAR_3 |
        VAR_4 |
        VAR_5 |
        VAR_7 |
        VAR_8),
       VAR_15);
 } else if (VAR_16->pdev->device == VAR_13 ||
     VAR_16->pdev->device == VAR_14) {

  u32 VAR_17 = VAR_3 |
         VAR_4 |
         VAR_5 |
         VAR_7 |
         VAR_8 |
         VAR_16->grc_local_ctrl;
  FUNC_2(VAR_10, VAR_17,
       VAR_15);

  VAR_17 |= VAR_9;
  FUNC_2(VAR_10, VAR_17,
       VAR_15);

  VAR_17 &= ~VAR_7;
  FUNC_2(VAR_10, VAR_17,
       VAR_15);
 } else {
  u32 VAR_18;
  u32 VAR_19 = 0;


  if (FUNC_0(VAR_16) == VAR_2) {
   VAR_19 |= VAR_6;
   FUNC_2(VAR_10, VAR_16->grc_local_ctrl |
        VAR_19,
        VAR_15);
  }


  VAR_18 = VAR_16->nic_sram_data_cfg &
      VAR_12;

  VAR_19 |= VAR_3 |
      VAR_4 |
      VAR_5 |
      VAR_8 |
      VAR_9;
  if (VAR_18) {
   VAR_19 &= ~(VAR_5 |
         VAR_9);
  }
  FUNC_2(VAR_10,
       VAR_16->grc_local_ctrl | VAR_19,
       VAR_15);

  VAR_19 |= VAR_7;

  FUNC_2(VAR_10,
       VAR_16->grc_local_ctrl | VAR_19,
       VAR_15);

  if (!VAR_18) {
   VAR_19 &= ~VAR_9;
   FUNC_2(VAR_10,
        VAR_16->grc_local_ctrl | VAR_19,
        VAR_15);
  }
 }
}
