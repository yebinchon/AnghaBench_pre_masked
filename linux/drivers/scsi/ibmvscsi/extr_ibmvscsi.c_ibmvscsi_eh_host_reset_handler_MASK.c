
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct ibmvscsi_host_data {int request_limit; int dev; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ibmvscsi_host_data*) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_3 (int) ;
 struct ibmvscsi_host_data* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_5)
{
 unsigned long VAR_6 = 0;
 struct ibmvscsi_host_data *VAR_7 = FUNC_4(VAR_5->device->host);

 FUNC_1(VAR_7->dev, "Resetting connection due to error recovery\n");

 FUNC_2(VAR_7);

 for (VAR_6 = VAR_4 + (VAR_3 * VAR_1);
      FUNC_5(VAR_4, VAR_6) &&
       FUNC_0(&VAR_7->request_limit) < 2;) {

  FUNC_3(10);
 }

 if (FUNC_0(&VAR_7->request_limit) <= 0)
  return VAR_0;

 return VAR_2;
}
