
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint ;
typedef int u64 ;
struct iscsi_scan_data {int rescan; int lun; void* id; void* channel; } ;
struct Scsi_Host {int shost_gendev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct iscsi_scan_data*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct Scsi_Host *VAR_2, uint VAR_3,
      uint VAR_4, u64 VAR_5)
{
 struct iscsi_scan_data VAR_6;

 VAR_6.channel = VAR_3;
 VAR_6.id = VAR_4;
 VAR_6.lun = VAR_5;
 VAR_6.rescan = VAR_0;

 return FUNC_0(&VAR_2->shost_gendev, &VAR_6,
         VAR_1);
}
