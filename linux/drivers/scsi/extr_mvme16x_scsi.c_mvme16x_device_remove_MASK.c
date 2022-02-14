
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct Scsi_Host {int irq; } ;
struct NCR_700_Host_Parameters {int dummy; } ;


 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int ,struct Scsi_Host*) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (struct NCR_700_Host_Parameters*) ;
 int FUNC_4 (int,unsigned long volatile) ;
 struct Scsi_Host* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct Scsi_Host*) ;
 struct NCR_700_Host_Parameters* FUNC_7 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_5(VAR_0);
 struct NCR_700_Host_Parameters *VAR_2 = FUNC_7(VAR_1);


 {
  volatile unsigned long VAR_3;

  VAR_3 = FUNC_2(0xfff4202c);
  VAR_3 &= ~0x10;
  FUNC_4(0xfff4202c, VAR_3);
 }
 FUNC_6(VAR_1);
 FUNC_0(VAR_1);
 FUNC_3(VAR_2);
 FUNC_1(VAR_1->irq, VAR_1);

 return 0;
}
