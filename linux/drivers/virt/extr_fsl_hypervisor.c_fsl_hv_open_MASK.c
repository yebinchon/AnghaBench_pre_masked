
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct doorbell_queue* private_data; } ;
struct doorbell_queue {int list; int wait; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct doorbell_queue* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_4, struct file *VAR_5)
{
 struct doorbell_queue *VAR_6;
 unsigned long VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_1(sizeof(struct doorbell_queue), VAR_1);
 if (!VAR_6) {
  FUNC_3("fsl-hv: out of memory\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_6->lock);
 FUNC_0(&VAR_6->wait);

 FUNC_5(&VAR_3, VAR_7);
 FUNC_2(&VAR_6->list, &VAR_2);
 FUNC_6(&VAR_3, VAR_7);

 VAR_5->private_data = VAR_6;

 return VAR_8;
}
