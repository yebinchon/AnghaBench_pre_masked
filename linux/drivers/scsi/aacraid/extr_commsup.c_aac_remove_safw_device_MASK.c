
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct aac_dev {int dummy; } ;


 struct scsi_device* FUNC_0 (struct aac_dev*,int,int) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct scsi_device*) ;

__attribute__((used)) static void FUNC_3(struct aac_dev *VAR_0, int VAR_1, int VAR_2)
{
 struct scsi_device *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_3);
 FUNC_1(VAR_3);
}
