
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t umode_t ;
struct f2fs_dir_entry {int file_type; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_0(struct f2fs_dir_entry *VAR_3, umode_t VAR_4)
{
 VAR_3->file_type = VAR_2[(VAR_4 & VAR_0) >> VAR_1];
}
