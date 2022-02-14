
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_regs_port_header {int nfc_credits; int max_counters; int max_out_hop_id; int max_in_hop_id; int type; int thunderbolt_version; int revision; int device_id; int vendor_id; int port_number; } ;
struct tb {int dummy; } ;


 int FUNC_0 (struct tb*,char*,int ,...) ;
 int FUNC_1 (struct tb_regs_port_header*) ;

__attribute__((used)) static void FUNC_2(struct tb *VAR_0, struct tb_regs_port_header *VAR_1)
{
 FUNC_0(VAR_0,
        " Port %d: %x:%x (Revision: %d, TB Version: %d, Type: %s (%#x))\n",
        VAR_1->port_number, VAR_1->vendor_id, VAR_1->device_id,
        VAR_1->revision, VAR_1->thunderbolt_version, FUNC_1(VAR_1),
        VAR_1->type);
 FUNC_0(VAR_0, "  Max hop id (in/out): %d/%d\n",
        VAR_1->max_in_hop_id, VAR_1->max_out_hop_id);
 FUNC_0(VAR_0, "  Max counters: %d\n", VAR_1->max_counters);
 FUNC_0(VAR_0, "  NFC Credits: %#x\n", VAR_1->nfc_credits);
}
