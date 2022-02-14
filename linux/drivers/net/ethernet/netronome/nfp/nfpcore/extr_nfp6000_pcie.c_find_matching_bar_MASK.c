
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nfp_bar {int dummy; } ;
struct nfp6000_pcie {int bars; struct nfp_bar* bar; } ;


 scalar_t__ FUNC_0 (struct nfp_bar*,int ,int ,int ,int ,size_t,int) ;

__attribute__((used)) static int
FUNC_1(struct nfp6000_pcie *VAR_0,
    u32 VAR_1, u32 VAR_2, u32 VAR_3, u64 VAR_4, size_t VAR_5, int VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0->bars; VAR_7++) {
  struct nfp_bar *VAR_8 = &VAR_0->bar[VAR_7];

  if (FUNC_0(VAR_8, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6))
   return VAR_7;
 }

 return -1;
}
