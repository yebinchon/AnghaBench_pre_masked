
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_gendev; } ;


 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct scsi_device*) ;

__attribute__((used)) static void
FUNC_3(struct scsi_device *VAR_0, void *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_2, "scsi_internal_device_block(%s) failed: ret = %d\n",
    FUNC_1(&VAR_0->sdev_gendev), VAR_2);
}
