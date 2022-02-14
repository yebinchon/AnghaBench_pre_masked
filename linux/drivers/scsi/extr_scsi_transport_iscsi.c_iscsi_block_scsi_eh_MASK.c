
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int device; } ;
struct iscsi_cls_session {scalar_t__ state; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct iscsi_cls_session* FUNC_4 (int ) ;

int FUNC_5(struct scsi_cmnd *VAR_3)
{
 struct iscsi_cls_session *VAR_4 =
   FUNC_4(FUNC_1(VAR_3->device));
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_2(&VAR_4->lock, VAR_5);
 while (VAR_4->state != VAR_2) {
  if (VAR_4->state == VAR_1) {
   VAR_6 = VAR_0;
   break;
  }
  FUNC_3(&VAR_4->lock, VAR_5);
  FUNC_0(1000);
  FUNC_2(&VAR_4->lock, VAR_5);
 }
 FUNC_3(&VAR_4->lock, VAR_5);
 return VAR_6;
}
