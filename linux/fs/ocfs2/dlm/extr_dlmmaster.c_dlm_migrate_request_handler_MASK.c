
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct o2net_msg {scalar_t__ buf; } ;
struct dlm_migrate_request {char* name; unsigned int namelen; int master; int new_master; } ;
struct dlm_master_list_entry {int dummy; } ;
struct dlm_lock_resource {int state; int spinlock; } ;
struct dlm_ctxt {int spinlock; int master_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dlm_lock_resource* FUNC_0 (struct dlm_ctxt*,char const*,unsigned int,unsigned int) ;
 int FUNC_1 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_master_list_entry*,struct dlm_master_list_entry**,char const*,unsigned int,int ,int ) ;
 int FUNC_2 (struct dlm_ctxt*) ;
 unsigned int FUNC_3 (char const*,unsigned int) ;
 int FUNC_4 (struct dlm_lock_resource*) ;
 int VAR_6 ;
 int FUNC_5 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 int FUNC_6 (struct dlm_ctxt*) ;
 int FUNC_7 (struct dlm_master_list_entry*) ;
 struct dlm_master_list_entry* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,struct dlm_master_list_entry*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct o2net_msg *VAR_7, u32 VAR_8, void *VAR_9,
    void **VAR_10)
{
 struct dlm_ctxt *VAR_11 = VAR_9;
 struct dlm_lock_resource *VAR_12 = ((void*)0);
 struct dlm_migrate_request *VAR_13 = (struct dlm_migrate_request *) VAR_7->buf;
 struct dlm_master_list_entry *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 const char *VAR_16;
 unsigned int VAR_17, VAR_18;
 int VAR_19 = 0;

 if (!FUNC_2(VAR_11))
  return 0;

 VAR_16 = VAR_13->name;
 VAR_17 = VAR_13->namelen;
 VAR_18 = FUNC_3(VAR_16, VAR_17);


 VAR_14 = FUNC_8(VAR_6, VAR_4);

 if (!VAR_14) {
  VAR_19 = -VAR_3;
  goto leave;
 }


 FUNC_11(&VAR_11->spinlock);
 VAR_12 = FUNC_0(VAR_11, VAR_16, VAR_17, VAR_18);
 if (VAR_12) {
  FUNC_11(&VAR_12->spinlock);
  if (VAR_12->state & VAR_1) {



   FUNC_12(&VAR_12->spinlock);
   FUNC_10(VAR_5, "Got a migrate request, but the "
        "lockres is marked as recovering!");
   FUNC_9(VAR_6, VAR_14);
   VAR_19 = -VAR_2;
   goto unlock;
  }
  VAR_12->state |= VAR_0;
  FUNC_12(&VAR_12->spinlock);
 }

 FUNC_11(&VAR_11->master_lock);

 VAR_19 = FUNC_1(VAR_11, VAR_12, VAR_14, &VAR_15,
        VAR_16, VAR_17,
        VAR_13->new_master,
        VAR_13->master);

 if (VAR_19 < 0)
  FUNC_9(VAR_6, VAR_14);

 FUNC_12(&VAR_11->master_lock);
unlock:
 FUNC_12(&VAR_11->spinlock);

 if (VAR_15) {

  FUNC_5(VAR_11, VAR_15);
  FUNC_7(VAR_15);
 }

 if (VAR_12)
  FUNC_4(VAR_12);
leave:
 FUNC_6(VAR_11);
 return VAR_19;
}
