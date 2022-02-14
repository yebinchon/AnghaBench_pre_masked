
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_vol {int prepath; int UNC; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char const*,int,int ) ;
 size_t FUNC_4 (char*,char const*) ;
 char* FUNC_5 (char const*,char const*) ;
 size_t FUNC_6 (char const*,char const*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_4, struct smb_vol *VAR_5)
{
 char *VAR_6;
 const char *VAR_7 = "/\\";
 size_t VAR_8;

 if (FUNC_7(!VAR_4 || !*VAR_4)) {
  FUNC_0(VAR_3, "Device name not specified.\n");
  return -VAR_0;
 }


 VAR_8 = FUNC_6(VAR_4, VAR_7);
 if (VAR_8 != 2)
  return -VAR_0;


 VAR_6 = FUNC_5(VAR_4 + 2, VAR_7);
 if (!VAR_6)
  return -VAR_0;


 ++VAR_6;


 VAR_8 = FUNC_4(VAR_6, VAR_7);


 VAR_6 += VAR_8;
 VAR_5->UNC = FUNC_3(VAR_4, VAR_6 - VAR_4, VAR_2);
 if (!VAR_5->UNC)
  return -VAR_1;

 FUNC_1(VAR_5->UNC, '\\');


 if (*VAR_6 == '/' || *VAR_6 == '\\')
  VAR_6++;


 if (!*VAR_6)
  return 0;

 VAR_5->prepath = FUNC_2(VAR_6, VAR_2);
 if (!VAR_5->prepath)
  return -VAR_1;

 return 0;
}
