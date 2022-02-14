
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
typedef int u_char ;
struct de4x5_srom {scalar_t__ chksum; int ieee_addr; scalar_t__ num_controllers; scalar_t__ version; scalar_t__ id_block_crc; scalar_t__ sub_system_id; scalar_t__ sub_vendor_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void
FUNC_1(struct de4x5_srom *VAR_2)
{
    int VAR_3;

    if (VAR_1 & VAR_0) {
 FUNC_0("Sub-system Vendor ID: %04x\n", *((u_short *)VAR_2->sub_vendor_id));
 FUNC_0("Sub-system ID:        %04x\n", *((u_short *)VAR_2->sub_system_id));
 FUNC_0("ID Block CRC:         %02x\n", (u_char)(VAR_2->id_block_crc));
 FUNC_0("SROM version:         %02x\n", (u_char)(VAR_2->version));
 FUNC_0("# controllers:        %02x\n", (u_char)(VAR_2->num_controllers));

 FUNC_0("Hardware Address:     %pM\n", VAR_2->ieee_addr);
 FUNC_0("CRC checksum:         %04x\n", (u_short)(VAR_2->chksum));
 for (VAR_3=0; VAR_3<64; VAR_3++) {
     FUNC_0("%3d %04x\n", VAR_3<<1, (u_short)*((u_short *)VAR_2+VAR_3));
 }
    }
}
