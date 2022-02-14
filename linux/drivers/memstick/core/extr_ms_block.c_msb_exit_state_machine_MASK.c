
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msb_data {int state; int exit_error; TYPE_1__* card; } ;
struct TYPE_2__ {int mrq_complete; int next_request; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct msb_data*) ;

__attribute__((used)) static int FUNC_3(struct msb_data *VAR_2, int VAR_3)
{
 FUNC_0(VAR_2->state == -1);

 VAR_2->state = -1;
 VAR_2->exit_error = VAR_3;
 VAR_2->card->next_request = VAR_1;


 if (VAR_3)
  FUNC_2(VAR_2);

 FUNC_1(&VAR_2->card->mrq_complete);
 return -VAR_0;
}
