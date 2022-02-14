
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct procdata {int rd_queue; } ;
struct log_data {int dummy; } ;
struct file {int f_mode; scalar_t__ private_data; } ;
typedef int poll_table ;
struct TYPE_3__ {struct procdata* proclog; } ;
typedef TYPE_1__ hysdn_card ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t
FUNC_3(struct file *VAR_4, poll_table *VAR_5)
{
 __poll_t VAR_6 = 0;
 hysdn_card *VAR_7 = FUNC_0(FUNC_1(VAR_4));
 struct procdata *VAR_8 = VAR_7->proclog;

 if ((VAR_4->f_mode & (VAR_2 | VAR_3)) == VAR_3)
  return (VAR_6);

 FUNC_2(VAR_4, &(VAR_8->rd_queue), VAR_5);

 if (*((struct log_data **) VAR_4->private_data))
  VAR_6 |= VAR_0 | VAR_1;

 return VAR_6;
}
