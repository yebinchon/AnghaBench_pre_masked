
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct domain_device {int dummy; } ;


 int FUNC_0 (struct domain_device*) ;
 int FUNC_1 (struct scsi_device*,int) ;
 int FUNC_2 (struct scsi_device*) ;
 struct domain_device* FUNC_3 (struct scsi_device*) ;

int FUNC_4(struct scsi_device *VAR_0)
{
 struct domain_device *VAR_1 = FUNC_3(VAR_0);
 int VAR_2 = FUNC_2(VAR_0);

 if (VAR_2)
  return VAR_2;
 if (!FUNC_0(VAR_1))
  FUNC_1(VAR_0, 64);

 return 0;
}
