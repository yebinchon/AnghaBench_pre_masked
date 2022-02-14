
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * from; int to; } ;
typedef TYPE_1__ substring_t ;
struct super_block {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct super_block*,TYPE_1__*) ;
 int FUNC_3 (struct super_block*,char*,char*) ;
 int FUNC_4 (struct super_block*,char*) ;
 int VAR_4 ;
 int FUNC_5 (char*,int ,TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 char* FUNC_7 (char**,char*) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_5, char *VAR_6)
{
 substring_t VAR_7[VAR_1];
 char *VAR_8;
 int VAR_9;

 if (!VAR_6)
  return 0;

 while ((VAR_8 = FUNC_7(&VAR_6, ","))) {
  int VAR_10;

  if (!*VAR_8)
   continue;

  VAR_7[0].to = *(VAR_7[0].from = ((void*)0));
  VAR_10 = FUNC_5(VAR_8, VAR_4, VAR_7);

  switch (VAR_10) {
  case 128:
   FUNC_4(VAR_5, "user_xattr options not supported");
   break;
  case 129:
   FUNC_4(VAR_5, "nouser_xattr options not supported");
   break;
  case 132:
   FUNC_4(VAR_5, "acl options not supported");
   break;
  case 130:
   FUNC_4(VAR_5, "noacl options not supported");
   break;

  case 131:
   VAR_9 = FUNC_2(VAR_5, VAR_7);
   if (VAR_9)
    return VAR_9;
   break;
  default:
   FUNC_3(VAR_5, "Unrecognized mount option \"%s\" or missing value", VAR_8);
   return -VAR_0;
  }
 }
 return 0;
}
