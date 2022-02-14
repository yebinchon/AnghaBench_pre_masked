
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcmf_pub {int dummy; } ;
struct brcmf_pno_bssid_le {scalar_t__ flags; int bssid; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef int bssid_cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*,int const*) ;
 int FUNC_2 (struct brcmf_if*,char*,struct brcmf_pno_bssid_le*,int) ;
 int FUNC_3 (int ,int const*,int ) ;

__attribute__((used)) static int FUNC_4(struct brcmf_if *VAR_2, const u8 *VAR_3)
{
 struct brcmf_pub *VAR_4 = VAR_2->drvr;
 struct brcmf_pno_bssid_le VAR_5;
 int VAR_6;

 FUNC_3(VAR_5.bssid, VAR_3, VAR_0);
 VAR_5.flags = 0;

 FUNC_1(VAR_1, "adding bssid=%pM\n", VAR_3);
 VAR_6 = FUNC_2(VAR_2, "pfn_add_bssid", &VAR_5,
           sizeof(VAR_5));
 if (VAR_6 < 0)
  FUNC_0(VAR_4, "adding failed: err=%d\n", VAR_6);
 return VAR_6;
}
