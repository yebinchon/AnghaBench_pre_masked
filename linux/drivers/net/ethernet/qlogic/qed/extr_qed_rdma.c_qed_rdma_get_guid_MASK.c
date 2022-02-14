
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* hw_mac_addr; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;



__attribute__((used)) static void FUNC_0(struct qed_hwfn *VAR_0, u8 *VAR_1)
{
 VAR_1[0] = VAR_0->hw_info.hw_mac_addr[0] ^ 2;
 VAR_1[1] = VAR_0->hw_info.hw_mac_addr[1];
 VAR_1[2] = VAR_0->hw_info.hw_mac_addr[2];
 VAR_1[3] = 0xff;
 VAR_1[4] = 0xfe;
 VAR_1[5] = VAR_0->hw_info.hw_mac_addr[3];
 VAR_1[6] = VAR_0->hw_info.hw_mac_addr[4];
 VAR_1[7] = VAR_0->hw_info.hw_mac_addr[5];
}
