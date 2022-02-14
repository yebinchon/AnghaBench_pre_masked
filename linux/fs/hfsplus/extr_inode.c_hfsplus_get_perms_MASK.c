
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct inode {int i_mode; int i_flags; int i_gid; int i_uid; int i_sb; } ;
struct hfsplus_sb_info {int umask; int gid; int uid; } ;
struct hfsplus_perm {int rootflags; int userflags; int group; int owner; int mode; } ;
struct TYPE_2__ {int userflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct hfsplus_sb_info* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,int ) ;

__attribute__((used)) static void FUNC_8(struct inode *VAR_10,
  struct hfsplus_perm *VAR_11, int VAR_12)
{
 struct hfsplus_sb_info *VAR_13 = FUNC_1(VAR_10->i_sb);
 u16 VAR_14;

 VAR_14 = FUNC_2(VAR_11->mode);

 FUNC_7(VAR_10, FUNC_3(VAR_11->owner));
 if (!FUNC_6(VAR_10) && !VAR_14)
  VAR_10->i_uid = VAR_13->uid;

 FUNC_5(VAR_10, FUNC_3(VAR_11->group));
 if (!FUNC_4(VAR_10) && !VAR_14)
  VAR_10->i_gid = VAR_13->gid;

 if (VAR_12) {
  VAR_14 = VAR_14 ? (VAR_14 & VAR_3) : (VAR_8 & ~(VAR_13->umask));
  VAR_14 |= VAR_4;
 } else if (!VAR_14)
  VAR_14 = VAR_5 | ((VAR_7|VAR_9) & ~(VAR_13->umask));
 VAR_10->i_mode = VAR_14;

 FUNC_0(VAR_10)->userflags = VAR_11->userflags;
 if (VAR_11->rootflags & VAR_1)
  VAR_10->i_flags |= VAR_6;
 else
  VAR_10->i_flags &= ~VAR_6;
 if (VAR_11->rootflags & VAR_0)
  VAR_10->i_flags |= VAR_2;
 else
  VAR_10->i_flags &= ~VAR_2;
}
