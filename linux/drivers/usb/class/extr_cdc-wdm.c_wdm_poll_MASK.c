
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdm_device {int wait; int iuspin; int flags; scalar_t__ werr; scalar_t__ rerr; } ;
struct poll_table_struct {int dummy; } ;
struct file {struct wdm_device* private_data; } ;
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
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_9, struct poll_table_struct *VAR_10)
{
 struct wdm_device *VAR_11 = VAR_9->private_data;
 unsigned long VAR_12;
 __poll_t VAR_13 = 0;

 FUNC_1(&VAR_11->iuspin, VAR_12);
 if (FUNC_3(VAR_6, &VAR_11->flags)) {
  VAR_13 = VAR_1 | VAR_0;
  FUNC_2(&VAR_11->iuspin, VAR_12);
  goto desc_out;
 }
 if (FUNC_3(VAR_8, &VAR_11->flags))
  VAR_13 = VAR_2 | VAR_4;
 if (VAR_11->rerr || VAR_11->werr)
  VAR_13 |= VAR_0;
 if (!FUNC_3(VAR_7, &VAR_11->flags))
  VAR_13 |= VAR_3 | VAR_5;
 FUNC_2(&VAR_11->iuspin, VAR_12);

 FUNC_0(VAR_9, &VAR_11->wait, VAR_10);

desc_out:
 return VAR_13;
}
