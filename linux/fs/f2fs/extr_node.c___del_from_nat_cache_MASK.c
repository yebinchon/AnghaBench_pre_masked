
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat_entry {int dummy; } ;
struct f2fs_nm_info {int nat_cnt; int nat_root; } ;


 int FUNC_0 (struct nat_entry*) ;
 int FUNC_1 (struct nat_entry*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct f2fs_nm_info *VAR_0, struct nat_entry *VAR_1)
{
 FUNC_2(&VAR_0->nat_root, FUNC_1(VAR_1));
 VAR_0->nat_cnt--;
 FUNC_0(VAR_1);
}
