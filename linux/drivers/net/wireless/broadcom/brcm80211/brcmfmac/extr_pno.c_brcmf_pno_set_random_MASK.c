
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct brcmf_pub {int dummy; } ;
struct brcmf_pno_macaddr_le {int flags; int* mac; int version; } ;
struct brcmf_pno_info {int n_reqs; TYPE_1__** reqs; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef int pfn_mac ;
struct TYPE_2__ {int flags; int* mac_addr; int* mac_addr_mask; int reqid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*,int ,int*) ;
 int FUNC_2 (struct brcmf_if*,char*,struct brcmf_pno_macaddr_le*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int*,int*,int) ;

__attribute__((used)) static int FUNC_5(struct brcmf_if *VAR_6, struct brcmf_pno_info *VAR_7)
{
 struct brcmf_pub *VAR_8 = VAR_6->drvr;
 struct brcmf_pno_macaddr_le VAR_9;
 u8 *VAR_10 = ((void*)0);
 u8 *VAR_11 = ((void*)0);
 int VAR_12, VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_7->n_reqs; VAR_13++)
  if (VAR_7->reqs[VAR_13]->flags & VAR_4) {
   VAR_10 = VAR_7->reqs[VAR_13]->mac_addr;
   VAR_11 = VAR_7->reqs[VAR_13]->mac_addr_mask;
   break;
  }


 if (!VAR_10)
  return 0;

 VAR_9.version = VAR_0;
 VAR_9.flags = VAR_1 | VAR_2;

 FUNC_4(VAR_9.mac, VAR_10, VAR_3);
 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_9.mac[VAR_13] &= VAR_11[VAR_13];
  VAR_9.mac[VAR_13] |= FUNC_3() & ~(VAR_11[VAR_13]);
 }

 VAR_9.mac[0] &= 0xFE;

 VAR_9.mac[0] |= 0x02;

 FUNC_1(VAR_5, "enabling random mac: reqid=%llu mac=%pM\n",
    VAR_7->reqs[VAR_13]->reqid, VAR_9.mac);
 VAR_12 = FUNC_2(VAR_6, "pfn_macaddr", &VAR_9,
           sizeof(VAR_9));
 if (VAR_12)
  FUNC_0(VAR_8, "pfn_macaddr failed, err=%d\n", VAR_12);

 return VAR_12;
}
