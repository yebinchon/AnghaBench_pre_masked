
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msb_data {int state; int int_polling; int exit_error; struct memstick_dev* card; } ;
struct memstick_dev {int (* next_request ) (struct memstick_dev*,struct memstick_request**) ;int mrq_complete; int host; int current_mrq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct msb_data *VAR_0, int (*VAR_1)
  (struct memstick_dev *VAR_2, struct memstick_request **VAR_3))
{
 struct memstick_dev *VAR_4 = VAR_0->card;

 FUNC_0(VAR_0->state != -1);
 VAR_0->int_polling = 0;
 VAR_0->state = 0;
 VAR_0->exit_error = 0;

 FUNC_1(&VAR_4->current_mrq, 0, sizeof(VAR_4->current_mrq));

 VAR_4->next_request = VAR_1;
 FUNC_2(VAR_4->host);
 FUNC_3(&VAR_4->mrq_complete);

 FUNC_0(VAR_0->state != -1);
 return VAR_0->exit_error;
}
