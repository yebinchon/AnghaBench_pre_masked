
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scsi_lun {int dummy; } ;
struct scsi_device {int lun; } ;


 int FUNC_0 (int ,struct scsi_lun*) ;

__attribute__((used)) static inline u64 FUNC_1(struct scsi_device *VAR_0)
{
 u64 VAR_1;

 FUNC_0(VAR_0->lun, (struct scsi_lun *)&VAR_1);
 return VAR_1;
}
