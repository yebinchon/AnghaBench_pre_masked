
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int wait; } ;
struct TYPE_3__ {int flags; TYPE_2__ wq; } ;
struct tap_queue {int sk; TYPE_1__ sock; int ring; } ;
struct file {struct tap_queue* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_6, poll_table *VAR_7)
{
 struct tap_queue *VAR_8 = VAR_6->private_data;
 __poll_t VAR_9 = VAR_0;

 if (!VAR_8)
  goto out;

 VAR_9 = 0;
 FUNC_0(VAR_6, &VAR_8->sock.wq.wait, VAR_7);

 if (!FUNC_1(&VAR_8->ring))
  VAR_9 |= VAR_1 | VAR_3;

 if (FUNC_2(&VAR_8->sk) ||
     (!FUNC_3(VAR_5, &VAR_8->sock.flags) &&
      FUNC_2(&VAR_8->sk)))
  VAR_9 |= VAR_2 | VAR_4;

out:
 return VAR_9;
}
