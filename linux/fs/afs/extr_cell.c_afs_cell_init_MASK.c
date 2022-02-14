
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_net {int cells_lock; int ws_cell; } ;
struct afs_cell {int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct afs_cell*) ;
 int FUNC_1 (struct afs_cell*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct afs_cell*) ;
 struct afs_cell* FUNC_6 (struct afs_net*,char const*,size_t,char const*,int) ;
 int FUNC_7 (struct afs_net*,struct afs_cell*) ;
 struct afs_cell* FUNC_8 (int ) ;
 int FUNC_9 (int ,struct afs_cell*) ;
 char* FUNC_10 (char const*,char) ;
 size_t FUNC_11 (char const*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct afs_net *VAR_1, const char *VAR_2)
{
 struct afs_cell *VAR_3, *VAR_4;
 const char *VAR_5, *VAR_6;
 size_t VAR_7;

 FUNC_3("");

 if (!VAR_2) {



  FUNC_4(" = 0 [no root]");
  return 0;
 }

 VAR_5 = FUNC_10(VAR_2, ':');
 if (!VAR_5) {
  FUNC_2("kAFS: no VL server IP addresses specified");
  VAR_6 = ((void*)0);
  VAR_7 = FUNC_11(VAR_2);
 } else {
  VAR_6 = VAR_5 + 1;
  VAR_7 = VAR_5 - VAR_2;
 }


 VAR_4 = FUNC_6(VAR_1, VAR_2, VAR_7, VAR_6, 0);
 if (FUNC_0(VAR_4)) {
  FUNC_4(" = %ld", FUNC_1(VAR_4));
  return FUNC_1(VAR_4);
 }

 if (!FUNC_12(VAR_0, &VAR_4->flags))
  FUNC_5(VAR_4);


 FUNC_13(&VAR_1->cells_lock);
 VAR_3 = FUNC_8(VAR_1->ws_cell);
 FUNC_9(VAR_1->ws_cell, VAR_4);
 FUNC_14(&VAR_1->cells_lock);

 FUNC_7(VAR_1, VAR_3);
 FUNC_4(" = 0");
 return 0;
}
