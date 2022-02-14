
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct nvme_ctrl* private; } ;
struct nvme_ctrl {int cntlid; int instance; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 struct nvme_ctrl *VAR_4;
 int VAR_5 = 0;

 FUNC_0(&VAR_1);
 VAR_4 = VAR_2->private;
 if (!VAR_4) {
  VAR_5 = -VAR_0;
  goto out_unlock;
 }

 FUNC_2(VAR_2, "instance=%d,cntlid=%d\n",
   VAR_4->instance, VAR_4->cntlid);

out_unlock:
 FUNC_1(&VAR_1);
 return VAR_5;
}
