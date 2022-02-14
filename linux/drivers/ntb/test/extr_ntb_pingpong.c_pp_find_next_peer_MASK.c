
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pp_ctx {int nmask; int pmask; int out_pidx; int out_db; int lock; int ntb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct pp_ctx *VAR_1)
{
 u64 VAR_2, VAR_3;
 int VAR_4;

 VAR_2 = FUNC_2(VAR_1->ntb, ((void*)0), ((void*)0));


 if (VAR_2 & VAR_1->nmask) {
  VAR_4 = FUNC_1(VAR_2 & VAR_1->nmask);
  VAR_3 = FUNC_0(VAR_4 + 1);
 } else if (VAR_2 & VAR_1->pmask) {
  VAR_4 = FUNC_1(VAR_2 & VAR_1->pmask);
  VAR_3 = FUNC_0(VAR_4);
 } else {
  return -VAR_0;
 }

 FUNC_3(&VAR_1->lock);
 VAR_1->out_pidx = VAR_4;
 VAR_1->out_db = VAR_3;
 FUNC_4(&VAR_1->lock);

 return 0;
}
