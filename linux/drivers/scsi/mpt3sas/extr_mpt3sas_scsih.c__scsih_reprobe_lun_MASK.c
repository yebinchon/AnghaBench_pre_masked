
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int no_uld_attach; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (int ,struct scsi_device*,char*,char*) ;

__attribute__((used)) static void
FUNC_3(struct scsi_device *VAR_1, void *VAR_2)
{
 VAR_1->no_uld_attach = VAR_2 ? 1 : 0;
 FUNC_2(VAR_0, VAR_1, "%s raid component\n",
     VAR_1->no_uld_attach ? "hiding" : "exposing");
 FUNC_0(FUNC_1(VAR_1));
}
