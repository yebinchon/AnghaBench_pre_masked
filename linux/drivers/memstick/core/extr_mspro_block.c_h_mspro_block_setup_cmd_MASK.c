
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ u64 ;
struct mspro_param_register {int data_address; int tpc_param; int data_count; int system; } ;
struct mspro_block_data {size_t page_size; int mrq_handler; int system; } ;
struct memstick_dev {int current_mrq; int next_request; } ;
typedef int param ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mspro_block_data* FUNC_3 (struct memstick_dev*) ;
 int FUNC_4 (int *,int ,struct mspro_param_register*,int) ;

__attribute__((used)) static void FUNC_5(struct memstick_dev *VAR_3, u64 VAR_4,
        size_t VAR_5)
{
 struct mspro_block_data *VAR_6 = FUNC_3(VAR_3);
 struct mspro_param_register VAR_7 = {
  .system = VAR_6->system,
  .data_count = FUNC_0((uint16_t)(VAR_5 / VAR_6->page_size)),

  .data_address = 0,
  .tpc_param = 0
 };

 FUNC_2(VAR_4, VAR_6->page_size);
 VAR_7.data_address = FUNC_1((uint32_t)VAR_4);

 VAR_3->next_request = VAR_1;
 VAR_6->mrq_handler = VAR_2;
 FUNC_4(&VAR_3->current_mrq, VAR_0,
     &VAR_7, sizeof(VAR_7));
}
