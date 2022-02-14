
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imgu_media_pipe {TYPE_1__* queues; } ;
struct imgu_device {struct imgu_media_pipe* imgu_pipe; } ;
struct TYPE_2__ {int dmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 size_t* VAR_3 ;
 int FUNC_0 (struct imgu_device*,int *,size_t) ;
 int FUNC_1 (struct imgu_device*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct imgu_device *VAR_4,
          unsigned int VAR_5)
{
 unsigned int VAR_6;
 size_t VAR_7;
 struct imgu_media_pipe *VAR_8 = &VAR_4->imgu_pipe[VAR_5];

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_7 = VAR_3[VAR_6];





  if (VAR_6 == VAR_1 || VAR_7 == 0)
   continue;

  if (!FUNC_0(VAR_4,
           &VAR_8->queues[VAR_6].dmap, VAR_7)) {
   FUNC_1(VAR_4, VAR_5);
   return -VAR_0;
  }
 }

 return 0;
}
