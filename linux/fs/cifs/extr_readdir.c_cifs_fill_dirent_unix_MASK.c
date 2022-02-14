
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cifs_dirent {int ino; int resume_key; int * name; int namelen; } ;
struct TYPE_4__ {int UniqueId; } ;
struct TYPE_5__ {TYPE_1__ basic; int ResumeKey; int * FileName; } ;
typedef TYPE_2__ FILE_UNIX_INFO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct cifs_dirent *VAR_1,
  const FILE_UNIX_INFO *VAR_2, bool VAR_3)
{
 VAR_1->name = &VAR_2->FileName[0];
 if (VAR_3)
  VAR_1->namelen = FUNC_0(VAR_1->name);
 else
  VAR_1->namelen = FUNC_2(VAR_1->name, VAR_0);
 VAR_1->resume_key = VAR_2->ResumeKey;
 VAR_1->ino = FUNC_1(VAR_2->basic.UniqueId);
}
