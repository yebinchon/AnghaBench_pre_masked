
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (struct scsi_device*,int,unsigned char*,int ) ;

bool FUNC_4(struct scsi_device *VAR_2)
{
 unsigned char *VAR_3;
 bool VAR_4 = 0;

 if (!FUNC_2(VAR_2))
  return VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  return VAR_4;

 if (!FUNC_3(VAR_2, 0x89, VAR_3, VAR_1))
  VAR_4 = (VAR_3[213] >> 4) & 1;

 FUNC_0(VAR_3);
 return VAR_4;
}
