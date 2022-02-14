
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_key {int k_objectid; int k_dir_id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct reiserfs_key*) ;
 int FUNC_2 (struct reiserfs_key*) ;
 int FUNC_3 (char*,size_t,char*,...) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, size_t VAR_1, struct reiserfs_key *VAR_2)
{
 if (VAR_2)
  return FUNC_3(VAR_0, VAR_1, "[%d %d %s %s]",
     FUNC_0(VAR_2->k_dir_id),
     FUNC_0(VAR_2->k_objectid), FUNC_1(VAR_2),
     FUNC_2(VAR_2));
 else
  return FUNC_3(VAR_0, VAR_1, "[NULL]");
}
