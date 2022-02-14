
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int dummy; } ;
struct pid_namespace {int dummy; } ;
struct path {int dentry; } ;
struct kstat {int gid; int uid; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct kstat*) ;
 int FUNC_2 (struct pid_namespace*,struct task_struct*,int ) ;
 struct task_struct* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct inode*) ;
 struct pid_namespace* FUNC_5 (struct inode*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct task_struct*,int ,int *,int *) ;

int FUNC_9(const struct path *VAR_5, struct kstat *VAR_6,
  u32 VAR_7, unsigned int VAR_8)
{
 struct inode *VAR_9 = FUNC_0(VAR_5->dentry);
 struct pid_namespace *VAR_10 = FUNC_5(VAR_9);
 struct task_struct *VAR_11;

 FUNC_1(VAR_9, VAR_6);

 VAR_6->uid = VAR_2;
 VAR_6->gid = VAR_1;
 FUNC_6();
 VAR_11 = FUNC_3(FUNC_4(VAR_9), VAR_4);
 if (VAR_11) {
  if (!FUNC_2(VAR_10, VAR_11, VAR_3)) {
   FUNC_7();




   return -VAR_0;
  }
  FUNC_8(VAR_11, VAR_9->i_mode, &VAR_6->uid, &VAR_6->gid);
 }
 FUNC_7();
 return 0;
}
