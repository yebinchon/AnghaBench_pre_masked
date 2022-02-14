
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ taken_empty_lebs; } ;
struct TYPE_3__ {int * buf; } ;
struct ubifs_info {int bulk_read; TYPE_2__ lst; int need_recovery; int bu_mutex; TYPE_1__ bu; scalar_t__ ro_error; scalar_t__ ro_mount; scalar_t__ ro_media; } ;
struct super_block {int s_flags; struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct ubifs_info*,int) ;
 int FUNC_7 (struct ubifs_info*,char*) ;
 int FUNC_8 (struct ubifs_info*,char*) ;
 int FUNC_9 (struct ubifs_info*,char*,int) ;
 int FUNC_10 (struct ubifs_info*) ;
 int FUNC_11 (struct ubifs_info*) ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_2, int *VAR_3, char *VAR_4)
{
 int VAR_5;
 struct ubifs_info *VAR_6 = VAR_2->s_fs_info;

 FUNC_5(VAR_2);
 FUNC_1("old flags %#lx, new flags %#x", VAR_2->s_flags, *VAR_3);

 VAR_5 = FUNC_9(VAR_6, VAR_4, 1);
 if (VAR_5) {
  FUNC_7(VAR_6, "invalid or unknown remount parameter");
  return VAR_5;
 }

 if (VAR_6->ro_mount && !(*VAR_3 & VAR_1)) {
  if (VAR_6->ro_error) {
   FUNC_8(VAR_6, "cannot re-mount R/W due to prior errors");
   return -VAR_0;
  }
  if (VAR_6->ro_media) {
   FUNC_8(VAR_6, "cannot re-mount R/W - UBI volume is R/O");
   return -VAR_0;
  }
  VAR_5 = FUNC_11(VAR_6);
  if (VAR_5)
   return VAR_5;
 } else if (!VAR_6->ro_mount && (*VAR_3 & VAR_1)) {
  if (VAR_6->ro_error) {
   FUNC_8(VAR_6, "cannot re-mount R/O due to prior errors");
   return -VAR_0;
  }
  FUNC_10(VAR_6);
 }

 if (VAR_6->bulk_read == 1)
  FUNC_0(VAR_6);
 else {
  FUNC_1("disable bulk-read");
  FUNC_3(&VAR_6->bu_mutex);
  FUNC_2(VAR_6->bu.buf);
  VAR_6->bu.buf = ((void*)0);
  FUNC_4(&VAR_6->bu_mutex);
 }

 if (!VAR_6->need_recovery)
  FUNC_6(VAR_6, VAR_6->lst.taken_empty_lebs > 0);

 return 0;
}
