
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int no_uld_attach; } ;


 int FUNC_0 (struct scsi_device*) ;

__attribute__((used)) static void
FUNC_1(struct scsi_device *VAR_0, void *VAR_1)
{
 int VAR_2;

 VAR_0->no_uld_attach = VAR_1 ? 1 : 0;
 VAR_2 = FUNC_0(VAR_0);
}
