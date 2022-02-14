
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ibmasmfs_event_data {int reader; int sp; } ;
struct file {struct ibmasmfs_event_data* private_data; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ibmasmfs_event_data*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct ibmasmfs_event_data *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2->sp, &VAR_2->reader);
 FUNC_1(VAR_2);
 return 0;
}
