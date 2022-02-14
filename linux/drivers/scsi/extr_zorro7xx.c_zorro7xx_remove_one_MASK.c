
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zorro_dev {int dummy; } ;
struct Scsi_Host {int irq; } ;
struct NCR_700_Host_Parameters {int dummy; } ;


 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int ,struct Scsi_Host*) ;
 int FUNC_2 (struct NCR_700_Host_Parameters*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 struct NCR_700_Host_Parameters* FUNC_4 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_5 (struct zorro_dev*) ;
 int FUNC_6 (struct zorro_dev*) ;

__attribute__((used)) static void FUNC_7(struct zorro_dev *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_5(VAR_0);
 struct NCR_700_Host_Parameters *VAR_2 = FUNC_4(VAR_1);

 FUNC_3(VAR_1);

 FUNC_0(VAR_1);
 FUNC_2(VAR_2);
 FUNC_1(VAR_1->irq, VAR_1);
 FUNC_6(VAR_0);
}
