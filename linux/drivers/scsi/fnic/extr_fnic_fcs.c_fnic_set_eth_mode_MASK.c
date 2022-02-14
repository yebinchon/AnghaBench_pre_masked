
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {int state; int fnic_lock; } ;
typedef enum fnic_state { ____Placeholder_fnic_state } fnic_state ;






 int FUNC_0 (struct fnic*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct fnic *VAR_0)
{
 unsigned long VAR_1;
 enum fnic_state VAR_2;
 int VAR_3;

 FUNC_1(&VAR_0->fnic_lock, VAR_1);
again:
 VAR_2 = VAR_0->state;
 switch (VAR_2) {
 case 129:
 case 130:
 default:
  VAR_0->state = 128;
  FUNC_2(&VAR_0->fnic_lock, VAR_1);

  VAR_3 = FUNC_0(VAR_0);

  FUNC_1(&VAR_0->fnic_lock, VAR_1);
  if (VAR_0->state != 128)
   goto again;
  if (VAR_3)
   VAR_0->state = VAR_2;
  break;

 case 128:
 case 131:
  break;
 }
 FUNC_2(&VAR_0->fnic_lock, VAR_1);
}
