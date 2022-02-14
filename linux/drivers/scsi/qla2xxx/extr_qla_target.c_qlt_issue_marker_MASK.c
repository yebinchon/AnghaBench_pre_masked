
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {scalar_t__ marker_needed; int vp_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct scsi_qla_host*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct scsi_qla_host *VAR_2, int VAR_3)
{

 if (FUNC_2(VAR_2->marker_needed != 0)) {
  int VAR_4 = FUNC_1(VAR_2, VAR_3);

  if (VAR_4 != VAR_0) {
   FUNC_0(VAR_1, VAR_2, 0xe03d,
       "qla_target(%d): issue_marker() failed\n",
       VAR_2->vp_idx);
  }
  return VAR_4;
 }
 return VAR_0;
}
