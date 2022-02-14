
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int orphan_dirs; } ;
struct orphan_dir_info {int node; } ;


 int FUNC_0 (struct orphan_dir_info*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct send_ctx *VAR_0,
     struct orphan_dir_info *VAR_1)
{
 if (!VAR_1)
  return;
 FUNC_1(&VAR_1->node, &VAR_0->orphan_dirs);
 FUNC_0(VAR_1);
}
