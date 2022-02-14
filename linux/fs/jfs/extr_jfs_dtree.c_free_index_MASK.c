
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int tid_t ;
struct metapage {int dummy; } ;
struct inode {int dummy; } ;
struct dir_table_slot {int addr2; scalar_t__ addr1; scalar_t__ slot; int flag; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct dir_table_slot* FUNC_1 (struct inode*,int ,struct metapage**,int *) ;
 int FUNC_2 (int ,struct inode*,struct metapage*,int ) ;
 int FUNC_3 (struct metapage*) ;
 int FUNC_4 (struct metapage*) ;
 int FUNC_5 (int ,struct inode*) ;

__attribute__((used)) static void FUNC_6(tid_t VAR_2, struct inode *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct dir_table_slot *VAR_6;
 s64 VAR_7;
 struct metapage *VAR_8 = ((void*)0);

 VAR_6 = FUNC_1(VAR_3, VAR_4, &VAR_8, &VAR_7);

 if (!VAR_6)
  return;

 VAR_6->flag = VAR_1;
 VAR_6->slot = VAR_6->addr1 = 0;
 VAR_6->addr2 = FUNC_0(VAR_5);

 if (VAR_8) {
  FUNC_2(VAR_2, VAR_3, VAR_8, VAR_4);
  FUNC_3(VAR_8);
  FUNC_4(VAR_8);
 } else
  FUNC_5(VAR_0, VAR_3);
}
