
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct se_hba {TYPE_2__* backend; scalar_t__ hba_id; int hba_node; int hba_flags; int hba_index; int hba_access_mutex; int device_lock; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* attach_hba ) (struct se_hba*,int ) ;int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_hba* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct se_hba*) ;
 struct se_hba* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct se_hba*,int ) ;

struct se_hba *
FUNC_14(const char *VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct se_hba *VAR_10;
 int VAR_11 = 0;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  FUNC_8("Unable to allocate struct se_hba\n");
  return FUNC_0(-VAR_1);
 }

 FUNC_11(&VAR_10->device_lock);
 FUNC_6(&VAR_10->hba_access_mutex);

 VAR_10->hba_index = FUNC_9(VAR_3);
 VAR_10->hba_flags |= VAR_9;

 VAR_10->backend = FUNC_1(VAR_7);
 if (!VAR_10->backend) {
  VAR_11 = -VAR_0;
  goto out_free_hba;
 }

 VAR_11 = VAR_10->backend->ops->attach_hba(VAR_10, VAR_8);
 if (VAR_11 < 0)
  goto out_module_put;

 FUNC_10(&VAR_6);
 VAR_10->hba_id = VAR_4++;
 FUNC_4(&VAR_10->hba_node, &VAR_5);
 FUNC_12(&VAR_6);

 FUNC_7("CORE_HBA[%d] - Attached HBA to Generic Target"
   " Core\n", VAR_10->hba_id);

 return VAR_10;

out_module_put:
 FUNC_5(VAR_10->backend->ops->owner);
 VAR_10->backend = ((void*)0);
out_free_hba:
 FUNC_2(VAR_10);
 return FUNC_0(VAR_11);
}
