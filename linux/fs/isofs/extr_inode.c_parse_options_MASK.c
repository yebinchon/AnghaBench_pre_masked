
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct iso9660_options {char map; int rock; int joliet; int cruft; int hide; int showassoc; unsigned char check; int nocompress; int blocksize; int fmode; int dmode; int uid_set; int gid_set; int utf8; int overriderockperm; int session; int sbsector; int gid; int uid; int * iocharset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,int *) ;
 char* FUNC_8 (char**,char*) ;
 int VAR_4 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(char *VAR_5, struct iso9660_options *VAR_6)
{
 char *VAR_7;
 int VAR_8;

 VAR_6->map = 'n';
 VAR_6->rock = 1;
 VAR_6->joliet = 1;
 VAR_6->cruft = 0;
 VAR_6->hide = 0;
 VAR_6->showassoc = 0;
 VAR_6->check = 'u';
 VAR_6->nocompress = 0;
 VAR_6->blocksize = 1024;
 VAR_6->fmode = VAR_6->dmode = VAR_2;
 VAR_6->uid_set = 0;
 VAR_6->gid_set = 0;
 VAR_6->gid = VAR_0;
 VAR_6->uid = VAR_1;
 VAR_6->iocharset = ((void*)0);
 VAR_6->utf8 = 0;
 VAR_6->overriderockperm = 0;
 VAR_6->session=-1;
 VAR_6->sbsector=-1;
 if (!VAR_5)
  return 1;

 while ((VAR_7 = FUNC_8(&VAR_5, ",")) != ((void*)0)) {
  int VAR_9;
  substring_t VAR_10[VAR_3];
  unsigned VAR_11;

  if (!*VAR_7)
   continue;

  VAR_9 = FUNC_7(VAR_7, VAR_4, VAR_10);
  switch (VAR_9) {
  case 135:
   VAR_6->rock = 0;
   break;
  case 136:
   VAR_6->joliet = 0;
   break;
  case 144:
   VAR_6->hide = 1;
   break;
  case 129:
  case 131:
   VAR_6->showassoc = 1;
   break;
  case 147:
   VAR_6->cruft = 1;
   break;
  case 128:
   VAR_6->utf8 = 1;
   break;
  case 141:
   VAR_6->map = 'a';
   break;
  case 139:
   VAR_6->map = 'o';
   break;
  case 140:
   VAR_6->map = 'n';
   break;
  case 132:
   if (FUNC_5(&VAR_10[0], &VAR_8))
    return 0;
   VAR_11 = VAR_8;




   if (VAR_11 >= 99)
    return 0;
   VAR_6->session = VAR_11 + 1;
   break;
  case 133:
   if (FUNC_5(&VAR_10[0], &VAR_8))
    return 0;
   VAR_6->sbsector = VAR_8;
   break;
  case 149:
   VAR_6->check = 'r';
   break;
  case 148:
   VAR_6->check = 's';
   break;
  case 143:
   break;
  case 130:
   if (FUNC_5(&VAR_10[0], &VAR_8))
    return 0;
   VAR_6->uid = FUNC_4(FUNC_0(), VAR_8);
   if (!FUNC_9(VAR_6->uid))
    return 0;
   VAR_6->uid_set = 1;
   break;
  case 145:
   if (FUNC_5(&VAR_10[0], &VAR_8))
    return 0;
   VAR_6->gid = FUNC_3(FUNC_0(), VAR_8);
   if (!FUNC_1(VAR_6->gid))
    return 0;
   VAR_6->gid_set = 1;
   break;
  case 138:
   if (FUNC_5(&VAR_10[0], &VAR_8))
    return 0;
   VAR_6->fmode = VAR_8;
   break;
  case 146:
   if (FUNC_5(&VAR_10[0], &VAR_8))
    return 0;
   VAR_6->dmode = VAR_8;
   break;
  case 134:
   VAR_6->overriderockperm = 1;
   break;
  case 150:
   if (FUNC_5(&VAR_10[0], &VAR_8))
    return 0;
   VAR_11 = VAR_8;
   if (VAR_11 != 512 && VAR_11 != 1024 && VAR_11 != 2048)
    return 0;
   VAR_6->blocksize = VAR_11;
   break;
  case 137:
   VAR_6->nocompress = 1;
   break;
  default:
   return 0;
  }
 }
 return 1;
}
