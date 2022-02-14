
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ksz_switch {int member; TYPE_1__* port_cfg; } ;
struct ksz_hw {struct ksz_switch* ksz_switch; } ;
struct TYPE_2__ {scalar_t__ stp_state; int member; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ksz_hw*,int,int ) ;
 int FUNC_1 (struct ksz_hw*) ;
 int FUNC_2 (struct ksz_hw*,int,int) ;

__attribute__((used)) static void FUNC_3(struct ksz_hw *VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 struct ksz_switch *VAR_7 = VAR_4->ksz_switch;


 if (!VAR_7->member) {
  FUNC_0(VAR_4, VAR_3, VAR_2);
  FUNC_1(VAR_4);
 }
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_1 == VAR_7->port_cfg[VAR_5].stp_state)
   VAR_6 = VAR_0 | VAR_7->member;
  else
   VAR_6 = VAR_0 | (1 << VAR_5);
  if (VAR_6 != VAR_7->port_cfg[VAR_5].member)
   FUNC_2(VAR_4, VAR_5, VAR_6);
 }
}
