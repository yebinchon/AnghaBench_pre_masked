
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_hdr {int dummy; } ;
struct scsi_cd {int cdi; int device; } ;
struct gendisk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_cd*) ;
 struct scsi_cd* FUNC_1 (struct gendisk*) ;
 int FUNC_2 (struct scsi_cd*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,struct scsi_sense_hdr*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct gendisk *VAR_3)
{
 struct scsi_sense_hdr VAR_4;
 struct scsi_cd *VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (!VAR_5)
  return -VAR_0;


 if (FUNC_3(VAR_5->device, VAR_2, VAR_1, &VAR_4))
  goto out;

 FUNC_4(&VAR_5->cdi);
 FUNC_0(VAR_5);
out:
 FUNC_2(VAR_5);
 return 0;
}
