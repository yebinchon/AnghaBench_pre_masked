
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tid_t ;
struct metapage {int dummy; } ;
struct inode {int dummy; } ;
struct dir_table_slot {int slot; } ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 (struct dir_table_slot*,int ) ;
 struct dir_table_slot* FUNC_1 (struct inode*,int ,struct metapage**,int *) ;
 int FUNC_2 (int ,struct inode*,struct metapage*,int ) ;
 int FUNC_3 (struct metapage*) ;
 int FUNC_4 (int ,struct inode*) ;

__attribute__((used)) static void FUNC_5(tid_t VAR_1, struct inode *VAR_2, u32 VAR_3, s64 VAR_4,
    int VAR_5, struct metapage ** VAR_6, s64 *VAR_7)
{
 struct dir_table_slot *VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_6, VAR_7);

 if (!VAR_8)
  return;

 FUNC_0(VAR_8, VAR_4);
 VAR_8->slot = VAR_5;

 if (*VAR_6) {
  FUNC_2(VAR_1, VAR_2, *VAR_6, VAR_3);
  FUNC_3(*VAR_6);
 } else
  FUNC_4(VAR_0, VAR_2);
}
