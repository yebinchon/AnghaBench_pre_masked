
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mode; int i_ino; TYPE_1__* i_sb; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {int access; } ;
struct TYPE_3__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;


 int VAR_10 ;

 int VAR_11 ;
 struct cred* FUNC_2 () ;
 int FUNC_3 (int ,char*,int ,int ,int,int) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (struct inode*,struct cred const*,int) ;
 int FUNC_6 (struct inode*,int) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (int ,struct inode*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

int FUNC_12(struct inode *VAR_12, int VAR_13)
{
 const struct cred *VAR_14 = FUNC_2();
 int VAR_15 = 0;

 FUNC_7(VAR_12, VAR_8);

 if ((VAR_13 & (VAR_6 | VAR_7 | VAR_3)) == 0)
  goto out;

 if (VAR_13 & (VAR_1 | VAR_2))
  goto force_lookup;

 switch (VAR_12->i_mode & VAR_10) {
  case 129:
   goto out;
  case 128:
   if ((VAR_13 & VAR_5) &&
      FUNC_9(VAR_12, VAR_9))
    return 0;
   break;
  case 130:




   if ((VAR_13 & VAR_7) && !(VAR_13 & VAR_6))
    goto out;
 }

force_lookup:
 if (!FUNC_0(VAR_12)->access)
  goto out_notsup;


 FUNC_10();
 VAR_15 = FUNC_5(VAR_12, VAR_14, VAR_13|VAR_4);
 FUNC_11();
 if (VAR_15 == -VAR_0 && !(VAR_13 & VAR_4)) {

  VAR_15 = FUNC_5(VAR_12, VAR_14, VAR_13);
 }
out:
 if (!VAR_15 && (VAR_13 & VAR_3))
  VAR_15 = FUNC_6(VAR_12, VAR_13);

 FUNC_3(VAR_11, "NFS: permission(%s/%lu), mask=0x%x, res=%d\n",
  VAR_12->i_sb->s_id, VAR_12->i_ino, VAR_13, VAR_15);
 return VAR_15;
out_notsup:
 if (VAR_13 & VAR_4)
  return -VAR_0;

 VAR_15 = FUNC_8(FUNC_1(VAR_12), VAR_12);
 if (VAR_15 == 0)
  VAR_15 = FUNC_4(VAR_12, VAR_13);
 goto out;
}
