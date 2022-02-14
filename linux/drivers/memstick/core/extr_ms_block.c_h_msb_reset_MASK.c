
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct msb_data {int state; } ;
struct memstick_request {int need_card_int; scalar_t__ error; } ;
struct memstick_dev {struct memstick_request current_mrq; } ;


 int FUNC_0 () ;


 int VAR_0 ;
 int VAR_1 ;
 struct msb_data* FUNC_1 (struct memstick_dev*) ;
 int FUNC_2 (struct memstick_request*,int ,int *,int) ;
 int FUNC_3 (struct msb_data*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct memstick_dev *VAR_2,
     struct memstick_request **VAR_3)
{
 u8 VAR_4 = VAR_0;
 struct msb_data *VAR_5 = FUNC_1(VAR_2);
 struct memstick_request *VAR_6 = *VAR_3 = &VAR_2->current_mrq;

 if (VAR_6->error)
  return FUNC_3(VAR_5, VAR_6->error);

 switch (VAR_5->state) {
 case 128:
  FUNC_2(VAR_6, VAR_1, &VAR_4, 1);
  VAR_6->need_card_int = 0;
  VAR_5->state = 129;
  return 0;
 case 129:
  return FUNC_3(VAR_5, 0);
 }
 FUNC_0();
}
