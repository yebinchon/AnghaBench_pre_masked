
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nfp_tun_mac_addr_offload {int addr; void* index; void* count; void* flags; } ;
struct nfp_app {int dummy; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct nfp_tun_mac_addr_offload*,int ,int) ;
 int FUNC_3 (struct nfp_app*,int ,int,struct nfp_tun_mac_addr_offload*,int ) ;

__attribute__((used)) static int
FUNC_4(struct nfp_app *VAR_3, u8 *VAR_4, u16 VAR_5, bool VAR_6)
{
 struct nfp_tun_mac_addr_offload VAR_7;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));

 if (VAR_6)
  VAR_7.flags = FUNC_0(VAR_2);


 VAR_7.count = FUNC_0(1);
 VAR_7.index = FUNC_0(VAR_5);
 FUNC_1(VAR_7.addr, VAR_4);

 return FUNC_3(VAR_3, VAR_1,
     sizeof(struct nfp_tun_mac_addr_offload),
     &VAR_7, VAR_0);
}
