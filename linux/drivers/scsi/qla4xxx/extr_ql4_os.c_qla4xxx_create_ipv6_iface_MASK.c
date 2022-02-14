
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {void* iface_ipv6_1; int host; void* iface_ipv6_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int *,int ,int,int ) ;
 int FUNC_1 (int ,struct scsi_qla_host*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct scsi_qla_host *VAR_3)
{
 if (!VAR_3->iface_ipv6_0)

  VAR_3->iface_ipv6_0 = FUNC_0(VAR_3->host,
            &VAR_2,
            VAR_0, 0,
            0);
 if (!VAR_3->iface_ipv6_0)
  FUNC_1(VAR_1, VAR_3, "Could not create IPv6 iSCSI "
      "iface0.\n");

 if (!VAR_3->iface_ipv6_1)

  VAR_3->iface_ipv6_1 = FUNC_0(VAR_3->host,
            &VAR_2,
            VAR_0, 1,
            0);
 if (!VAR_3->iface_ipv6_1)
  FUNC_1(VAR_1, VAR_3, "Could not create IPv6 iSCSI "
      "iface1.\n");
}
