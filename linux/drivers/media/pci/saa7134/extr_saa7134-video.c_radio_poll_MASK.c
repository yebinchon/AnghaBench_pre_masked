
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int lock; } ;
struct saa6588_command {int poll_mask; int * event_list; struct file* instance; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct saa7134_dev*,int ,int ,int ,struct saa6588_command*) ;
 int FUNC_3 (struct file*,int *) ;
 struct saa7134_dev* FUNC_4 (struct file*) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_3, poll_table *VAR_4)
{
 struct saa7134_dev *VAR_5 = FUNC_4(VAR_3);
 struct saa6588_command VAR_6;
 __poll_t VAR_7 = FUNC_3(VAR_3, VAR_4);

 VAR_6.instance = VAR_3;
 VAR_6.event_list = VAR_4;
 VAR_6.poll_mask = 0;
 FUNC_0(&VAR_5->lock);
 FUNC_2(VAR_5, VAR_1, VAR_2, VAR_0, &VAR_6);
 FUNC_1(&VAR_5->lock);

 return VAR_7 | VAR_6.poll_mask;
}
