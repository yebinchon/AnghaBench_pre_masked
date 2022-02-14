
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {scalar_t__ scan_complete; int dev; } ;
struct Scsi_Host {int host_lock; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long) ;
 unsigned long VAR_1 ;
 struct ibmvfc_host* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct Scsi_Host *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 struct ibmvfc_host *VAR_5 = FUNC_1(VAR_2);
 int VAR_6 = 0;

 FUNC_2(VAR_2->host_lock, VAR_4);
 if (VAR_3 >= (VAR_1 * VAR_0)) {
  FUNC_0(VAR_5->dev, "Scan taking longer than %d seconds, "
    "continuing initialization\n", VAR_1);
  VAR_6 = 1;
 }

 if (VAR_5->scan_complete)
  VAR_6 = 1;
 FUNC_3(VAR_2->host_lock, VAR_4);
 return VAR_6;
}
