
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu_pfvf {int dummy; } ;
struct rvu_hwinfo {struct rvu_block* block; } ;
struct rvu_block {int lfcfg_reg; int lfshift; int lf; int type; } ;
struct rvu {struct rvu_hwinfo* hw; } ;


 int FUNC_0 (struct rvu*,struct rvu_pfvf*,struct rvu_block*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct rvu*,int,int) ;
 struct rvu_pfvf* FUNC_3 (struct rvu*,int) ;
 int FUNC_4 (struct rvu_pfvf*,int ) ;
 int FUNC_5 (struct rvu*,struct rvu_block*,int,int) ;
 int FUNC_6 (struct rvu*,struct rvu_pfvf*,struct rvu_block*,int,int,int) ;
 int FUNC_7 (struct rvu*,int,int,int) ;

__attribute__((used)) static void FUNC_8(struct rvu *VAR_0, int VAR_1, int VAR_2)
{
 struct rvu_pfvf *VAR_3 = FUNC_3(VAR_0, VAR_1);
 struct rvu_hwinfo *VAR_4 = VAR_0->hw;
 struct rvu_block *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_0, VAR_2, VAR_1);
 if (VAR_9 < 0)
  return;

 VAR_5 = &VAR_4->block[VAR_9];

 VAR_8 = FUNC_4(VAR_3, VAR_5->type);
 if (!VAR_8)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_7 = FUNC_5(VAR_0, VAR_5, VAR_1, VAR_6);
  if (VAR_7 < 0)
   continue;


  FUNC_7(VAR_0, VAR_9, VAR_5->lfcfg_reg |
       (VAR_7 << VAR_5->lfshift), 0x00ULL);


  FUNC_6(VAR_0, VAR_3, VAR_5,
        VAR_1, VAR_7, 0);


  FUNC_1(&VAR_5->lf, VAR_7);


  FUNC_0(VAR_0, VAR_3, VAR_5, VAR_7);
 }
}
