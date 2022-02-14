
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvfc_host {int num_targets; TYPE_1__* disc_buf; } ;
struct TYPE_2__ {int * scsi_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ibmvfc_host*,int) ;

__attribute__((used)) static int FUNC_2(struct ibmvfc_host *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0, VAR_3 = 0; !VAR_3 && VAR_2 < VAR_1->num_targets; VAR_2++)
  VAR_3 = FUNC_1(VAR_1,
      FUNC_0(VAR_1->disc_buf->scsi_id[VAR_2]) &
      VAR_0);

 return VAR_3;
}
