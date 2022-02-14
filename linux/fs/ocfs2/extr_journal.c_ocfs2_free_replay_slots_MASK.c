
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {struct ocfs2_replay_map* replay_map; } ;
struct ocfs2_replay_map {int dummy; } ;


 int FUNC_0 (struct ocfs2_replay_map*) ;

__attribute__((used)) static void FUNC_1(struct ocfs2_super *VAR_0)
{
 struct ocfs2_replay_map *VAR_1 = VAR_0->replay_map;

 if (!VAR_0->replay_map)
  return;

 FUNC_0(VAR_1);
 VAR_0->replay_map = ((void*)0);
}
