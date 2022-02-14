
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct goldfish_pipe_dev {size_t pipes_capacity; struct goldfish_pipe* first_signalled_pipe; struct goldfish_pipe** pipes; } ;
struct goldfish_pipe {size_t signalled_flags; struct goldfish_pipe* prev_signalled; struct goldfish_pipe* next_signalled; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct goldfish_pipe_dev *VAR_0,
           u32 VAR_1, u32 VAR_2)
{
 struct goldfish_pipe *VAR_3;

 if (FUNC_0(VAR_1 >= VAR_0->pipes_capacity))
  return;

 VAR_3 = VAR_0->pipes[VAR_1];
 if (!VAR_3)
  return;
 VAR_3->signalled_flags |= VAR_2;

 if (VAR_3->prev_signalled || VAR_3->next_signalled ||
  VAR_0->first_signalled_pipe == VAR_3)
  return;
 VAR_3->next_signalled = VAR_0->first_signalled_pipe;
 if (VAR_0->first_signalled_pipe)
  VAR_0->first_signalled_pipe->prev_signalled = VAR_3;
 VAR_0->first_signalled_pipe = VAR_3;
}
