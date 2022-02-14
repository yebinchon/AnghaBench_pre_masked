
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_processor {int dummy; } ;
struct inode {struct service_processor* i_private; } ;
struct ibmasmfs_event_data {scalar_t__ active; struct service_processor* sp; int reader; } ;
struct file {struct ibmasmfs_event_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct service_processor*,int *) ;
 struct ibmasmfs_event_data* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_3, struct file *VAR_4)
{
 struct ibmasmfs_event_data *VAR_5;
 struct service_processor *VAR_6;

 if (!VAR_3->i_private)
  return -VAR_0;

 VAR_6 = VAR_3->i_private;

 VAR_5 = FUNC_1(sizeof(struct ibmasmfs_event_data), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 FUNC_0(VAR_6, &VAR_5->reader);

 VAR_5->sp = VAR_6;
 VAR_5->active = 0;
 VAR_4->private_data = VAR_5;
 return 0;
}
