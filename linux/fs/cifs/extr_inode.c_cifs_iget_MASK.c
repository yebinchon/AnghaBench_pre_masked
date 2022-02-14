
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct inode {int i_flags; int i_state; unsigned long i_ino; } ;
struct cifs_fattr {int cf_flags; int cf_uniqueid; } ;
struct TYPE_2__ {int * fscache; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct inode*,struct cifs_fattr*) ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long FUNC_5 (int ) ;
 struct inode* FUNC_6 (struct super_block*,unsigned long,int ,int ,struct cifs_fattr*) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct super_block*,int ) ;
 int FUNC_10 (struct inode*) ;

struct inode *
FUNC_11(struct super_block *VAR_9, struct cifs_fattr *VAR_10)
{
 unsigned long VAR_11;
 struct inode *VAR_12;

retry_iget5_locked:
 FUNC_3(VAR_1, "looking for uniqueid=%llu\n", VAR_10->cf_uniqueid);


 VAR_11 = FUNC_5(VAR_10->cf_uniqueid);

 VAR_12 = FUNC_6(VAR_9, VAR_11, VAR_7, VAR_8, VAR_10);
 if (VAR_12) {

  if (VAR_10->cf_flags & VAR_0) {
   VAR_10->cf_flags &= ~VAR_0;

   if (FUNC_7(VAR_12)) {
    FUNC_2(FUNC_1(VAR_9));
    FUNC_8(VAR_12);
    VAR_10->cf_uniqueid = FUNC_9(VAR_9, VAR_3);
    goto retry_iget5_locked;
   }
  }

  FUNC_4(VAR_12, VAR_10);
  if (VAR_9->s_flags & VAR_4)
   VAR_12->i_flags |= VAR_5 | VAR_6;
  if (VAR_12->i_state & VAR_2) {
   VAR_12->i_ino = VAR_11;




   FUNC_10(VAR_12);
  }
 }

 return VAR_12;
}
