
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct free_nid {int dummy; } ;
struct f2fs_nm_info {int free_nid_root; } ;
typedef int nid_t ;


 struct free_nid* FUNC_0 (int *,int ) ;

__attribute__((used)) static struct free_nid *FUNC_1(struct f2fs_nm_info *VAR_0,
      nid_t VAR_1)
{
 return FUNC_0(&VAR_0->free_nid_root, VAR_1);
}
