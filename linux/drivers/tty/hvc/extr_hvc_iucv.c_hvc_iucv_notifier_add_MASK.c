
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvc_struct {int dummy; } ;
struct hvc_iucv_private {int lock; int tty_state; } ;


 int VAR_0 ;
 struct hvc_iucv_private* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct hvc_struct *VAR_1, int VAR_2)
{
 struct hvc_iucv_private *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  return 0;

 FUNC_1(&VAR_3->lock);
 VAR_3->tty_state = VAR_0;
 FUNC_2(&VAR_3->lock);

 return 0;
}
