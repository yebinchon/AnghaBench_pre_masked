
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pub {int dummy; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;


 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (struct brcmf_if*,char*,int *,int ) ;
 int FUNC_2 (struct brcmf_if*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct brcmf_if *VAR_0)
{
 struct brcmf_pub *VAR_1 = VAR_0->drvr;
 int VAR_2;


 VAR_2 = FUNC_2(VAR_0, "pfn", 0);
 if (VAR_2 == 0) {

  VAR_2 = FUNC_1(VAR_0, "pfnclear", ((void*)0), 0);
 }
 if (VAR_2 < 0)
  FUNC_0(VAR_1, "failed code %d\n", VAR_2);

 return VAR_2;
}
