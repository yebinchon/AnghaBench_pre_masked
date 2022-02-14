
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urfile {TYPE_1__* urd; } ;
struct inode {int dummy; } ;
struct file {struct urfile* private_data; } ;
struct TYPE_2__ {int wait; int open_lock; int open_flag; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct urfile*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct file *VAR_1)
{
 struct urfile *VAR_2 = VAR_1->private_data;

 FUNC_0("ur_release\n");
 FUNC_1(&VAR_2->urd->open_lock);
 VAR_2->urd->open_flag--;
 FUNC_2(&VAR_2->urd->open_lock);
 FUNC_5(&VAR_2->urd->wait);
 FUNC_3(VAR_2->urd);
 FUNC_4(VAR_2);
 return 0;
}
