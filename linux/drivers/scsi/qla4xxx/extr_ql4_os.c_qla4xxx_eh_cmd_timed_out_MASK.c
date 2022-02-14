
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int device; } ;
struct iscsi_session {int dummy; } ;
struct iscsi_cls_session {scalar_t__ state; int lock; struct iscsi_session* dd_data; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct iscsi_cls_session* FUNC_3 (int ) ;

__attribute__((used)) static enum blk_eh_timer_return FUNC_4(struct scsi_cmnd *VAR_3)
{
 struct iscsi_cls_session *VAR_4;
 struct iscsi_session *VAR_5;
 unsigned long VAR_6;
 enum blk_eh_timer_return VAR_7 = VAR_0;

 VAR_4 = FUNC_3(FUNC_0(VAR_3->device));
 VAR_5 = VAR_4->dd_data;

 FUNC_1(&VAR_4->lock, VAR_6);
 if (VAR_4->state == VAR_2)
  VAR_7 = VAR_1;
 FUNC_2(&VAR_4->lock, VAR_6);

 return VAR_7;
}
