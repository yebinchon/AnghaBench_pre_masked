
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct goldfish_pipe {int flags; int wake_queue; } ;
struct file {struct goldfish_pipe* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct goldfish_pipe*,int ) ;
 int FUNC_1 (struct file*,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_12, poll_table *VAR_13)
{
 struct goldfish_pipe *VAR_14 = VAR_12->private_data;
 __poll_t VAR_15 = 0;
 int VAR_16;

 FUNC_1(VAR_12, &VAR_14->wake_queue, VAR_13);

 VAR_16 = FUNC_0(VAR_14, VAR_8);
 if (VAR_16 < 0)
  return -VAR_7;

 if (VAR_16 & VAR_10)
  VAR_15 |= VAR_3 | VAR_5;
 if (VAR_16 & VAR_11)
  VAR_15 |= VAR_4 | VAR_6;
 if (VAR_16 & VAR_9)
  VAR_15 |= VAR_2;
 if (FUNC_2(VAR_0, &VAR_14->flags))
  VAR_15 |= VAR_1;

 return VAR_15;
}
