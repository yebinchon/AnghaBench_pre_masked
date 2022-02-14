
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int * s_fs_info; } ;
struct TYPE_3__ {struct TYPE_3__* bitmap; int nls_disk; int nls_io; int alt_mdb_bh; int mdb_bh; int cat_tree; int ext_tree; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct super_block *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return;

 FUNC_2(FUNC_0(VAR_0)->ext_tree);
 FUNC_2(FUNC_0(VAR_0)->cat_tree);


 FUNC_1(FUNC_0(VAR_0)->mdb_bh);
 FUNC_1(FUNC_0(VAR_0)->alt_mdb_bh);

 FUNC_4(FUNC_0(VAR_0)->nls_io);
 FUNC_4(FUNC_0(VAR_0)->nls_disk);

 FUNC_3(FUNC_0(VAR_0)->bitmap);
 FUNC_3(FUNC_0(VAR_0));
 VAR_0->s_fs_info = ((void*)0);
}
