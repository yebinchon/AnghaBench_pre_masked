
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scsi_qla_host {unsigned char* node_name; unsigned char* port_name; } ;


 int FUNC_0 (char*,unsigned char*) ;
 int FUNC_1 (int ,unsigned char*) ;

__attribute__((used)) static void FUNC_2(struct scsi_qla_host *VAR_0, u64 VAR_1,
 unsigned char *VAR_2)
{
 FUNC_0("qla2xxx HW vha->node_name: %8phC\n", VAR_0->node_name);
 FUNC_0("qla2xxx HW vha->port_name: %8phC\n", VAR_0->port_name);
 FUNC_1(VAR_1, VAR_2);
 FUNC_0("qla2xxx passed configfs WWPN: %8phC\n", VAR_2);
}
