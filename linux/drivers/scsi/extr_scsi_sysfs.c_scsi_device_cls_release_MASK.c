
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_gendev; } ;
struct device {int dummy; } ;


 struct scsi_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct scsi_device *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_1(&VAR_1->sdev_gendev);
}
