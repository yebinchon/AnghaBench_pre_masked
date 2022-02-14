
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct gfs2_rbm {scalar_t__ offset; scalar_t__ bii; TYPE_1__* rgd; } ;
struct TYPE_4__ {struct gfs2_rbm rs_rbm; } ;
struct gfs2_inode {scalar_t__ i_goal; TYPE_2__ i_res; } ;
struct TYPE_3__ {scalar_t__ rd_data0; scalar_t__ rd_last_alloc; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_rbm*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct gfs2_rbm *VAR_0,
     const struct gfs2_inode *VAR_1, bool VAR_2)
{
 u64 VAR_3;

 if (FUNC_2(&VAR_1->i_res)) {
  *VAR_0 = VAR_1->i_res.rs_rbm;
  return;
 }

 if (!VAR_2 && FUNC_3(VAR_0->rgd, VAR_1->i_goal))
  VAR_3 = VAR_1->i_goal;
 else
  VAR_3 = VAR_0->rgd->rd_last_alloc + VAR_0->rgd->rd_data0;

 if (FUNC_0(FUNC_1(VAR_0, VAR_3))) {
  VAR_0->bii = 0;
  VAR_0->offset = 0;
 }
}
