
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct sas_end_device {int tlr_supported; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int const,int ) ;
 struct sas_end_device* FUNC_2 (struct scsi_device*) ;
 scalar_t__ FUNC_3 (struct scsi_device*,int,char*,int const) ;

unsigned int
FUNC_4(struct scsi_device *VAR_1)
{
 const int VAR_2 = 32;
 struct sas_end_device *VAR_3 = FUNC_2(VAR_1);
 char *VAR_4 = FUNC_1(VAR_2, VAR_0);
 int VAR_5 = 0;

 if (!VAR_4)
  goto out;

 if (FUNC_3(VAR_1, 0x90, VAR_4, VAR_2))
  goto out;







 VAR_5 = VAR_4[12] & 0x01;

 out:
 FUNC_0(VAR_4);
 VAR_3->tlr_supported = VAR_5;
 return VAR_5;

}
