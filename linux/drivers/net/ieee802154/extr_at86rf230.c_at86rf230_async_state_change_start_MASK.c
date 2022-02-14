
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct at86rf230_state_change {scalar_t__ const to_state; scalar_t__ from_state; int (* complete ) (void*) ;scalar_t__* buf; struct at86rf230_local* lp; } ;
struct at86rf230_local {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct at86rf230_local*,int ,struct at86rf230_state_change*,void (*) (void*)) ;
 int VAR_4 ;
 int FUNC_1 (struct at86rf230_local*,int ,scalar_t__ const,struct at86rf230_state_change*,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_5)
{
 struct at86rf230_state_change *VAR_6 = VAR_5;
 struct at86rf230_local *VAR_7 = VAR_6->lp;
 u8 *VAR_8 = VAR_6->buf;
 const u8 VAR_9 = VAR_8[1] & VAR_3;


 if (VAR_9 == VAR_2) {
  FUNC_3(1);
  FUNC_0(VAR_7, VAR_1, VAR_6,
      FUNC_4);
  return;
 }


 if (VAR_9 == VAR_6->to_state) {
  if (VAR_6->complete)
   VAR_6->complete(VAR_5);
  return;
 }


 VAR_6->from_state = VAR_9;




 FUNC_1(VAR_7, VAR_0, VAR_6->to_state, VAR_6,
      VAR_4);
}
