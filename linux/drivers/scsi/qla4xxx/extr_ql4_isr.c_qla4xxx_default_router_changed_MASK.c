
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * s6_addr32; } ;
struct TYPE_4__ {TYPE_1__ ipv6_default_router_addr; } ;
struct scsi_qla_host {TYPE_2__ ip_config; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct scsi_qla_host *VAR_0,
        uint32_t *VAR_1)
{
 FUNC_0(&VAR_0->ip_config.ipv6_default_router_addr.s6_addr32[0],
        &VAR_1[2], sizeof(uint32_t));
 FUNC_0(&VAR_0->ip_config.ipv6_default_router_addr.s6_addr32[1],
        &VAR_1[3], sizeof(uint32_t));
 FUNC_0(&VAR_0->ip_config.ipv6_default_router_addr.s6_addr32[2],
        &VAR_1[4], sizeof(uint32_t));
 FUNC_0(&VAR_0->ip_config.ipv6_default_router_addr.s6_addr32[3],
        &VAR_1[5], sizeof(uint32_t));
}
