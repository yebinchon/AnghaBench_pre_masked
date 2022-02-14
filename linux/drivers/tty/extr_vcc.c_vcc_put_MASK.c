
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcc_port {int excl_locked; int refcnt; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct vcc_port *VAR_1, bool VAR_2)
{
 unsigned long VAR_3;

 if (!VAR_1)
  return;

 FUNC_1(&VAR_0, VAR_3);


 if (FUNC_0((VAR_2 && !VAR_1->excl_locked) ||
      (!VAR_2 && VAR_1->excl_locked)))
  goto done;

 VAR_1->refcnt--;

 if (VAR_2)
  VAR_1->excl_locked = 0;

done:
 FUNC_2(&VAR_0, VAR_3);
}
