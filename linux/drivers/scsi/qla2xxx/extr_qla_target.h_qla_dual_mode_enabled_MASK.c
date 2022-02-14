
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {TYPE_1__* host; } ;
struct TYPE_2__ {scalar_t__ active_mode; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct scsi_qla_host *VAR_1)
{
 return (VAR_1->host->active_mode == VAR_0);
}
