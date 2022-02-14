
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct goldfish_pipe_dev {int lock; struct goldfish_pipe* first_signalled_pipe; } ;
struct goldfish_pipe {int signalled_flags; struct goldfish_pipe* next_signalled; int * prev_signalled; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct goldfish_pipe *FUNC_2(
  struct goldfish_pipe_dev *VAR_0, int *VAR_1)
{
 struct goldfish_pipe *VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_0->lock, VAR_3);

 VAR_2 = VAR_0->first_signalled_pipe;
 if (VAR_2) {
  *VAR_1 = VAR_2->signalled_flags;
  VAR_2->signalled_flags = 0;






  VAR_0->first_signalled_pipe = VAR_2->next_signalled;
  if (VAR_0->first_signalled_pipe)
   VAR_0->first_signalled_pipe->prev_signalled = ((void*)0);
  VAR_2->next_signalled = ((void*)0);
 }

 FUNC_1(&VAR_0->lock, VAR_3);
 return VAR_2;
}
