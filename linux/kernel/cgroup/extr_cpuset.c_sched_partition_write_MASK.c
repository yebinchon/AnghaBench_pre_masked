
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_open_file {int dummy; } ;
struct cpuset {int css; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cpuset* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct cpuset*) ;
 int FUNC_5 (struct kernfs_open_file*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (struct cpuset*,int) ;

__attribute__((used)) static ssize_t FUNC_12(struct kernfs_open_file *VAR_5, char *VAR_6,
         size_t VAR_7, loff_t VAR_8)
{
 struct cpuset *VAR_9 = FUNC_0(FUNC_5(VAR_5));
 int VAR_10;
 int VAR_11 = -VAR_1;

 VAR_6 = FUNC_10(VAR_6);




 if (!FUNC_9(VAR_6, "root"))
  VAR_10 = VAR_3;
 else if (!FUNC_9(VAR_6, "member"))
  VAR_10 = VAR_2;
 else
  return -VAR_0;

 FUNC_1(&VAR_9->css);
 FUNC_3();
 FUNC_6(&VAR_4);
 if (!FUNC_4(VAR_9))
  goto out_unlock;

 VAR_11 = FUNC_11(VAR_9, VAR_10);
out_unlock:
 FUNC_7(&VAR_4);
 FUNC_8();
 FUNC_2(&VAR_9->css);
 return VAR_11 ?: VAR_7;
}
