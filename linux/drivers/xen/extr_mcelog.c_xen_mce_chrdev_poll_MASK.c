
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {scalar_t__ next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static __poll_t FUNC_1(struct file *VAR_4, poll_table *VAR_5)
{
 FUNC_0(VAR_4, &VAR_2, VAR_5);

 if (VAR_3.next)
  return VAR_0 | VAR_1;

 return 0;
}
