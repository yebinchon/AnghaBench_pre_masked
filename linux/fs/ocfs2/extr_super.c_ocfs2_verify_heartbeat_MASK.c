
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int s_mount_opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct ocfs2_super*) ;
 int FUNC_2 (struct ocfs2_super*) ;
 scalar_t__ FUNC_3 (struct ocfs2_super*) ;
 scalar_t__ FUNC_4 (struct ocfs2_super*) ;

__attribute__((used)) static int FUNC_5(struct ocfs2_super *VAR_4)
{
 u32 VAR_5 = VAR_3 | VAR_2;

 if (VAR_4->s_mount_opt & VAR_5) {
  if (FUNC_3(VAR_4)) {
   FUNC_0(VAR_1, "Cannot heartbeat on a locally "
        "mounted device.\n");
   return -VAR_0;
  }
  if (FUNC_4(VAR_4)) {
   FUNC_0(VAR_1, "Userspace stack expected, but "
        "o2cb heartbeat arguments passed to mount\n");
   return -VAR_0;
  }
  if (((VAR_4->s_mount_opt & VAR_2) &&
       !FUNC_1(VAR_4)) ||
      ((VAR_4->s_mount_opt & VAR_3) &&
       FUNC_1(VAR_4))) {
   FUNC_0(VAR_1, "Mismatching o2cb heartbeat modes\n");
   return -VAR_0;
  }
 }

 if (!(VAR_4->s_mount_opt & VAR_5)) {
  if (!FUNC_3(VAR_4) && !FUNC_2(VAR_4) &&
      !FUNC_4(VAR_4)) {
   FUNC_0(VAR_1, "Heartbeat has to be started to mount "
        "a read-write clustered device.\n");
   return -VAR_0;
  }
 }

 return 0;
}
