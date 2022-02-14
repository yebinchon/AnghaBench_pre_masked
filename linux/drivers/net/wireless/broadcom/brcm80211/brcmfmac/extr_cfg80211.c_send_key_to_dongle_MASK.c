
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_wsec_key_le {int dummy; } ;
struct brcmf_wsec_key {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef int key_le ;


 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (struct brcmf_if*,char*,struct brcmf_wsec_key_le*,int) ;
 int FUNC_2 (struct brcmf_if*) ;
 int FUNC_3 (struct brcmf_wsec_key*,struct brcmf_wsec_key_le*) ;

__attribute__((used)) static int
FUNC_4(struct brcmf_if *VAR_0, struct brcmf_wsec_key *VAR_1)
{
 struct brcmf_pub *VAR_2 = VAR_0->drvr;
 int VAR_3;
 struct brcmf_wsec_key_le VAR_4;

 FUNC_3(VAR_1, &VAR_4);

 FUNC_2(VAR_0);

 VAR_3 = FUNC_1(VAR_0, "wsec_key", &VAR_4,
     sizeof(VAR_4));

 if (VAR_3)
  FUNC_0(VAR_2, "wsec_key error (%d)\n", VAR_3);
 return VAR_3;
}
