
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef enum tx_queue_prio { ____Placeholder_tx_queue_prio } tx_queue_prio ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct e1000_hw *VAR_3, int VAR_4,
       enum tx_queue_prio VAR_5)
{
 u32 VAR_6;

 FUNC_1(VAR_3->mac.type != VAR_2);
 FUNC_1(VAR_4 < 0 || VAR_4 > 4);

 VAR_6 = FUNC_2(FUNC_0(VAR_4));

 if (VAR_5 == VAR_1)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;

 FUNC_3(FUNC_0(VAR_4), VAR_6);
}
