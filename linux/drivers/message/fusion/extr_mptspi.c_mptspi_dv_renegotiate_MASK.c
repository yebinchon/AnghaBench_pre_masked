
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_queue_wrapper {int work; struct _MPT_SCSI_HOST* hd; } ;
struct _MPT_SCSI_HOST {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct work_queue_wrapper* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct _MPT_SCSI_HOST *VAR_2)
{
 struct work_queue_wrapper *VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);

 if (!VAR_3)
  return;

 FUNC_0(&VAR_3->work, VAR_1);
 VAR_3->hd = VAR_2;

 FUNC_2(&VAR_3->work);
}
