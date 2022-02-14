
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int NextEntryOffset; } ;
struct TYPE_3__ {int FileNameLength; } ;
typedef TYPE_1__ FIND_FILE_STANDARD_INFO ;
typedef TYPE_2__ FILE_DIRECTORY_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static char *FUNC_2(char *VAR_3, char *VAR_4, int VAR_5)
{
 char *VAR_6;
 FILE_DIRECTORY_INFO *VAR_7 = (FILE_DIRECTORY_INFO *)VAR_3;

 if (VAR_5 == VAR_1) {
  FIND_FILE_STANDARD_INFO *VAR_8;
  VAR_8 = (FIND_FILE_STANDARD_INFO *)VAR_7;

  VAR_6 = VAR_3 + sizeof(FIND_FILE_STANDARD_INFO) +
    VAR_8->FileNameLength;
 } else {
  u32 VAR_9 = FUNC_1(VAR_7->NextEntryOffset);

  if (VAR_3 + VAR_9 < VAR_3) {
   FUNC_0(VAR_2, "invalid offset %u\n", VAR_9);
   return ((void*)0);
  }
  VAR_6 = VAR_3 + VAR_9;
 }
 FUNC_0(VAR_0, "new entry %p old entry %p\n", VAR_6, VAR_3);

 if (VAR_6 >= VAR_4) {
  FUNC_0(VAR_2, "search entry %p began after end of SMB %p old entry %p\n",
    VAR_6, VAR_4, VAR_3);
  return ((void*)0);
 } else if (((VAR_5 == VAR_1) &&
      (VAR_6 + sizeof(FIND_FILE_STANDARD_INFO) > VAR_4))
    || ((VAR_5 != VAR_1) &&
     (VAR_6 + sizeof(FILE_DIRECTORY_INFO) > VAR_4))) {
  FUNC_0(VAR_2, "search entry %p extends after end of SMB %p\n",
    VAR_6, VAR_4);
  return ((void*)0);
 } else
  return VAR_6;

}
