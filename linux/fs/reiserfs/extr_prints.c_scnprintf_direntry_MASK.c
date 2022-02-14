
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_dir_entry {int de_namelen; int de_objectid; int de_dir_id; int de_name; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,size_t,char*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, size_t VAR_1,
         struct reiserfs_dir_entry *VAR_2)
{
 char VAR_3[20];

 FUNC_0(VAR_3, VAR_2->de_name, VAR_2->de_namelen > 19 ? 19 : VAR_2->de_namelen);
 VAR_3[VAR_2->de_namelen > 19 ? 19 : VAR_2->de_namelen] = 0;
 return FUNC_1(VAR_0, VAR_1, "\"%s\"==>[%d %d]",
    VAR_3, VAR_2->de_dir_id, VAR_2->de_objectid);
}
