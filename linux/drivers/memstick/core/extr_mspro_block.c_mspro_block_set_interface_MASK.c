
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mspro_param_register {unsigned char system; int tpc_param; int data_address; int data_count; } ;
struct mspro_block_data {int mrq_handler; } ;
struct memstick_host {int dummy; } ;
struct TYPE_2__ {int error; } ;
struct memstick_dev {TYPE_1__ current_mrq; int mrq_complete; int next_request; struct memstick_host* host; } ;
typedef int param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mspro_block_data* FUNC_0 (struct memstick_dev*) ;
 int FUNC_1 (TYPE_1__*,int ,struct mspro_param_register*,int) ;
 int FUNC_2 (struct memstick_host*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct memstick_dev *VAR_3,
         unsigned char VAR_4)
{
 struct memstick_host *VAR_5 = VAR_3->host;
 struct mspro_block_data *VAR_6 = FUNC_0(VAR_3);
 struct mspro_param_register VAR_7 = {
  .system = VAR_4,
  .data_count = 0,
  .data_address = 0,
  .tpc_param = 0
 };

 VAR_3->next_request = VAR_2;
 VAR_6->mrq_handler = VAR_1;
 FUNC_1(&VAR_3->current_mrq, VAR_0, &VAR_7,
     sizeof(VAR_7));
 FUNC_2(VAR_5);
 FUNC_3(&VAR_3->mrq_complete);
 return VAR_3->current_mrq.error;
}
