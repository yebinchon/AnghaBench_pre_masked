
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {int dev; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ibmvfc_host*) ;
 int FUNC_2 (struct ibmvfc_host*) ;
 struct ibmvfc_host* FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_0)
{
 struct ibmvfc_host *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1->dev, "Initiating host LIP. Resetting connection\n");
 FUNC_1(VAR_1);
 return FUNC_2(VAR_1);
}
