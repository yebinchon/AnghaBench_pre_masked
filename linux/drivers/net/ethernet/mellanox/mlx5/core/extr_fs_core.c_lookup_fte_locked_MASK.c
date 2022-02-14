
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int active; } ;
struct mlx5_flow_group {TYPE_1__ node; int ftes_hash; } ;
struct fs_fte {TYPE_1__ node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_2 ;
 struct fs_fte* FUNC_2 (int *,int const*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static struct fs_fte *
FUNC_7(struct mlx5_flow_group *VAR_3,
    const u32 *VAR_4,
    bool VAR_5)
{
 struct fs_fte *VAR_6;

 if (VAR_5)
  FUNC_1(&VAR_3->node, VAR_1);
 else
  FUNC_0(&VAR_3->node, VAR_1);
 VAR_6 = FUNC_2(&VAR_3->ftes_hash, VAR_4,
      VAR_2);
 if (!VAR_6 || !FUNC_3(&VAR_6->node)) {
  VAR_6 = ((void*)0);
  goto out;
 }
 if (!VAR_6->node.active) {
  FUNC_4(&VAR_6->node, 0);
  VAR_6 = ((void*)0);
  goto out;
 }

 FUNC_1(&VAR_6->node, VAR_0);
out:
 if (VAR_5)
  FUNC_6(&VAR_3->node, 0);
 else
  FUNC_5(&VAR_3->node);
 return VAR_6;
}
