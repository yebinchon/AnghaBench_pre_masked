
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imgu_css_pipe {int qlock; TYPE_1__* queue; } ;
struct imgu_css {struct imgu_css_pipe* pipes; } ;
struct TYPE_2__ {int bufs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct imgu_css *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 struct imgu_css_pipe *VAR_4 = &VAR_1->pipes[VAR_2];

 FUNC_1(&VAR_4->qlock);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (!FUNC_0(&VAR_4->queue[VAR_3].bufs))
   break;
 FUNC_2(&VAR_4->qlock);
 return (VAR_3 == VAR_0);
}
