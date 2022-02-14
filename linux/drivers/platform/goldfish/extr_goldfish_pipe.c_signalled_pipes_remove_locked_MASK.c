
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct goldfish_pipe_dev {struct goldfish_pipe* first_signalled_pipe; } ;
struct goldfish_pipe {struct goldfish_pipe* next_signalled; TYPE_1__* prev_signalled; } ;
struct TYPE_2__ {struct goldfish_pipe* next_signalled; } ;



__attribute__((used)) static void FUNC_0(struct goldfish_pipe_dev *VAR_0,
       struct goldfish_pipe *VAR_1)
{
 if (VAR_1->prev_signalled)
  VAR_1->prev_signalled->next_signalled = VAR_1->next_signalled;
 if (VAR_1->next_signalled)
  VAR_1->next_signalled->prev_signalled = VAR_1->prev_signalled;
 if (VAR_1 == VAR_0->first_signalled_pipe)
  VAR_0->first_signalled_pipe = VAR_1->next_signalled;
 VAR_1->prev_signalled = ((void*)0);
 VAR_1->next_signalled = ((void*)0);
}
