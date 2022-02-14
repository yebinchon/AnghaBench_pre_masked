
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct cros_ec_debugfs* private_data; } ;
struct TYPE_2__ {int tail; int head; } ;
struct cros_ec_debugfs {int log_mutex; TYPE_1__ log_buffer; int log_wq; } ;
typedef int poll_table ;
typedef int __poll_t ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_3,
          poll_table *VAR_4)
{
 struct cros_ec_debugfs *VAR_5 = VAR_3->private_data;
 __poll_t VAR_6 = 0;

 FUNC_3(VAR_3, &VAR_5->log_wq, VAR_4);

 FUNC_1(&VAR_5->log_mutex);
 if (FUNC_0(VAR_5->log_buffer.head,
       VAR_5->log_buffer.tail,
       VAR_2))
  VAR_6 |= VAR_0 | VAR_1;
 FUNC_2(&VAR_5->log_mutex);

 return VAR_6;
}
