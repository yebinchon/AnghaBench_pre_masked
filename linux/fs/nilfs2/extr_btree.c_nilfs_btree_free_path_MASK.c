
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {int bp_bh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct nilfs_btree_path*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct nilfs_btree_path *VAR_3)
{
 int VAR_4 = VAR_0;

 for (; VAR_4 < VAR_1; VAR_4++)
  FUNC_0(VAR_3[VAR_4].bp_bh);

 FUNC_1(VAR_2, VAR_3);
}
