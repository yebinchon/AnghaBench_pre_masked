
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct aac_dev {int dummy; } ;


 struct scsi_device* FUNC_0 (struct aac_dev*,int,int) ;
 int FUNC_1 (struct scsi_device*) ;

__attribute__((used)) static int FUNC_2(struct aac_dev *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 struct scsi_device *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  VAR_3 = 1;
 FUNC_1(VAR_4);

 return VAR_3;
}
