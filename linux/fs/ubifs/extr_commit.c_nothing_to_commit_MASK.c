
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ znode; } ;
struct ubifs_info {scalar_t__ dirty_pn_cnt; scalar_t__ dirty_nn_cnt; int dirty_zn_cnt; TYPE_2__* nroot; TYPE_1__ zroot; scalar_t__ remounting_rw; scalar_t__ mounting; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ubifs_info*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct ubifs_info *VAR_1)
{




 if (VAR_1->mounting || VAR_1->remounting_rw)
  return 0;





 if (VAR_1->zroot.znode && FUNC_3(VAR_1->zroot.znode))
  return 0;
 if (VAR_1->nroot && FUNC_1(VAR_0, &VAR_1->nroot->flags))
  return 0;

 FUNC_2(VAR_1, FUNC_0(&VAR_1->dirty_zn_cnt) == 0);
 FUNC_2(VAR_1, VAR_1->dirty_pn_cnt == 0);
 FUNC_2(VAR_1, VAR_1->dirty_nn_cnt == 0);

 return 1;
}
