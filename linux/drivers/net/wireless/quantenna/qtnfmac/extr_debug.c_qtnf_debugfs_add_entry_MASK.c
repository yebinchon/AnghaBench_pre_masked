
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtnf_bus {int dbg_dir; int dev; } ;


 int FUNC_0 (int ,char const*,int ,int (*) (struct seq_file*,void*)) ;

void FUNC_1(struct qtnf_bus *VAR_0, const char *VAR_1,
       int (*VAR_2)(struct seq_file *VAR_3, void *VAR_4))
{
 FUNC_0(VAR_0->dev, VAR_1, VAR_0->dbg_dir, VAR_2);
}
