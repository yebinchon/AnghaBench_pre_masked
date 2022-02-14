
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u16 ;
struct rvu_pfvf {int msix; scalar_t__* msix_lfmap; } ;
struct rvu_block {int msixcfg_reg; int lfshift; int addr; } ;
struct rvu {int dummy; } ;


 int FUNC_0 (int *,size_t,size_t) ;
 size_t FUNC_1 (struct rvu*,struct rvu_pfvf*,int ,int) ;
 int FUNC_2 (struct rvu*,int ,int) ;
 int FUNC_3 (struct rvu*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct rvu *VAR_0, struct rvu_pfvf *VAR_1,
      struct rvu_block *VAR_2, int VAR_3)
{
 u16 VAR_4, VAR_5, VAR_6;
 u64 VAR_7;

 VAR_7 = FUNC_2(VAR_0, VAR_2->addr, VAR_2->msixcfg_reg |
    (VAR_3 << VAR_2->lfshift));
 VAR_4 = (VAR_7 >> 12) & 0xFF;


 FUNC_3(VAR_0, VAR_2->addr, VAR_2->msixcfg_reg |
      (VAR_3 << VAR_2->lfshift), VAR_7 & ~0x7FFULL);

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2->addr, VAR_3);


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_1->msix_lfmap[VAR_6 + VAR_5] = 0;


 FUNC_0(&VAR_1->msix, VAR_4, VAR_6);
}
