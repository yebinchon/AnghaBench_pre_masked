
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct dlm_master_list_entry {scalar_t__ type; int maybe_map; void* master; void* new_master; int spinlock; int wq; int woken; } ;
struct dlm_lock_resource {int dummy; } ;
struct dlm_ctxt {void* node_num; int name; int master_lock; int spinlock; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 int FUNC_3 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct dlm_ctxt*,struct dlm_master_list_entry**,char*,unsigned int) ;
 int FUNC_7 (struct dlm_master_list_entry*,scalar_t__,struct dlm_ctxt*,struct dlm_lock_resource*,char const*,unsigned int) ;
 int FUNC_8 (int ,char*,unsigned int,...) ;
 int FUNC_9 (void*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct dlm_ctxt *VAR_5,
     struct dlm_lock_resource *VAR_6,
     struct dlm_master_list_entry *VAR_7,
     struct dlm_master_list_entry **VAR_8,
     const char *VAR_9, unsigned int VAR_10,
     u8 VAR_11, u8 VAR_12)
{
 int VAR_13;
 int VAR_14 = 0;

 *VAR_8 = ((void*)0);

 FUNC_4(&VAR_5->spinlock);
 FUNC_4(&VAR_5->master_lock);


 VAR_13 = FUNC_6(VAR_5, VAR_8, (char *)VAR_9, VAR_10);
 if (VAR_13) {
  struct dlm_master_list_entry *VAR_15 = *VAR_8;
  FUNC_10(&VAR_15->spinlock);
  if (VAR_15->type == VAR_2) {
   if (VAR_12 == VAR_5->node_num) {

    FUNC_8(0, "tried to migrate %.*s, but some "
         "process beat me to it\n",
         VAR_10, VAR_9);
    FUNC_11(&VAR_15->spinlock);
    return -VAR_3;
   } else {

    FUNC_8(VAR_4, "migration error  mle: "
         "master=%u new_master=%u // request: "
         "master=%u new_master=%u // "
         "lockres=%.*s\n",
         VAR_15->master, VAR_15->new_master,
         VAR_12, VAR_11,
         VAR_10, VAR_9);
    FUNC_0();
   }
  } else {

   VAR_15->master = VAR_12;
   FUNC_5(&VAR_15->woken, 1);
   FUNC_12(&VAR_15->wq);

   FUNC_3(VAR_5, VAR_15);
   FUNC_2(VAR_5, VAR_15);
   if (VAR_15->type == VAR_1) {
    VAR_14 = VAR_0;
    FUNC_8(0, "%s:%.*s: master=%u, newmaster=%u, "
      "telling master to get ref "
      "for cleared out mle during "
      "migration\n", VAR_5->name,
      VAR_10, VAR_9, VAR_12,
      VAR_11);
   }
  }
  FUNC_11(&VAR_15->spinlock);
 }


 FUNC_7(VAR_7, VAR_2, VAR_5, VAR_6, VAR_9, VAR_10);
 VAR_7->new_master = VAR_11;


 VAR_7->master = VAR_12;

 FUNC_9(VAR_11, VAR_7->maybe_map);
 FUNC_1(VAR_5, VAR_7);

 return VAR_14;
}
