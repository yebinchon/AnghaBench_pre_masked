
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imgu_media_pipe {TYPE_2__* queues; } ;
struct imgu_device {struct imgu_media_pipe* imgu_pipe; } ;
struct imgu_css_buffer {int dummy; } ;
struct TYPE_3__ {int daddr; int vaddr; } ;
struct TYPE_4__ {struct imgu_css_buffer* dummybufs; TYPE_1__ dmap; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct imgu_css_buffer*,int,int ) ;
 scalar_t__ FUNC_2 (struct imgu_css_buffer*) ;

__attribute__((used)) static struct imgu_css_buffer *FUNC_3(struct imgu_device *VAR_3,
         int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;
 struct imgu_media_pipe *VAR_7 = &VAR_3->imgu_pipe[VAR_5];


 if (VAR_4 == VAR_2)
  return ((void*)0);

 if (FUNC_0(!VAR_7->queues[VAR_4].dmap.vaddr))

  return ((void*)0);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (FUNC_2(&VAR_7->queues[VAR_4].dummybufs[VAR_6]) !=
   VAR_1)
   break;

 if (VAR_6 == VAR_0)
  return ((void*)0);

 FUNC_1(&VAR_7->queues[VAR_4].dummybufs[VAR_6], VAR_4,
     VAR_7->queues[VAR_4].dmap.daddr);

 return &VAR_7->queues[VAR_4].dummybufs[VAR_6];
}
