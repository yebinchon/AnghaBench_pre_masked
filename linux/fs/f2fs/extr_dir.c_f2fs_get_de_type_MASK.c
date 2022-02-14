
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_dir_entry {size_t file_type; } ;


 unsigned char VAR_0 ;
 size_t VAR_1 ;
 unsigned char* VAR_2 ;

unsigned char FUNC_0(struct f2fs_dir_entry *VAR_3)
{
 if (VAR_3->file_type < VAR_1)
  return VAR_2[VAR_3->file_type];
 return VAR_0;
}
