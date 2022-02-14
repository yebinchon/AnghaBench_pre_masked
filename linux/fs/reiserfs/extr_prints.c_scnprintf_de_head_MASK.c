
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_de_head {int dummy; } ;


 int FUNC_0 (struct reiserfs_de_head*) ;
 int FUNC_1 (struct reiserfs_de_head*) ;
 int FUNC_2 (struct reiserfs_de_head*) ;
 int FUNC_3 (struct reiserfs_de_head*) ;
 int FUNC_4 (struct reiserfs_de_head*) ;
 int FUNC_5 (char*,size_t,char*,...) ;

__attribute__((used)) static int FUNC_6(char *VAR_0, size_t VAR_1,
        struct reiserfs_de_head *VAR_2)
{
 if (VAR_2)
  return FUNC_5(VAR_0, VAR_1,
     "[offset=%d dir_id=%d objectid=%d location=%d state=%04x]",
     FUNC_3(VAR_2), FUNC_0(VAR_2),
     FUNC_2(VAR_2), FUNC_1(VAR_2),
     FUNC_4(VAR_2));
 else
  return FUNC_5(VAR_0, VAR_1, "[NULL]");

}
