
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {char* name; unsigned int len; } ;
struct dlm_lock_resource {TYPE_1__ lockname; } ;
struct dlm_deref_lockres_done {unsigned int namelen; int name; int node_idx; } ;
struct dlm_ctxt {int name; int key; int node_num; } ;
typedef int deref ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct dlm_lock_resource*) ;
 int FUNC_2 (int ,char const*,unsigned int) ;
 int FUNC_3 (struct dlm_deref_lockres_done*,int ,int) ;
 int FUNC_4 (int ,char*,int ,unsigned int,char const*,int,int) ;
 int FUNC_5 (int ,int ,struct dlm_deref_lockres_done*,int,int,int*) ;

__attribute__((used)) static void FUNC_6(struct dlm_ctxt *VAR_3,
  struct dlm_lock_resource *VAR_4, u8 VAR_5)
{
 struct dlm_deref_lockres_done VAR_6;
 int VAR_7 = 0, VAR_8;
 const char *VAR_9;
 unsigned int VAR_10;

 VAR_9 = VAR_4->lockname.name;
 VAR_10 = VAR_4->lockname.len;
 FUNC_0(VAR_10 > VAR_2);

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.node_idx = VAR_3->node_num;
 VAR_6.namelen = VAR_10;
 FUNC_2(VAR_6.name, VAR_9, VAR_10);

 VAR_7 = FUNC_5(VAR_0, VAR_3->key,
     &VAR_6, sizeof(VAR_6), VAR_5, &VAR_8);
 if (VAR_7 < 0) {
  FUNC_4(VAR_1, "%s: res %.*s, error %d send DEREF DONE "
    " to node %u\n", VAR_3->name, VAR_10,
    VAR_9, VAR_7, VAR_5);
 } else if (VAR_8 < 0) {

  FUNC_4(VAR_1, "%s: res %.*s, DEREF to node %u got %d\n",
       VAR_3->name, VAR_10, VAR_9, VAR_5, VAR_8);
  FUNC_1(VAR_4);
 }
}
