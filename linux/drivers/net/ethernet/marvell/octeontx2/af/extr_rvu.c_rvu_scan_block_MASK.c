
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rvu_pfvf {int dummy; } ;
struct TYPE_2__ {int max; int bmap; } ;
struct rvu_block {int lfcfg_reg; int lfshift; TYPE_1__ lf; int addr; } ;
struct rvu {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 struct rvu_pfvf* FUNC_2 (struct rvu*,int) ;
 int FUNC_3 (struct rvu*,int ,int) ;
 int FUNC_4 (struct rvu*,struct rvu_pfvf*,struct rvu_block*,int) ;
 int FUNC_5 (struct rvu*,struct rvu_pfvf*,struct rvu_block*,int,int,int) ;

__attribute__((used)) static void FUNC_6(struct rvu *VAR_0, struct rvu_block *VAR_1)
{
 struct rvu_pfvf *VAR_2;
 u64 VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->lf.max; VAR_4++) {
  VAR_3 = FUNC_3(VAR_0, VAR_1->addr,
     VAR_1->lfcfg_reg | (VAR_4 << VAR_1->lfshift));
  if (!(VAR_3 & FUNC_0(63)))
   continue;


  FUNC_1(VAR_4, VAR_1->lf.bmap);


  VAR_2 = FUNC_2(VAR_0, (VAR_3 >> 8) & 0xFFFF);
  FUNC_5(VAR_0, VAR_2, VAR_1,
        (VAR_3 >> 8) & 0xFFFF, VAR_4, 1);


  FUNC_4(VAR_0, VAR_2, VAR_1, VAR_4);
 }
}
