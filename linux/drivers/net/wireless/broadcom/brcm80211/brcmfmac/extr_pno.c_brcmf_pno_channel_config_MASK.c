
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pno_config_le {scalar_t__ flags; scalar_t__ reporttype; } ;
struct brcmf_if {int dummy; } ;


 int FUNC_0 (struct brcmf_if*,char*,struct brcmf_pno_config_le*,int) ;

__attribute__((used)) static int FUNC_1(struct brcmf_if *VAR_0,
        struct brcmf_pno_config_le *VAR_1)
{
 VAR_1->reporttype = 0;
 VAR_1->flags = 0;

 return FUNC_0(VAR_0, "pfn_cfg", VAR_1, sizeof(*VAR_1));
}
