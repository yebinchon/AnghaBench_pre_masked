
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct media_pad {unsigned int index; int graph_obj; struct media_entity* entity; } ;
struct TYPE_2__ {struct media_device* mdev; } ;
struct media_entity {unsigned int num_pads; struct media_pad* pads; TYPE_1__ graph_obj; } ;
struct media_device {int graph_mutex; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct media_device*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct media_entity *VAR_3, u16 VAR_4,
      struct media_pad *VAR_5)
{
 struct media_device *VAR_6 = VAR_3->graph_obj.mdev;
 unsigned int VAR_7;

 if (VAR_4 >= VAR_1)
  return -VAR_0;

 VAR_3->num_pads = VAR_4;
 VAR_3->pads = VAR_5;

 if (VAR_6)
  FUNC_1(&VAR_6->graph_mutex);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_5[VAR_7].entity = VAR_3;
  VAR_5[VAR_7].index = VAR_7;
  if (VAR_6)
   FUNC_0(VAR_6, VAR_2,
     &VAR_3->pads[VAR_7].graph_obj);
 }

 if (VAR_6)
  FUNC_2(&VAR_6->graph_mutex);

 return 0;
}
