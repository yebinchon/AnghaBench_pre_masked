
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct media_link {int flags; TYPE_1__* reverse; TYPE_2__* sink; TYPE_2__* source; } ;
struct TYPE_5__ {int entity; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_2__*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_1(struct media_link *VAR_2, u32 VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_0(VAR_2->source->entity, VAR_1,
    VAR_2->source, VAR_2->sink, VAR_3);
 if (VAR_4 < 0 && VAR_4 != -VAR_0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_2->sink->entity, VAR_1,
    VAR_2->sink, VAR_2->source, VAR_3);
 if (VAR_4 < 0 && VAR_4 != -VAR_0) {
  FUNC_0(VAR_2->source->entity, VAR_1,
      VAR_2->source, VAR_2->sink, VAR_2->flags);
  return VAR_4;
 }

 VAR_2->flags = VAR_3;
 VAR_2->reverse->flags = VAR_2->flags;

 return 0;
}
