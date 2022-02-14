
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int deleted; scalar_t__ key; int lock; int khtnode; int cgid; int gid; int uid; int cuid; int refcount; } ;
struct ipc_ids {int in_use; int max_idx; int ipcs_idr; int key_ht; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct ipc_ids*,struct kern_ipc_perm*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct ipc_ids *VAR_5, struct kern_ipc_perm *VAR_6, int VAR_7)
{
 kuid_t VAR_8;
 kgid_t VAR_9;
 int VAR_10, VAR_11;


 FUNC_7(&VAR_6->refcount, 1);

 if (VAR_7 > VAR_4)
  VAR_7 = VAR_4;

 if (VAR_5->in_use >= VAR_7)
  return -VAR_0;

 FUNC_1(VAR_1);

 FUNC_10(&VAR_6->lock);
 FUNC_5();
 FUNC_9(&VAR_6->lock);

 FUNC_0(&VAR_8, &VAR_9);
 VAR_6->cuid = VAR_6->uid = VAR_8;
 VAR_6->gid = VAR_6->cgid = VAR_9;

 VAR_6->deleted = 0;

 VAR_10 = FUNC_4(VAR_5, VAR_6);
 FUNC_2();

 if (VAR_10 >= 0 && VAR_6->key != VAR_2) {
  VAR_11 = FUNC_8(&VAR_5->key_ht, &VAR_6->khtnode,
          VAR_3);
  if (VAR_11 < 0) {
   FUNC_3(&VAR_5->ipcs_idr, VAR_10);
   VAR_10 = VAR_11;
  }
 }
 if (VAR_10 < 0) {
  VAR_6->deleted = 1;
  FUNC_11(&VAR_6->lock);
  FUNC_6();
  return VAR_10;
 }

 VAR_5->in_use++;
 if (VAR_10 > VAR_5->max_idx)
  VAR_5->max_idx = VAR_10;
 return VAR_10;
}
