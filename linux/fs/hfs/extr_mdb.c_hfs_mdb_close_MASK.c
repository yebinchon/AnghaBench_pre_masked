
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_4__ {int mdb_bh; TYPE_1__* mdb; } ;
struct TYPE_3__ {int drAtrb; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct super_block*) ;

void FUNC_4(struct super_block *VAR_2)
{

 if (FUNC_3(VAR_2))
  return;
 FUNC_0(VAR_2)->mdb->drAtrb |= FUNC_1(VAR_1);
 FUNC_0(VAR_2)->mdb->drAtrb &= FUNC_1(~VAR_0);
 FUNC_2(FUNC_0(VAR_2)->mdb_bh);
}
