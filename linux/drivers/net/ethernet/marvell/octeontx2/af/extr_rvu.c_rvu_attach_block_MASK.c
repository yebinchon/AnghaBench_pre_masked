
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct rvu_pfvf {int dummy; } ;
struct rvu_hwinfo {struct rvu_block* block; } ;
struct TYPE_2__ {int bmap; } ;
struct rvu_block {int lfcfg_reg; int lfshift; TYPE_1__ lf; } ;
struct rvu {struct rvu_hwinfo* hw; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct rvu*,int,int ) ;
 struct rvu_pfvf* FUNC_2 (struct rvu*,int) ;
 int FUNC_3 (struct rvu*,struct rvu_pfvf*,struct rvu_block*,int) ;
 int FUNC_4 (struct rvu*,struct rvu_pfvf*,struct rvu_block*,int,int,int) ;
 int FUNC_5 (struct rvu*,int,int,unsigned long long) ;

__attribute__((used)) static void FUNC_6(struct rvu *VAR_0, int VAR_1,
        int VAR_2, int VAR_3)
{
 struct rvu_pfvf *VAR_4 = FUNC_2(VAR_0, VAR_1);
 struct rvu_hwinfo *VAR_5 = VAR_0->hw;
 struct rvu_block *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;
 u64 VAR_10;

 if (!VAR_3)
  return;

 VAR_9 = FUNC_1(VAR_0, VAR_2, 0);
 if (VAR_9 < 0)
  return;

 VAR_6 = &VAR_5->block[VAR_9];
 if (!VAR_6->lf.bmap)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {

  VAR_8 = FUNC_0(&VAR_6->lf);
  if (VAR_8 < 0)
   return;

  VAR_10 = (1ULL << 63) | (VAR_1 << 8) | VAR_7;
  FUNC_5(VAR_0, VAR_9, VAR_6->lfcfg_reg |
       (VAR_8 << VAR_6->lfshift), VAR_10);
  FUNC_4(VAR_0, VAR_4, VAR_6,
        VAR_1, VAR_8, 1);


  FUNC_3(VAR_0, VAR_4, VAR_6, VAR_8);
 }
}
