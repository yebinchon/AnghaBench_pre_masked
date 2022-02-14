
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*,int ,int ) ;
 int FUNC_1 (int ,struct scsi_cmnd*,char*) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_3)
{
 FUNC_1(VAR_0, VAR_3,
      "Doing target reset due to an I/O command timeout.\n");
 return FUNC_0(VAR_3,
        VAR_1,
        VAR_2);
}
