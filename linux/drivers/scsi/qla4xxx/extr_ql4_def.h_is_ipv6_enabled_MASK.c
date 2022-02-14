
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ipv6_options; } ;
struct scsi_qla_host {TYPE_1__ ip_config; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct scsi_qla_host *VAR_1)
{
 return ((VAR_1->ip_config.ipv6_options &
  VAR_0) != 0);
}
