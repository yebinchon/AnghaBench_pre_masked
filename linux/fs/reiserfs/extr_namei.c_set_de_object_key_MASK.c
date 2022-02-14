
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_dir_entry {size_t de_entry_num; int * de_deh; int de_objectid; int de_dir_id; int de_ih; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct reiserfs_dir_entry *VAR_0)
{
 FUNC_0(VAR_0->de_entry_num >= FUNC_3(VAR_0->de_ih));
 VAR_0->de_dir_id = FUNC_1(&VAR_0->de_deh[VAR_0->de_entry_num]);
 VAR_0->de_objectid = FUNC_2(&VAR_0->de_deh[VAR_0->de_entry_num]);
}
