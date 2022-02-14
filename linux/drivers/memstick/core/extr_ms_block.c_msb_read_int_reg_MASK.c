
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msb_data {int state; int int_polling; int caps; scalar_t__ int_timeout; TYPE_1__* card; } ;
struct memstick_request {int need_card_int; int int_reg; int * data; int error; } ;
struct TYPE_2__ {struct memstick_request current_mrq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct memstick_request*,int ,int *,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct msb_data *VAR_4, long VAR_5)
{
 struct memstick_request *VAR_6 = &VAR_4->card->current_mrq;

 FUNC_0(VAR_4->state == -1);

 if (!VAR_4->int_polling) {
  VAR_4->int_timeout = VAR_3 +
   FUNC_2(VAR_5 == -1 ? 500 : VAR_5);
  VAR_4->int_polling = 1;
 } else if (FUNC_3(VAR_3, VAR_4->int_timeout)) {
  VAR_6->data[0] = VAR_1;
  return 0;
 }

 if ((VAR_4->caps & VAR_0) &&
    VAR_6->need_card_int && !VAR_6->error) {
  VAR_6->data[0] = VAR_6->int_reg;
  VAR_6->need_card_int = 0;
  return 0;
 } else {
  FUNC_1(VAR_6, VAR_2, ((void*)0), 1);
  return 1;
 }
}
