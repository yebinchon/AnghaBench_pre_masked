
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int NextEntryOffset; int FileNameLength; } ;
typedef TYPE_1__ FILE_DIRECTORY_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static unsigned int
FUNC_2(char *VAR_1, char *VAR_2, char **VAR_3, size_t VAR_4)
{
 int VAR_5;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;
 char *VAR_8;
 FILE_DIRECTORY_INFO *VAR_9;

 if (VAR_1 == ((void*)0))
  return 0;

 VAR_8 = VAR_1;

 while (1) {
  if (VAR_8 + VAR_7 < VAR_8 ||
      VAR_8 + VAR_7 > VAR_2 ||
      VAR_8 + VAR_7 + VAR_4 > VAR_2) {
   FUNC_0(VAR_0, "malformed search entry would overflow\n");
   break;
  }

  VAR_8 = VAR_8 + VAR_7;
  VAR_9 = (FILE_DIRECTORY_INFO *)VAR_8;

  VAR_5 = FUNC_1(VAR_9->FileNameLength);
  if (VAR_8 + VAR_5 < VAR_8 ||
      VAR_8 + VAR_5 > VAR_2 ||
      VAR_8 + VAR_5 + VAR_4 > VAR_2) {
   FUNC_0(VAR_0, "directory entry name would overflow frame end of buf %p\n",
     VAR_2);
   break;
  }

  *VAR_3 = VAR_8;
  VAR_6++;

  VAR_7 = FUNC_1(VAR_9->NextEntryOffset);
  if (!VAR_7)
   break;
 }

 return VAR_6;
}
