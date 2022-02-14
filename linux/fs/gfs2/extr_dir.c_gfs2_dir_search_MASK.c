
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct qstr {int dummy; } ;
struct TYPE_3__ {int no_formal_ino; int no_addr; } ;
struct inode {int i_sb; TYPE_1__ de_inum; int de_rahead; int de_type; } ;
struct gfs2_dirent {int i_sb; TYPE_1__ de_inum; int de_rahead; int de_type; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {int i_rahead; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct buffer_head*) ;
 int VAR_3 ;
 struct inode* FUNC_7 (struct inode*,struct qstr const*,int ,struct buffer_head**) ;
 struct inode* FUNC_8 (int ,int ,int ,int ,int ) ;

struct inode *FUNC_9(struct inode *VAR_4, const struct qstr *VAR_5,
         bool VAR_6)
{
 struct buffer_head *VAR_7;
 struct gfs2_dirent *VAR_8;
 u64 VAR_9, VAR_10;
 u16 VAR_11;

 VAR_8 = FUNC_7(VAR_4, VAR_5, VAR_3, &VAR_7);
 if (VAR_8) {
  struct inode *VAR_12;
  u16 VAR_13;

  if (FUNC_3(VAR_8))
   return FUNC_0(VAR_8);
  VAR_11 = FUNC_4(VAR_8->de_type);
  VAR_13 = FUNC_4(VAR_8->de_rahead);
  VAR_9 = FUNC_5(VAR_8->de_inum.no_addr);
  VAR_10 = FUNC_5(VAR_8->de_inum.no_formal_ino);
  FUNC_6(VAR_7);
  if (VAR_6)
   return FUNC_1(-VAR_0);
  VAR_12 = FUNC_8(VAR_4->i_sb, VAR_11, VAR_9, VAR_10,
       VAR_2 );
  if (!FUNC_3(VAR_12))
   FUNC_2(VAR_12)->i_rahead = VAR_13;
  return VAR_12;
 }
 return FUNC_1(-VAR_1);
}
