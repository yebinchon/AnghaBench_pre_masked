
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_rsc_debug {int type; TYPE_1__* fields; int root; void* object; struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;
struct dentry {int dummy; } ;
typedef enum dbg_rsc_type { ____Placeholder_dbg_rsc_type } dbg_rsc_type ;
struct TYPE_2__ {int i; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*,int,int ,TYPE_1__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct mlx5_rsc_debug* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct mlx5_rsc_debug*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct mlx5_core_dev *VAR_4, enum dbg_rsc_type VAR_5,
   struct dentry *VAR_6, struct mlx5_rsc_debug **VAR_7,
   int VAR_8, char **VAR_9, int VAR_10, void *VAR_11)
{
 struct mlx5_rsc_debug *VAR_12;
 char VAR_13[32];
 int VAR_14;

 VAR_12 = FUNC_2(FUNC_4(VAR_12, VAR_2, VAR_10), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->dev = VAR_4;
 VAR_12->object = VAR_11;
 VAR_12->type = VAR_5;
 FUNC_3(VAR_13, "0x%x", VAR_8);
 VAR_12->root = FUNC_0(VAR_13, VAR_6);

 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
  VAR_12->fields[VAR_14].i = VAR_14;
  FUNC_1(VAR_9[VAR_14], 0400, VAR_12->root, &VAR_12->fields[VAR_14],
        &VAR_3);
 }
 *VAR_7 = VAR_12;

 return 0;
}
