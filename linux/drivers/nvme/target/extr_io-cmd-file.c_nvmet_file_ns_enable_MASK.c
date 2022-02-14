
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nvmet_ns {scalar_t__ blksize_shift; scalar_t__ size; int bvec_pool; int bvec_cache; TYPE_1__* file; int device_path; int buffered_io; } ;
struct kstat {scalar_t__ size; } ;
struct bio_vec {int dummy; } ;
struct TYPE_7__ {int i_blkbits; } ;
struct TYPE_6__ {int f_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (char*,int,int ,int ,int *) ;
 int VAR_9 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct nvmet_ns*) ;
 int FUNC_8 (char*,int ,int) ;
 int VAR_11 ;
 int FUNC_9 (int *,struct kstat*,int ,int ) ;

int FUNC_10(struct nvmet_ns *VAR_12)
{
 int VAR_13 = VAR_6 | VAR_5;
 struct kstat VAR_14;
 int VAR_15;

 if (!VAR_12->buffered_io)
  VAR_13 |= VAR_4;

 VAR_12->file = FUNC_3(VAR_12->device_path, VAR_13, 0);
 if (FUNC_0(VAR_12->file)) {
  FUNC_8("failed to open file %s: (%ld)\n",
    VAR_12->device_path, FUNC_1(VAR_12->file));
  return FUNC_1(VAR_12->file);
 }

 VAR_15 = FUNC_9(&VAR_12->file->f_path,
   &VAR_14, VAR_8, VAR_0);
 if (VAR_15)
  goto err;

 VAR_12->size = VAR_14.size;




 VAR_12->blksize_shift = FUNC_6(VAR_11,
   FUNC_2(VAR_12->file)->i_blkbits, 12);

 VAR_12->bvec_cache = FUNC_4("nvmet-bvec",
   VAR_2 * sizeof(struct bio_vec),
   0, VAR_7, ((void*)0));
 if (!VAR_12->bvec_cache) {
  VAR_15 = -VAR_1;
  goto err;
 }

 VAR_12->bvec_pool = FUNC_5(VAR_3, VAR_9,
   VAR_10, VAR_12->bvec_cache);

 if (!VAR_12->bvec_pool) {
  VAR_15 = -VAR_1;
  goto err;
 }

 return VAR_15;
err:
 VAR_12->size = 0;
 VAR_12->blksize_shift = 0;
 FUNC_7(VAR_12);
 return VAR_15;
}
