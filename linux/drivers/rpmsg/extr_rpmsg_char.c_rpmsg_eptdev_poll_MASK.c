
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_eptdev {int ept; int queue; int readq; } ;
struct file {struct rpmsg_eptdev* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int ,struct file*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_3, poll_table *VAR_4)
{
 struct rpmsg_eptdev *VAR_5 = VAR_3->private_data;
 __poll_t VAR_6 = 0;

 if (!VAR_5->ept)
  return VAR_0;

 FUNC_0(VAR_3, &VAR_5->readq, VAR_4);

 if (!FUNC_2(&VAR_5->queue))
  VAR_6 |= VAR_1 | VAR_2;

 VAR_6 |= FUNC_1(VAR_5->ept, VAR_3, VAR_4);

 return VAR_6;
}
