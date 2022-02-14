
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int const u32 ;
struct media_link {int const flags; TYPE_2__* sink; TYPE_1__* source; } ;
struct TYPE_7__ {struct media_device* mdev; } ;
struct media_entity {TYPE_3__ graph_obj; scalar_t__ stream_count; } ;
struct media_device {TYPE_4__* ops; } ;
struct TYPE_8__ {int (* link_notify ) (struct media_link*,int const,int ) ;} ;
struct TYPE_6__ {struct media_entity* entity; } ;
struct TYPE_5__ {struct media_entity* entity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct media_link*,int const) ;
 int FUNC_1 (struct media_link*,int const,int ) ;
 int FUNC_2 (struct media_link*,int const,int ) ;

int FUNC_3(struct media_link *VAR_7, u32 VAR_8)
{
 const u32 VAR_9 = VAR_5;
 struct media_device *VAR_10;
 struct media_entity *VAR_11, *VAR_12;
 int VAR_13 = -VAR_0;

 if (VAR_7 == ((void*)0))
  return -VAR_1;


 if ((VAR_7->flags & ~VAR_9) != (VAR_8 & ~VAR_9))
  return -VAR_1;

 if (VAR_7->flags & VAR_6)
  return VAR_7->flags == VAR_8 ? 0 : -VAR_1;

 if (VAR_7->flags == VAR_8)
  return 0;

 VAR_11 = VAR_7->source->entity;
 VAR_12 = VAR_7->sink->entity;

 if (!(VAR_7->flags & VAR_4) &&
     (VAR_11->stream_count || VAR_12->stream_count))
  return -VAR_0;

 VAR_10 = VAR_11->graph_obj.mdev;

 if (VAR_10->ops && VAR_10->ops->link_notify) {
  VAR_13 = VAR_10->ops->link_notify(VAR_7, VAR_8,
          VAR_3);
  if (VAR_13 < 0)
   return VAR_13;
 }

 VAR_13 = FUNC_0(VAR_7, VAR_8);

 if (VAR_10->ops && VAR_10->ops->link_notify)
  VAR_10->ops->link_notify(VAR_7, VAR_8,
           VAR_2);

 return VAR_13;
}
