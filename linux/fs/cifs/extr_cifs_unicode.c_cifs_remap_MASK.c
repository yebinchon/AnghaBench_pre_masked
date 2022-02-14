
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_sb_info {int mnt_cifs_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(struct cifs_sb_info *VAR_5)
{
 int VAR_6;

 if (VAR_5->mnt_cifs_flags & VAR_0)
  VAR_6 = VAR_3;
 else if (VAR_5->mnt_cifs_flags & VAR_1)
  VAR_6 = VAR_4;
 else
  VAR_6 = VAR_2;

 return VAR_6;
}
