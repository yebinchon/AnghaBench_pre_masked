
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_lockowner {int dummy; } ;
struct file_lock {scalar_t__ fl_owner; } ;


 int FUNC_0 (struct nlm_lockowner*) ;

__attribute__((used)) static void FUNC_1(struct file_lock *VAR_0)
{
 FUNC_0((struct nlm_lockowner *)VAR_0->fl_owner);
}
