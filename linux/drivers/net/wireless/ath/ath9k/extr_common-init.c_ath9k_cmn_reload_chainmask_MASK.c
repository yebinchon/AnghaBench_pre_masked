
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int hw_caps; } ;
struct ath_hw {TYPE_2__ caps; } ;
struct ath_common {TYPE_1__* sbands; } ;
struct TYPE_3__ {int ht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct ath_hw*,int *) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;

void FUNC_2(struct ath_hw *VAR_5)
{
 struct ath_common *VAR_6 = FUNC_1(VAR_5);

 if (!(VAR_5->caps.hw_caps & VAR_2))
  return;

 if (VAR_5->caps.hw_caps & VAR_0)
  FUNC_0(VAR_5,
   &VAR_6->sbands[VAR_3].ht_cap);
 if (VAR_5->caps.hw_caps & VAR_1)
  FUNC_0(VAR_5,
   &VAR_6->sbands[VAR_4].ht_cap);
}
