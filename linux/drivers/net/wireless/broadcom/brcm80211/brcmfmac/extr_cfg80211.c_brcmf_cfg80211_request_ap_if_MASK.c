
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pub {int dummy; } ;
struct brcmf_mbss_ssid_le {int SSID; void* SSID_len; void* bsscfgidx; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef int mbss_ssid_le ;


 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (struct brcmf_if*,char*,struct brcmf_mbss_ssid_le*,int) ;
 int FUNC_2 (struct brcmf_pub*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct brcmf_mbss_ssid_le*,int ,int) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(struct brcmf_if *VAR_0)
{
 struct brcmf_pub *VAR_1 = VAR_0->drvr;
 struct brcmf_mbss_ssid_le VAR_2;
 int VAR_3;
 int VAR_4;

 FUNC_4(&VAR_2, 0, sizeof(VAR_2));
 VAR_3 = FUNC_2(VAR_0->drvr);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_2.bsscfgidx = FUNC_3(VAR_3);
 VAR_2.SSID_len = FUNC_3(5);
 FUNC_5(VAR_2.SSID, "ssid%d" , VAR_3);

 VAR_4 = FUNC_1(VAR_0, "bsscfg:ssid", &VAR_2,
     sizeof(VAR_2));
 if (VAR_4 < 0)
  FUNC_0(VAR_1, "setting ssid failed %d\n", VAR_4);

 return VAR_4;
}
