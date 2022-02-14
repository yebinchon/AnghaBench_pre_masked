
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error; } ;
struct memstick_dev {TYPE_1__ current_mrq; int mrq_complete; int host; int next_request; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct memstick_dev *VAR_1)
{
 VAR_1->next_request = VAR_0;
 FUNC_0(VAR_1->host);
 FUNC_1(&VAR_1->mrq_complete);

 return VAR_1->current_mrq.error;
}
