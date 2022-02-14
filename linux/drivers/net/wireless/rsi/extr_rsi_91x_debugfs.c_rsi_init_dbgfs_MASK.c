
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsi_hw {int num_debugfs_entries; TYPE_1__* hw; struct rsi_debugfs* dfsentry; struct rsi_common* priv; } ;
struct rsi_debugfs {int subdir; int * rsi_files; } ;
struct rsi_dbg_files {int fops; int perms; int name; } ;
struct rsi_common {int dummy; } ;
typedef int devdir ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int ,int ,int ,struct rsi_common*,int *) ;
 struct rsi_dbg_files* VAR_2 ;
 struct rsi_debugfs* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int,char*,char*) ;
 char* FUNC_4 (int ) ;

int FUNC_5(struct rsi_hw *VAR_3)
{
 struct rsi_common *VAR_4 = VAR_3->priv;
 struct rsi_debugfs *VAR_5;
 char VAR_6[6];
 int VAR_7;
 const struct rsi_dbg_files *VAR_8;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_3->dfsentry = VAR_5;

 FUNC_3(VAR_6, sizeof(VAR_6), "%s",
   FUNC_4(VAR_3->hw->wiphy));

 VAR_5->subdir = FUNC_0(VAR_6, ((void*)0));

 for (VAR_7 = 0; VAR_7 < VAR_3->num_debugfs_entries; VAR_7++) {
  VAR_8 = &VAR_2[VAR_7];
  VAR_5->rsi_files[VAR_7] =
  FUNC_1(VAR_8->name,
        VAR_8->perms,
        VAR_5->subdir,
        VAR_4,
        &VAR_8->fops);
 }
 return 0;
}
