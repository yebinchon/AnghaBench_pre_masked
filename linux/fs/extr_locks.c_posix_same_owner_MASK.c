
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {scalar_t__ fl_owner; } ;



__attribute__((used)) static int FUNC_0(struct file_lock *VAR_0, struct file_lock *VAR_1)
{
 return VAR_0->fl_owner == VAR_1->fl_owner;
}
