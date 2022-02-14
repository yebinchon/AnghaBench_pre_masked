
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int num_q_vectors; int * q_vector; int eims_other; int eims_enable_mask; struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;







 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct igb_adapter *VAR_12)
{
 u32 VAR_13;
 int VAR_14, VAR_15 = 0;
 struct e1000_hw *VAR_16 = &VAR_12->hw;

 VAR_12->eims_enable_mask = 0;


 switch (VAR_16->mac.type) {
 case 134:
  VAR_13 = FUNC_4(VAR_0);

  VAR_13 |= VAR_3;


  VAR_13 |= VAR_1;
  VAR_13 |= VAR_2;

  FUNC_5(VAR_0, VAR_13);


  FUNC_2(FUNC_1(0), VAR_15++, VAR_4);
  VAR_12->eims_other = VAR_4;

  break;

 case 133:
 case 132:
 case 129:
 case 128:
 case 131:
 case 130:



  FUNC_5(VAR_5, VAR_7 |
       VAR_9 | VAR_6 |
       VAR_8);


  VAR_12->eims_other = FUNC_0(VAR_15);
  VAR_13 = (VAR_15++ | VAR_11) << 8;

  FUNC_5(VAR_10, VAR_13);
  break;
 default:

  break;
 }

 VAR_12->eims_enable_mask |= VAR_12->eims_other;

 for (VAR_14 = 0; VAR_14 < VAR_12->num_q_vectors; VAR_14++)
  FUNC_3(VAR_12->q_vector[VAR_14], VAR_15++);

 FUNC_6();
}
