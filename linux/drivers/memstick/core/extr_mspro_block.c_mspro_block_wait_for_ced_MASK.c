
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mspro_block_data {int mrq_handler; } ;
struct TYPE_2__ {int error; } ;
struct memstick_dev {TYPE_1__ current_mrq; int mrq_complete; int host; int next_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mspro_block_data* FUNC_0 (struct memstick_dev*) ;
 int FUNC_1 (TYPE_1__*,int ,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct memstick_dev *VAR_3)
{
 struct mspro_block_data *VAR_4 = FUNC_0(VAR_3);

 VAR_3->next_request = VAR_1;
 VAR_4->mrq_handler = VAR_2;
 FUNC_1(&VAR_3->current_mrq, VAR_0, ((void*)0), 1);
 FUNC_2(VAR_3->host);
 FUNC_3(&VAR_3->mrq_complete);
 return VAR_3->current_mrq.error;
}
