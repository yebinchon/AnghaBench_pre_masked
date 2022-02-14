
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_gendev; } ;
struct mvumi_hba {int shost; } ;


 struct scsi_device* FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mvumi_hba *VAR_0, int VAR_1)
{
 struct scsi_device *VAR_2;

 VAR_2 = FUNC_0(VAR_0->shost, 0, VAR_1, 0);
 if (VAR_2) {
  FUNC_2(&VAR_2->sdev_gendev);
  FUNC_1(VAR_2);
 }
}
