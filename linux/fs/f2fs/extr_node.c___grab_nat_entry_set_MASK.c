
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nat_entry_set {scalar_t__ entry_cnt; int set; int set_list; int entry_list; } ;
struct TYPE_2__ {int nid; } ;
struct nat_entry {TYPE_1__ ni; } ;
struct f2fs_nm_info {int nat_set_root; } ;
typedef int nid_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct nat_entry_set* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,struct nat_entry_set*) ;
 int VAR_1 ;
 struct nat_entry_set* FUNC_4 (int *,int ) ;

__attribute__((used)) static struct nat_entry_set *FUNC_5(struct f2fs_nm_info *VAR_2,
       struct nat_entry *VAR_3)
{
 nid_t VAR_4 = FUNC_1(VAR_3->ni.nid);
 struct nat_entry_set *VAR_5;

 VAR_5 = FUNC_4(&VAR_2->nat_set_root, VAR_4);
 if (!VAR_5) {
  VAR_5 = FUNC_2(VAR_1, VAR_0);

  FUNC_0(&VAR_5->entry_list);
  FUNC_0(&VAR_5->set_list);
  VAR_5->set = VAR_4;
  VAR_5->entry_cnt = 0;
  FUNC_3(&VAR_2->nat_set_root, VAR_4, VAR_5);
 }
 return VAR_5;
}
