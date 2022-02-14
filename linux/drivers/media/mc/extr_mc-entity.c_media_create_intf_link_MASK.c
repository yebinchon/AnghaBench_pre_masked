
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct media_link {int flags; int graph_obj; struct media_entity* entity; struct media_interface* intf; } ;
struct TYPE_2__ {int mdev; } ;
struct media_interface {TYPE_1__ graph_obj; int links; } ;
struct media_entity {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct media_link* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *) ;

struct media_link *FUNC_2(struct media_entity *VAR_2,
         struct media_interface *VAR_3,
         u32 VAR_4)
{
 struct media_link *VAR_5;

 VAR_5 = FUNC_0(&VAR_3->links);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->intf = VAR_3;
 VAR_5->entity = VAR_2;
 VAR_5->flags = VAR_4 | VAR_1;


 FUNC_1(VAR_3->graph_obj.mdev, VAR_0,
   &VAR_5->graph_obj);

 return VAR_5;
}
