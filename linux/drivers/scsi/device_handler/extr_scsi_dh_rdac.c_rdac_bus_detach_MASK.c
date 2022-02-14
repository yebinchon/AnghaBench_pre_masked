
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {struct rdac_dh_data* handler_data; } ;
struct rdac_dh_data {TYPE_1__* ctlr; int * sdev; int node; } ;
struct TYPE_2__ {int kref; scalar_t__ ms_queued; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rdac_dh_data*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6( struct scsi_device *VAR_3 )
{
 struct rdac_dh_data *VAR_4 = VAR_3->handler_data;

 if (VAR_4->ctlr && VAR_4->ctlr->ms_queued)
  FUNC_0(VAR_0);

 FUNC_4(&VAR_1);
 if (VAR_4->ctlr) {
  FUNC_3(&VAR_4->node);
  VAR_4->sdev = ((void*)0);
  FUNC_2(&VAR_4->ctlr->kref, VAR_2);
 }
 FUNC_5(&VAR_1);
 VAR_3->handler_data = ((void*)0);
 FUNC_1(VAR_4);
}
