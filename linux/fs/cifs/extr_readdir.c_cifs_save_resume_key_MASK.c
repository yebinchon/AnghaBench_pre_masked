
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_dirent {int resume_key; int namelen; int name; } ;
struct TYPE_2__ {int resume_key; int resume_name_len; int presume_name; int unicode; int info_level; } ;
struct cifsFileInfo {TYPE_1__ srch_inf; } ;


 int FUNC_0 (struct cifs_dirent*,char const*,int ,int ) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0,
 struct cifsFileInfo *VAR_1)
{
 struct cifs_dirent VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2, VAR_0, VAR_1->srch_inf.info_level,
         VAR_1->srch_inf.unicode);
 if (!VAR_3) {
  VAR_1->srch_inf.presume_name = VAR_2.name;
  VAR_1->srch_inf.resume_name_len = VAR_2.namelen;
  VAR_1->srch_inf.resume_key = VAR_2.resume_key;
 }
 return VAR_3;
}
