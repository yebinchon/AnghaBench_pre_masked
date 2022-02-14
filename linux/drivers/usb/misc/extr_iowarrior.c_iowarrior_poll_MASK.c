
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iowarrior {int write_busy; int present; int write_wait; int read_wait; } ;
struct file {struct iowarrior* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (struct iowarrior*) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_7, poll_table * VAR_8)
{
 struct iowarrior *VAR_9 = VAR_7->private_data;
 __poll_t VAR_10 = 0;

 if (!VAR_9->present)
  return VAR_0 | VAR_1;

 FUNC_1(VAR_7, &VAR_9->read_wait, VAR_8);
 FUNC_1(VAR_7, &VAR_9->write_wait, VAR_8);

 if (!VAR_9->present)
  return VAR_0 | VAR_1;

 if (FUNC_2(VAR_9) != -1)
  VAR_10 |= VAR_2 | VAR_4;

 if (FUNC_0(&VAR_9->write_busy) < VAR_6)
  VAR_10 |= VAR_3 | VAR_5;
 return VAR_10;
}
