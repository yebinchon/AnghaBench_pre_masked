
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct scsi_cd {int cdi; struct scsi_device* device; } ;
struct block_device {int bd_disk; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct block_device*,int ) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct scsi_device*) ;
 int FUNC_5 (struct scsi_device*) ;
 struct scsi_cd* FUNC_6 (int ) ;
 int FUNC_7 (struct scsi_cd*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(struct block_device *VAR_2, fmode_t VAR_3)
{
 struct scsi_cd *VAR_4;
 struct scsi_device *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_4 = FUNC_6(VAR_2->bd_disk);
 if (!VAR_4)
  goto out;

 VAR_5 = VAR_4->device;
 FUNC_4(VAR_5);
 FUNC_1(VAR_2);

 FUNC_2(&VAR_1);
 VAR_6 = FUNC_0(&VAR_4->cdi, VAR_2, VAR_3);
 FUNC_3(&VAR_1);

 FUNC_5(VAR_5);
 if (VAR_6)
  FUNC_7(VAR_4);

out:
 return VAR_6;
}
