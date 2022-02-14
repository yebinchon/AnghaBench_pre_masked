
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat_entry {int dummy; } ;
struct free_nid {scalar_t__ state; int nid; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int nid_list_lock; int available_nids; } ;
typedef int nid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct f2fs_sb_info*,struct free_nid*,scalar_t__) ;
 struct free_nid* FUNC_2 (struct f2fs_nm_info*,int ) ;
 struct nat_entry* FUNC_3 (struct f2fs_nm_info*,int ) ;
 int FUNC_4 (struct f2fs_sb_info*,int ) ;
 struct free_nid* FUNC_5 (int ,int) ;
 int VAR_6 ;
 int FUNC_6 (struct nat_entry*,int ) ;
 int FUNC_7 (int ,struct free_nid*) ;
 scalar_t__ FUNC_8 (struct nat_entry*) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct f2fs_sb_info*,int ,int,int) ;

__attribute__((used)) static bool FUNC_15(struct f2fs_sb_info *VAR_7,
    nid_t VAR_8, bool VAR_9, bool VAR_10)
{
 struct f2fs_nm_info *VAR_11 = FUNC_0(VAR_7);
 struct free_nid *VAR_12, *VAR_13;
 struct nat_entry *VAR_14;
 int VAR_15 = -VAR_0;
 bool VAR_16 = 0;


 if (FUNC_13(VAR_8 == 0))
  return 0;

 if (FUNC_13(FUNC_4(VAR_7, VAR_8)))
  return 0;

 VAR_12 = FUNC_5(VAR_6, VAR_2);
 VAR_12->nid = VAR_8;
 VAR_12->state = VAR_1;

 FUNC_9(VAR_2 | VAR_5);

 FUNC_11(&VAR_11->nid_list_lock);

 if (VAR_9) {
  VAR_14 = FUNC_3(VAR_11, VAR_8);
  if (VAR_14 && (!FUNC_6(VAR_14, VAR_3) ||
    FUNC_8(VAR_14) != VAR_4))
   goto err_out;

  VAR_13 = FUNC_2(VAR_11, VAR_8);
  if (VAR_13) {
   if (VAR_13->state == VAR_1)
    VAR_16 = 1;
   goto err_out;
  }
 }
 VAR_16 = 1;
 VAR_15 = FUNC_1(VAR_7, VAR_12, VAR_1);
err_out:
 if (VAR_10) {
  FUNC_14(VAR_7, VAR_8, VAR_16, VAR_9);
  if (!VAR_9)
   VAR_11->available_nids++;
 }
 FUNC_12(&VAR_11->nid_list_lock);
 FUNC_10();

 if (VAR_15)
  FUNC_7(VAR_6, VAR_12);
 return VAR_16;
}
