
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcraid_instance {int aen_queue_lock; int aen_queue; } ;
struct file {struct pmcraid_instance* private_data; } ;


 int FUNC_0 (int,struct file*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(int VAR_0, struct file *VAR_1, int VAR_2)
{
 struct pmcraid_instance *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->private_data;
 FUNC_1(&VAR_3->aen_queue_lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3->aen_queue);
 FUNC_2(&VAR_3->aen_queue_lock);

 return VAR_4;
}
