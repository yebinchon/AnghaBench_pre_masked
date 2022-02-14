
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct igc_hw {TYPE_1__ mac; } ;
struct igc_adapter {int num_q_vectors; int * q_vector; int eims_other; int eims_enable_mask; struct igc_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;

 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct igc_adapter *VAR_7)
{
 struct igc_hw *VAR_8 = &VAR_7->hw;
 int VAR_9, VAR_10 = 0;
 u32 VAR_11;

 VAR_7->eims_enable_mask = 0;


 switch (VAR_8->mac.type) {
 case 128:



  FUNC_2(VAR_0, VAR_2 |
       VAR_4 | VAR_1 |
       VAR_3);


  VAR_7->eims_other = FUNC_0(VAR_10);
  VAR_11 = (VAR_10++ | VAR_6) << 8;

  FUNC_2(VAR_5, VAR_11);
  break;
 default:

  break;
 }

 VAR_7->eims_enable_mask |= VAR_7->eims_other;

 for (VAR_9 = 0; VAR_9 < VAR_7->num_q_vectors; VAR_9++)
  FUNC_1(VAR_7->q_vector[VAR_9], VAR_10++);

 FUNC_3();
}
