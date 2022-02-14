
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vsp1_entity {scalar_t__ type; scalar_t__ sink_pad; struct vsp1_entity* sink; int route; } ;
struct media_pad {scalar_t__ index; int entity; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct vsp1_entity* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct media_pad *VAR_4,
      const struct media_pad *VAR_5,
      u32 VAR_6)
{
 struct vsp1_entity *VAR_7;

 VAR_7 = FUNC_0(VAR_4->entity);

 if (!VAR_7->route)
  return 0;

 if (VAR_6 & VAR_1) {
  struct vsp1_entity *VAR_8
   = FUNC_0(VAR_5->entity);





  if (VAR_8->type != VAR_2 &&
      VAR_8->type != VAR_3) {
   if (VAR_7->sink)
    return -VAR_0;
   VAR_7->sink = VAR_8;
   VAR_7->sink_pad = VAR_5->index;
  }
 } else {
  VAR_7->sink = ((void*)0);
  VAR_7->sink_pad = 0;
 }

 return 0;
}
