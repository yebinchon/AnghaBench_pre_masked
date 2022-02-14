
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reiserfs_iget_args {unsigned long dirid; } ;
struct inode {scalar_t__ i_nlink; int i_sb; int i_ino; } ;
struct TYPE_3__ {unsigned long k_dir_id; scalar_t__ k_type; scalar_t__ k_offset; int k_objectid; } ;
struct cpu_key {TYPE_1__ on_disk_key; int version; } ;
struct TYPE_4__ {int s_is_unlinked_ok; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int *) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,char*,struct cpu_key*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int ,char*,char*,struct cpu_key*) ;
 int FUNC_11 (int ,struct cpu_key*,int *) ;

void FUNC_12(struct inode *VAR_5,
    struct reiserfs_iget_args *VAR_6)
{
 FUNC_0(VAR_4);
 struct cpu_key VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_8 = VAR_6->dirid;





 VAR_7.version = VAR_2;
 VAR_7.on_disk_key.k_dir_id = VAR_8;
 VAR_7.on_disk_key.k_objectid = VAR_5->i_ino;
 VAR_7.on_disk_key.k_offset = 0;
 VAR_7.on_disk_key.k_type = 0;


 VAR_9 = FUNC_11(VAR_5->i_sb, &VAR_7, &VAR_4);
 if (VAR_9 == VAR_0) {
  FUNC_8(VAR_5->i_sb, "vs-13070",
          "i/o failure occurred trying to find "
          "stat data of %K", &VAR_7);
  FUNC_9(VAR_5);
  return;
 }


 if (VAR_9 != VAR_1) {
  FUNC_6(&VAR_4);
  FUNC_9(VAR_5);
  FUNC_3(VAR_5);
  return;
 }

 FUNC_5(VAR_5, &VAR_4);
 if ((VAR_5->i_nlink == 0) &&
     !FUNC_1(VAR_5->i_sb)->s_is_unlinked_ok) {
  FUNC_10(VAR_5->i_sb, "vs-13075",
     "dead inode read from disk %K. "
     "This is likely to be race with knfsd. Ignore",
     &VAR_7);
  FUNC_9(VAR_5);
 }


 FUNC_7(&VAR_4);




 if (FUNC_4(VAR_5) == VAR_3)
  FUNC_2(VAR_5);
}
