
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct rproc {int dbg_dir; struct device dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,int ,struct rproc*,int *) ;
 int FUNC_2 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_3(struct rproc *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;

 if (!VAR_2)
  return;

 VAR_6->dbg_dir = FUNC_0(FUNC_2(VAR_7), VAR_2);
 if (!VAR_6->dbg_dir)
  return;

 FUNC_1("name", 0400, VAR_6->dbg_dir,
       VAR_6, &VAR_3);
 FUNC_1("recovery", 0400, VAR_6->dbg_dir,
       VAR_6, &VAR_4);
 FUNC_1("crash", 0200, VAR_6->dbg_dir,
       VAR_6, &VAR_1);
 FUNC_1("resource_table", 0400, VAR_6->dbg_dir,
       VAR_6, &VAR_5);
 FUNC_1("carveout_memories", 0400, VAR_6->dbg_dir,
       VAR_6, &VAR_0);
}
