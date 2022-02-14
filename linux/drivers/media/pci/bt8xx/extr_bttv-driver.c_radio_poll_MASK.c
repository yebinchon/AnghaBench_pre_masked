
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa6588_command {int poll_mask; int * event_list; struct file* instance; } ;
struct file {struct bttv_fh* private_data; } ;
struct TYPE_2__ {int wait; } ;
struct bttv_fh {TYPE_1__ fh; struct bttv* btv; } ;
struct bttv {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bttv*,int ,int ,int ,struct saa6588_command*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;
 int FUNC_3 (struct bttv*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_4, poll_table *VAR_5)
{
 struct bttv_fh *VAR_6 = VAR_4->private_data;
 struct bttv *VAR_7 = VAR_6->btv;
 __poll_t VAR_8 = FUNC_1(VAR_5);
 struct saa6588_command VAR_9;
 __poll_t VAR_10 = 0;

 if (FUNC_4(&VAR_6->fh))
  VAR_10 = VAR_0;
 else if (VAR_8 & VAR_0)
  FUNC_2(VAR_4, &VAR_6->fh.wait, VAR_5);
 FUNC_3(VAR_7);
 VAR_9.instance = VAR_4;
 VAR_9.event_list = VAR_5;
 VAR_9.poll_mask = VAR_10;
 FUNC_0(VAR_7, VAR_2, VAR_3, VAR_1, &VAR_9);

 return VAR_9.poll_mask;
}
