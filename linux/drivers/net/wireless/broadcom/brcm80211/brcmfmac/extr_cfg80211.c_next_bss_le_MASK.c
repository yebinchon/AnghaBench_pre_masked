
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_scan_results {struct brcmf_bss_info_le* bss_info_le; } ;
struct brcmf_bss_info_le {int length; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static struct brcmf_bss_info_le *
FUNC_1(struct brcmf_scan_results *VAR_0, struct brcmf_bss_info_le *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return VAR_0->bss_info_le;
 return (struct brcmf_bss_info_le *)((unsigned long)VAR_1 +
         FUNC_0(VAR_1->length));
}
