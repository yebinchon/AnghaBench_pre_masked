
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* ape_voltage_status; void* ape_opp; void* arm_opp; void* header; } ;
struct TYPE_4__ {int work; TYPE_1__ ack; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_5 ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static bool FUNC_4(void)
{
 VAR_5.ack.header = FUNC_2(VAR_6 + VAR_4);
 VAR_5.ack.arm_opp = FUNC_2(VAR_6 +
  VAR_2);
 VAR_5.ack.ape_opp = FUNC_2(VAR_6 +
  VAR_1);
 VAR_5.ack.ape_voltage_status = FUNC_2(VAR_6 +
  VAR_0);
 FUNC_3(FUNC_0(1), VAR_3);
 FUNC_1(&VAR_5.work);
 return 0;
}
