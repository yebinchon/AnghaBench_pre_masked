
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct doorbell_queue* private_data; } ;
struct doorbell_queue {int list; } ;


 int VAR_0 ;
 int FUNC_0 (struct doorbell_queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct file *VAR_2)
{
 struct doorbell_queue *VAR_3 = VAR_2->private_data;
 unsigned long VAR_4;

 int VAR_5 = 0;

 FUNC_2(&VAR_0, VAR_4);
 FUNC_1(&VAR_3->list);
 FUNC_3(&VAR_0, VAR_4);

 FUNC_0(VAR_3);

 return VAR_5;
}
