
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_5, poll_table *VAR_6)
{
 FUNC_1(VAR_5, &VAR_4, VAR_6);
 if (FUNC_0(VAR_2, ((void*)0), 0, VAR_3))
  return VAR_0 | VAR_1;
 return 0;
}
