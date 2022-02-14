
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_session {scalar_t__ state; int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(struct iscsi_cls_session *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3 = 0;

 FUNC_0(&VAR_1->lock, VAR_2);
 if (VAR_1->state == VAR_0)
  VAR_3 = 1;
 FUNC_1(&VAR_1->lock, VAR_2);
 return VAR_3;
}
