
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_state; } ;
struct cifs_fattr {int cf_flags; int cf_cifsattrs; int cf_nlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,int) ;

__attribute__((used)) static void
FUNC_1(struct inode *VAR_3, struct cifs_fattr *VAR_4)
{





 if (VAR_4->cf_flags & VAR_1) {

  if (VAR_3->i_state & VAR_2) {
   if (VAR_4->cf_cifsattrs & VAR_0)
    FUNC_0(VAR_3, 2);
   else
    FUNC_0(VAR_3, 1);
  }
  return;
 }


 FUNC_0(VAR_3, VAR_4->cf_nlink);
}
