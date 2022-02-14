
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nfp6000_pcie {int bar_waiters; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp6000_pcie*,int ,int ,int ,int ,size_t,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nfp6000_pcie *VAR_1, int *VAR_2,
   u32 VAR_3, u32 VAR_4, u32 VAR_5, u64 VAR_6, size_t VAR_7, int VAR_8)
{
 return FUNC_1(VAR_1->bar_waiters,
  (*VAR_2 = FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5,
          VAR_6, VAR_7, VAR_8))
     != -VAR_0);
}
