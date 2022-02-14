
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imgu_media_pipe {TYPE_1__* queues; } ;
struct imgu_device {struct imgu_media_pipe* imgu_pipe; } ;
struct TYPE_2__ {int dmap; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct imgu_device*,int *) ;

__attribute__((used)) static void FUNC_1(struct imgu_device *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 struct imgu_media_pipe *VAR_4 = &VAR_1->imgu_pipe[VAR_2];

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_1,
     &VAR_4->queues[VAR_3].dmap);
}
