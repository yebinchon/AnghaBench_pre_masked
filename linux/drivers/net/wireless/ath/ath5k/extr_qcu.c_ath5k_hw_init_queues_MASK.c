
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int q_tx_num; } ;
struct TYPE_4__ {TYPE_1__ cap_queues; } ;
struct ath5k_hw {scalar_t__ ah_version; scalar_t__ ah_bwmode; int ah_coverage_class; TYPE_2__ ah_capabilities; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ) ;
 int FUNC_1 (struct ath5k_hw*,char*,int) ;
 unsigned int FUNC_2 (struct ath5k_hw*) ;
 int FUNC_3 (struct ath5k_hw*,int) ;
 int FUNC_4 (struct ath5k_hw*,unsigned int) ;
 int FUNC_5 (struct ath5k_hw*,int ) ;

int
FUNC_6(struct ath5k_hw *VAR_4)
{
 int VAR_5, VAR_6;
 if (VAR_4->ah_version != VAR_0)
  for (VAR_5 = 0; VAR_5 < VAR_4->ah_capabilities.cap_queues.q_tx_num; VAR_5++) {
   VAR_6 = FUNC_3(VAR_4, VAR_5);
   if (VAR_6) {
    FUNC_1(VAR_4,
     "failed to reset TX queue #%d\n", VAR_5);
    return VAR_6;
   }
  }
 else



  FUNC_5(VAR_4, 0);


 if (VAR_4->ah_bwmode == VAR_1)
  FUNC_0(VAR_4, VAR_2,
    VAR_3);




 if (!VAR_4->ah_coverage_class) {
  unsigned int VAR_7 = FUNC_2(VAR_4);
  FUNC_4(VAR_4, VAR_7);
 }

 return 0;
}
