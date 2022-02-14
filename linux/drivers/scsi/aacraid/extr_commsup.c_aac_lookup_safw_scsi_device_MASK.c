
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct aac_dev {int scsi_host_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct scsi_device* FUNC_1 (int ,int,int,int ) ;

__attribute__((used)) static struct scsi_device *FUNC_2(struct aac_dev *VAR_1,
        int VAR_2,
        int VAR_3)
{
 if (VAR_2 != VAR_0)
  VAR_2 = FUNC_0(VAR_2);

 return FUNC_1(VAR_1->scsi_host_ptr, VAR_2, VAR_3, 0);
}
