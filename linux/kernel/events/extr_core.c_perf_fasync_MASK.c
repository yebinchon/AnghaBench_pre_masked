
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int fasync; } ;
struct inode {int dummy; } ;
struct file {struct perf_event* private_data; } ;


 int FUNC_0 (int,struct file*,int,int *) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static int FUNC_4(int VAR_0, struct file *VAR_1, int VAR_2)
{
 struct inode *VAR_3 = FUNC_1(VAR_1);
 struct perf_event *VAR_4 = VAR_1->private_data;
 int VAR_5;

 FUNC_2(VAR_3);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4->fasync);
 FUNC_3(VAR_3);

 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
