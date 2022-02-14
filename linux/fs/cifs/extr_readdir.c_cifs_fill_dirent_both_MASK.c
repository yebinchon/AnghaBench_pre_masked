
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cifs_dirent {int resume_key; int namelen; int * name; } ;
struct TYPE_3__ {int FileIndex; int FileNameLength; int * FileName; } ;
typedef TYPE_1__ FILE_BOTH_DIRECTORY_INFO ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct cifs_dirent *VAR_0,
  const FILE_BOTH_DIRECTORY_INFO *VAR_1)
{
 VAR_0->name = &VAR_1->FileName[0];
 VAR_0->namelen = FUNC_0(VAR_1->FileNameLength);
 VAR_0->resume_key = VAR_1->FileIndex;
}
