
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mspro_block_data {int mrq_handler; } ;
struct memstick_request {int dummy; } ;
struct memstick_dev {int next_request; struct memstick_request current_mrq; } ;


 struct mspro_block_data* FUNC_0 (struct memstick_dev*) ;

__attribute__((used)) static int FUNC_1(struct memstick_dev *VAR_0,
      struct memstick_request **VAR_1)
{
 struct mspro_block_data *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = &VAR_0->current_mrq;
 VAR_0->next_request = VAR_2->mrq_handler;
 return 0;
}
