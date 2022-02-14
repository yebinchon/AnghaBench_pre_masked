
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_dir_file_info {char* last_name; unsigned int next_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_4(struct ceph_dir_file_info *VAR_2, const char *VAR_3,
              int VAR_4, unsigned VAR_5)
{
 char *VAR_6 = FUNC_2(VAR_4+1, VAR_1);
 if (!VAR_6)
  return -VAR_0;
 FUNC_1(VAR_2->last_name);
 VAR_2->last_name = VAR_6;
 FUNC_3(VAR_2->last_name, VAR_3, VAR_4);
 VAR_2->last_name[VAR_4] = 0;
 VAR_2->next_offset = VAR_5;
 FUNC_0("note_last_dentry '%s'\n", VAR_2->last_name);
 return 0;
}
