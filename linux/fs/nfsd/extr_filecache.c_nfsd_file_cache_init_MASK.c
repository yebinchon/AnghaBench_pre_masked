
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct nfsd_file_mark {int dummy; } ;
struct nfsd_file {int dummy; } ;
struct TYPE_4__ {int nfb_lock; int nfb_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int * FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (unsigned int,int,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int * FUNC_8 (char*,int,int ,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

int
FUNC_18(void)
{
 int VAR_15 = -VAR_0;
 unsigned int VAR_16;

 FUNC_4(VAR_3, &VAR_10);

 if (VAR_7)
  return 0;

 VAR_7 = FUNC_6(VAR_2,
    sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  FUNC_14("nfsd: unable to allocate nfsd_file_hashtbl\n");
  goto out_err;
 }

 VAR_13 = FUNC_8("nfsd_file",
    sizeof(struct nfsd_file), 0, 0, ((void*)0));
 if (!VAR_13) {
  FUNC_14("nfsd: unable to create nfsd_file_slab\n");
  goto out_err;
 }

 VAR_11 = FUNC_8("nfsd_file_mark",
     sizeof(struct nfsd_file_mark), 0, 0, ((void*)0));
 if (!VAR_11) {
  FUNC_14("nfsd: unable to create nfsd_file_mark_slab\n");
  goto out_err;
 }


 VAR_15 = FUNC_13(&VAR_9);
 if (VAR_15) {
  FUNC_14("nfsd: failed to init nfsd_file_lru: %d\n", VAR_15);
  goto out_err;
 }

 VAR_15 = FUNC_15(&VAR_12);
 if (VAR_15) {
  FUNC_14("nfsd: failed to register nfsd_file_shrinker: %d\n", VAR_15);
  goto out_lru;
 }

 VAR_15 = FUNC_10(&VAR_8);
 if (VAR_15) {
  FUNC_14("nfsd: unable to register lease notifier: %d\n", VAR_15);
  goto out_shrinker;
 }

 VAR_5 = FUNC_5(&VAR_6);
 if (FUNC_2(VAR_5)) {
  FUNC_14("nfsd: unable to create fsnotify group: %ld\n",
   FUNC_3(VAR_5));
  VAR_5 = ((void*)0);
  goto out_notifier;
 }

 for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++) {
  FUNC_1(&VAR_7[VAR_16].nfb_head);
  FUNC_16(&VAR_7[VAR_16].nfb_lock);
 }

 FUNC_0(&VAR_14, VAR_4);
out:
 return VAR_15;
out_notifier:
 FUNC_11(&VAR_8);
out_shrinker:
 FUNC_17(&VAR_12);
out_lru:
 FUNC_12(&VAR_9);
out_err:
 FUNC_9(VAR_13);
 VAR_13 = ((void*)0);
 FUNC_9(VAR_11);
 VAR_11 = ((void*)0);
 FUNC_7(VAR_7);
 VAR_7 = ((void*)0);
 goto out;
}
