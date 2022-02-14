
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct cifs_unix_set_info_args {int device; int mtime; int atime; int ctime; int gid; int uid; int mode; } ;
struct TYPE_3__ {void* Type; void* Permissions; void* DevMinor; void* DevMajor; void* Gid; void* Uid; void* LastModificationTime; void* LastAccessTime; void* LastStatusChange; void* NumOfBytes; void* EndOfFile; } ;
typedef TYPE_1__ FILE_UNIX_BASIC_INFO ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_9 (int ) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15(FILE_UNIX_BASIC_INFO *VAR_9,
   const struct cifs_unix_set_info_args *VAR_10)
{
 u64 VAR_11 = VAR_0, VAR_12 = VAR_0;
 u64 VAR_13 = VAR_10->mode;

 if (FUNC_14(VAR_10->uid))
  VAR_11 = FUNC_12(&VAR_8, VAR_10->uid);
 if (FUNC_13(VAR_10->gid))
  VAR_12 = FUNC_11(&VAR_8, VAR_10->gid);
 VAR_9->EndOfFile = FUNC_10(VAR_0);
 VAR_9->NumOfBytes = FUNC_10(VAR_0);
 VAR_9->LastStatusChange = FUNC_10(VAR_10->ctime);
 VAR_9->LastAccessTime = FUNC_10(VAR_10->atime);
 VAR_9->LastModificationTime = FUNC_10(VAR_10->mtime);
 VAR_9->Uid = FUNC_10(VAR_11);
 VAR_9->Gid = FUNC_10(VAR_12);

 VAR_9->DevMajor = FUNC_10(FUNC_0(VAR_10->device));
 VAR_9->DevMinor = FUNC_10(FUNC_1(VAR_10->device));
 VAR_9->Permissions = FUNC_10(VAR_13);

 if (FUNC_7(VAR_13))
  VAR_9->Type = FUNC_9(VAR_5);
 else if (FUNC_4(VAR_13))
  VAR_9->Type = FUNC_9(VAR_3);
 else if (FUNC_6(VAR_13))
  VAR_9->Type = FUNC_9(VAR_7);
 else if (FUNC_3(VAR_13))
  VAR_9->Type = FUNC_9(VAR_2);
 else if (FUNC_2(VAR_13))
  VAR_9->Type = FUNC_9(VAR_1);
 else if (FUNC_5(VAR_13))
  VAR_9->Type = FUNC_9(VAR_4);
 else if (FUNC_8(VAR_13))
  VAR_9->Type = FUNC_9(VAR_6);
}
