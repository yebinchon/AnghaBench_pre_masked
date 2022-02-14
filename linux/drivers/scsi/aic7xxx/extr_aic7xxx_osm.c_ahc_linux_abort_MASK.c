
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(struct scsi_cmnd *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (VAR_2 != 0)
  FUNC_1("aic7xxx_abort returns 0x%x\n", VAR_2);
 return (VAR_2);
}
