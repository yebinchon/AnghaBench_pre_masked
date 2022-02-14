
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int state; } ;
struct carl9170_rsp {TYPE_1__ psm; } ;
struct TYPE_4__ {int state; scalar_t__ last_action; int sleep_ms; } ;
struct ar9170 {TYPE_2__ ps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ar9170 *VAR_3, struct carl9170_rsp *VAR_4)
{
 u32 VAR_5;
 bool VAR_6;

 VAR_5 = FUNC_1(VAR_4->psm.state);

 VAR_6 = (VAR_5 & VAR_0) != VAR_1;
 if (VAR_3->ps.state != VAR_6) {
  if (!VAR_6) {
   VAR_3->ps.sleep_ms = FUNC_0(VAR_2 -
    VAR_3->ps.last_action);
  }

  VAR_3->ps.last_action = VAR_2;

  VAR_3->ps.state = VAR_6;
 }
}
