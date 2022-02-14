
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vsp1_entity {struct vsp1_entity** sources; } ;
struct media_pad {size_t index; int entity; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vsp1_entity* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct media_pad *VAR_2,
           const struct media_pad *VAR_3,
           u32 VAR_4)
{
 struct vsp1_entity *VAR_5;
 struct vsp1_entity *VAR_6;

 VAR_5 = FUNC_0(VAR_3->entity);
 VAR_6 = FUNC_0(VAR_2->entity);

 if (VAR_4 & VAR_1) {

  if (VAR_5->sources[VAR_3->index])
   return -VAR_0;

  VAR_5->sources[VAR_3->index] = VAR_6;
 } else {
  VAR_5->sources[VAR_3->index] = ((void*)0);
 }

 return 0;
}
