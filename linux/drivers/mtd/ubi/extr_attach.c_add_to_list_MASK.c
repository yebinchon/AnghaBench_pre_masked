
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct ubi_attach_info {int alien_peb_count; struct list_head alien; struct list_head erase; struct list_head free; } ;
struct TYPE_2__ {int list; } ;
struct ubi_ainf_peb {int vol_id; int lnum; TYPE_1__ u; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (int *,struct list_head*) ;
 struct ubi_ainf_peb* FUNC_4 (struct ubi_attach_info*,int,int) ;

__attribute__((used)) static int FUNC_5(struct ubi_attach_info *VAR_1, int VAR_2, int VAR_3,
         int VAR_4, int VAR_5, int VAR_6, struct list_head *VAR_7)
{
 struct ubi_ainf_peb *VAR_8;

 if (VAR_7 == &VAR_1->free) {
  FUNC_1("add to free: PEB %d, EC %d", VAR_2, VAR_5);
 } else if (VAR_7 == &VAR_1->erase) {
  FUNC_1("add to erase: PEB %d, EC %d", VAR_2, VAR_5);
 } else if (VAR_7 == &VAR_1->alien) {
  FUNC_1("add to alien: PEB %d, EC %d", VAR_2, VAR_5);
  VAR_1->alien_peb_count += 1;
 } else
  FUNC_0();

 VAR_8 = FUNC_4(VAR_1, VAR_2, VAR_5);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->vol_id = VAR_3;
 VAR_8->lnum = VAR_4;
 if (VAR_6)
  FUNC_2(&VAR_8->u.list, VAR_7);
 else
  FUNC_3(&VAR_8->u.list, VAR_7);
 return 0;
}
