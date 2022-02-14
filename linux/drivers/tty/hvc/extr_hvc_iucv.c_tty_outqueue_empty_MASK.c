
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvc_iucv_private {int lock; int tty_outqueue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct hvc_iucv_private *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->lock);
 VAR_1 = FUNC_0(&VAR_0->tty_outqueue);
 FUNC_2(&VAR_0->lock);

 return VAR_1;
}
