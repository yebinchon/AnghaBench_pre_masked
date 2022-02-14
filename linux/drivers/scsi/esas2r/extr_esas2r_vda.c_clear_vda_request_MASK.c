
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct esas2r_request {int req_list; TYPE_2__* data_buf; int req_stat; TYPE_2__* vrq; } ;
struct TYPE_3__ {int handle; } ;
struct TYPE_4__ {TYPE_1__ scsi; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct esas2r_request *VAR_2)
{
 u32 VAR_3 = VAR_2->vrq->scsi.handle;

 FUNC_1(VAR_2->vrq, 0, sizeof(*VAR_2->vrq));

 VAR_2->vrq->scsi.handle = VAR_3;

 VAR_2->req_stat = VAR_1;



 FUNC_1(VAR_2->data_buf, 0, VAR_0);






 FUNC_0(&VAR_2->req_list);
}
