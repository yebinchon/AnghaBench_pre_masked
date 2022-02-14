
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscsifrnt_info {int wq_pause; scalar_t__ waiting_pause; scalar_t__ callers; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vscsifrnt_info *VAR_0)
{
 VAR_0->callers--;
 if (VAR_0->callers)
  return;

 if (!VAR_0->waiting_pause)
  return;

 VAR_0->waiting_pause = 0;
 FUNC_0(&VAR_0->wq_pause);
}
