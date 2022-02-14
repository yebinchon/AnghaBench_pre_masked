
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvscsi_host_data {int dev; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ibmvscsi_host_data*) ;
 struct ibmvscsi_host_data* FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_3(struct Scsi_Host *VAR_0, int VAR_1)
{
 struct ibmvscsi_host_data *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_2->dev, "Initiating adapter reset!\n");
 FUNC_1(VAR_2);

 return 0;
}
