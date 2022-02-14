
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_buffer {int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct pipe_buffer *VAR_2)
{
 if (VAR_2->ops == &VAR_1)
  VAR_2->ops = &VAR_0;
}
