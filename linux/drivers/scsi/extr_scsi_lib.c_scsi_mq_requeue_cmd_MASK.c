
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* request; } ;
struct TYPE_2__ {int rq_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_3(struct scsi_cmnd *VAR_1)
{
 if (VAR_1->request->rq_flags & VAR_0) {
  VAR_1->request->rq_flags &= ~VAR_0;
  FUNC_2(VAR_1);
 } else {
  FUNC_0(1);
 }
 FUNC_1(VAR_1->request, 1);
}
