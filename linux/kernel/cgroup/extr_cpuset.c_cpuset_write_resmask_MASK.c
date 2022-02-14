
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_open_file {int kn; } ;
struct cpuset {int css; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 struct cpuset* FUNC_0 (struct cpuset*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cpuset* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct cpuset*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct cpuset*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 TYPE_1__* FUNC_11 (struct kernfs_open_file*) ;
 int FUNC_12 (struct kernfs_open_file*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 char* FUNC_16 (char*) ;
 int FUNC_17 (struct cpuset*,struct cpuset*,char*) ;
 int FUNC_18 (struct cpuset*,struct cpuset*,char*) ;

__attribute__((used)) static ssize_t FUNC_19(struct kernfs_open_file *VAR_6,
        char *VAR_7, size_t VAR_8, loff_t VAR_9)
{
 struct cpuset *VAR_10 = FUNC_1(FUNC_12(VAR_6));
 struct cpuset *VAR_11;
 int VAR_12 = -VAR_1;

 VAR_7 = FUNC_16(VAR_7);
 FUNC_2(&VAR_10->css);
 FUNC_9(VAR_6->kn);
 FUNC_4(&VAR_3);

 FUNC_7();
 FUNC_13(&VAR_5);
 if (!FUNC_8(VAR_10))
  goto out_unlock;

 VAR_11 = FUNC_0(VAR_10);
 if (!VAR_11) {
  VAR_12 = -VAR_2;
  goto out_unlock;
 }

 switch (FUNC_11(VAR_6)->private) {
 case 129:
  VAR_12 = FUNC_17(VAR_10, VAR_11, VAR_7);
  break;
 case 128:
  VAR_12 = FUNC_18(VAR_10, VAR_11, VAR_7);
  break;
 default:
  VAR_12 = -VAR_0;
  break;
 }

 FUNC_6(VAR_11);
out_unlock:
 FUNC_14(&VAR_5);
 FUNC_15();
 FUNC_10(VAR_6->kn);
 FUNC_3(&VAR_10->css);
 FUNC_5(VAR_4);
 return VAR_12 ?: VAR_8;
}
