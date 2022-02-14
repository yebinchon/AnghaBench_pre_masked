
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; unsigned int len; } ;
struct dlm_lock_resource {int owner; TYPE_1__ lockname; } ;
struct dlm_deref_lockres {unsigned int namelen; int name; int node_idx; } ;
struct dlm_ctxt {int name; int key; int node_num; } ;
typedef int deref ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (struct dlm_lock_resource*) ;
 int FUNC_3 (int ,char const*,unsigned int) ;
 int FUNC_4 (struct dlm_deref_lockres*,int ,int) ;
 int FUNC_5 (int ,char*,int ,unsigned int,char const*,int,int) ;
 int FUNC_6 (int ,int ,struct dlm_deref_lockres*,int,int,int*) ;

int FUNC_7(struct dlm_ctxt *VAR_4, struct dlm_lock_resource *VAR_5)
{
 struct dlm_deref_lockres VAR_6;
 int VAR_7 = 0, VAR_8;
 const char *VAR_9;
 unsigned int VAR_10;

 VAR_9 = VAR_5->lockname.name;
 VAR_10 = VAR_5->lockname.len;
 FUNC_1(VAR_10 > VAR_3);

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.node_idx = VAR_4->node_num;
 VAR_6.namelen = VAR_10;
 FUNC_3(VAR_6.name, VAR_9, VAR_10);

 VAR_7 = FUNC_6(VAR_0, VAR_4->key,
     &VAR_6, sizeof(VAR_6), VAR_5->owner, &VAR_8);
 if (VAR_7 < 0)
  FUNC_5(VAR_2, "%s: res %.*s, error %d send DEREF to node %u\n",
       VAR_4->name, VAR_10, VAR_9, VAR_7, VAR_5->owner);
 else if (VAR_8 < 0) {

  FUNC_5(VAR_2, "%s: res %.*s, DEREF to node %u got %d\n",
       VAR_4->name, VAR_10, VAR_9, VAR_5->owner, VAR_8);
  FUNC_2(VAR_5);
  if (VAR_8 == -VAR_1)
   FUNC_0();
 } else
  VAR_7 = VAR_8;

 return VAR_7;
}
