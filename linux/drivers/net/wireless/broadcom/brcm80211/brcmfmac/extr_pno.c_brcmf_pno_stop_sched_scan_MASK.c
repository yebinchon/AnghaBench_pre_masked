
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct brcmf_pno_info {scalar_t__ n_reqs; } ;
struct brcmf_if {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct brcmf_if*) ;
 int FUNC_2 (struct brcmf_if*) ;
 int FUNC_3 (struct brcmf_pno_info*,int ) ;
 struct brcmf_pno_info* FUNC_4 (struct brcmf_if*) ;

int FUNC_5(struct brcmf_if *VAR_1, u64 VAR_2)
{
 struct brcmf_pno_info *VAR_3;
 int VAR_4;

 FUNC_0(VAR_0, "reqid=%llu\n", VAR_2);

 VAR_3 = FUNC_4(VAR_1);


 if (!VAR_3->n_reqs)
  return 0;

 VAR_4 = FUNC_3(VAR_3, VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_1);

 if (VAR_3->n_reqs)
  (void)FUNC_2(VAR_1);

 return 0;
}
