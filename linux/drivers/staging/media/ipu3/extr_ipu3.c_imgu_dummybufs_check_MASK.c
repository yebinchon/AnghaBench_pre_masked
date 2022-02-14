
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imgu_media_pipe {TYPE_1__* queues; } ;
struct imgu_device {struct imgu_media_pipe* imgu_pipe; } ;
struct imgu_css_buffer {size_t queue; } ;
struct TYPE_2__ {struct imgu_css_buffer* dummybufs; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct imgu_device *VAR_1,
     struct imgu_css_buffer *VAR_2,
     unsigned int VAR_3)
{
 unsigned int VAR_4;
 struct imgu_media_pipe *VAR_5 = &VAR_1->imgu_pipe[VAR_3];

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_2 == &VAR_5->queues[VAR_2->queue].dummybufs[VAR_4])
   break;

 return VAR_4 < VAR_0;
}
