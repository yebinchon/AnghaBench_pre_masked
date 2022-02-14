
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_sb; } ;
struct cifs_tcon {int Flags; } ;
struct cifs_sb_info {int dummy; } ;


 struct cifs_sb_info* FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (struct dentry*,int) ;
 struct cifs_tcon* FUNC_2 (struct cifs_sb_info*) ;

char *
FUNC_3(struct dentry *VAR_1)
{
 struct cifs_sb_info *VAR_2 = FUNC_0(VAR_1->d_sb);
 struct cifs_tcon *VAR_3 = FUNC_2(VAR_2);
 bool VAR_4 = VAR_3->Flags & VAR_0;

 return FUNC_1(VAR_1,
            VAR_4);
}
