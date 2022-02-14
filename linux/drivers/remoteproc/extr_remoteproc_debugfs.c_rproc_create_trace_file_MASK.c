
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc_debug_trace {int dummy; } ;
struct rproc {int dev; int dbg_dir; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (char const*,int,int ,struct rproc_debug_trace*,int *) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;

struct dentry *FUNC_2(const char *VAR_1, struct rproc *VAR_2,
           struct rproc_debug_trace *VAR_3)
{
 struct dentry *VAR_4;

 VAR_4 = FUNC_0(VAR_1, 0400, VAR_2->dbg_dir, VAR_3,
        &VAR_0);
 if (!VAR_4) {
  FUNC_1(&VAR_2->dev, "failed to create debugfs trace entry\n");
  return ((void*)0);
 }

 return VAR_4;
}
