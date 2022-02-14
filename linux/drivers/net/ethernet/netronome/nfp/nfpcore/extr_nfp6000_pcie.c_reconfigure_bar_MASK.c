
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nfp_bar {int base; } ;
struct nfp6000_pcie {int dummy; } ;


 int FUNC_0 (struct nfp6000_pcie*,struct nfp_bar*,int *,int *,int,int,int,int ,size_t,int) ;
 int FUNC_1 (struct nfp6000_pcie*,struct nfp_bar*,int ) ;

__attribute__((used)) static int
FUNC_2(struct nfp6000_pcie *VAR_0, struct nfp_bar *VAR_1,
  int VAR_2, int VAR_3, int VAR_4, u64 VAR_5, size_t VAR_6, int VAR_7)
{
 u64 VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_0, VAR_1, &VAR_9, &VAR_8,
     VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_1->base = VAR_8;

 return FUNC_1(VAR_0, VAR_1, VAR_9);
}
