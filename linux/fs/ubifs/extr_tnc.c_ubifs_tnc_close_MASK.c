
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ znode; } ;
struct ubifs_info {int ilebs; int gap_lebs; TYPE_1__ zroot; int clean_zn_cnt; } ;


 long FUNC_0 (int *) ;
 int FUNC_1 (long,int *) ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ubifs_info*) ;
 int FUNC_5 (struct ubifs_info*,int) ;
 int VAR_0 ;
 long FUNC_6 (struct ubifs_info*,scalar_t__) ;

void FUNC_7(struct ubifs_info *VAR_1)
{
 FUNC_4(VAR_1);
 if (VAR_1->zroot.znode) {
  long VAR_2, VAR_3;

  VAR_2 = FUNC_0(&VAR_1->clean_zn_cnt);
  VAR_3 = FUNC_6(VAR_1, VAR_1->zroot.znode);
  FUNC_5(VAR_1, VAR_3 == VAR_2);
  FUNC_1(VAR_2, &VAR_0);
 }
 FUNC_3(VAR_1->gap_lebs);
 FUNC_3(VAR_1->ilebs);
 FUNC_2(VAR_1);
}
