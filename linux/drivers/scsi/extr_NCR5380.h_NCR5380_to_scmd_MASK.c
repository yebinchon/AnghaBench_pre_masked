
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct NCR5380_cmd {int dummy; } ;



__attribute__((used)) static inline struct scsi_cmnd *FUNC_0(struct NCR5380_cmd *VAR_0)
{
 return ((struct scsi_cmnd *)VAR_0) - 1;
}
