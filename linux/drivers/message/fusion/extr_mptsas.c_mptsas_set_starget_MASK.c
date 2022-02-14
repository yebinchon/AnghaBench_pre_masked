
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_target {int dummy; } ;
struct mptsas_phyinfo {TYPE_1__* port_details; } ;
struct TYPE_2__ {struct scsi_target* starget; } ;



__attribute__((used)) static inline void
FUNC_0(struct mptsas_phyinfo *VAR_0, struct scsi_target *
VAR_1)
{
 if (VAR_0->port_details)
  VAR_0->port_details->starget = VAR_1;
}
