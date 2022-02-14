
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct o2net_msg {scalar_t__ buf; } ;
struct dlm_master_requery {int namelen; int name; } ;
struct dlm_lock_resource {int owner; int spinlock; } ;
struct dlm_ctxt {int node_num; int spinlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 struct dlm_lock_resource* FUNC_1 (struct dlm_ctxt*,int ,int ,unsigned int) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_lock_resource*,int ,int ,int ) ;
 int FUNC_3 (struct dlm_ctxt*) ;
 unsigned int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct dlm_lock_resource*) ;
 int FUNC_6 (struct dlm_ctxt*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct o2net_msg *VAR_2, u32 VAR_3, void *VAR_4,
          void **VAR_5)
{
 struct dlm_ctxt *VAR_6 = VAR_4;
 struct dlm_master_requery *VAR_7 = (struct dlm_master_requery *)VAR_2->buf;
 struct dlm_lock_resource *VAR_8 = ((void*)0);
 unsigned int VAR_9;
 int VAR_10 = VAR_1;
 u32 VAR_11 = VAR_0;
 int VAR_12 = 0;

 if (!FUNC_3(VAR_6)) {


  return VAR_10;
 }

 VAR_9 = FUNC_4(VAR_7->name, VAR_7->namelen);

 FUNC_8(&VAR_6->spinlock);
 VAR_8 = FUNC_1(VAR_6, VAR_7->name, VAR_7->namelen, VAR_9);
 if (VAR_8) {
  FUNC_8(&VAR_8->spinlock);
  VAR_10 = VAR_8->owner;
  if (VAR_10 == VAR_6->node_num) {
   int VAR_13 = FUNC_2(VAR_6, VAR_8,
            0, 0, VAR_11);
   if (VAR_13 < 0) {
    FUNC_7(VAR_13);
    FUNC_9(&VAR_8->spinlock);
    FUNC_5(VAR_8);
    FUNC_9(&VAR_6->spinlock);
    FUNC_6(VAR_6);

    return VAR_13;
   } else {
    VAR_12 = 1;
    FUNC_0(VAR_6, VAR_8);
    FUNC_9(&VAR_8->spinlock);
   }
  } else {

   FUNC_9(&VAR_8->spinlock);
   FUNC_5(VAR_8);
  }
 }
 FUNC_9(&VAR_6->spinlock);

 if (!VAR_12)
  FUNC_6(VAR_6);
 return VAR_10;
}
