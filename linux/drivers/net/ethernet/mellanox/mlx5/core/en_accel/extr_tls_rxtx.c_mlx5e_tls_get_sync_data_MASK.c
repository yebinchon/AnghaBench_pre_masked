
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct tls_record_info {int * frags; } ;
struct sync_info {int nr_frags; int * frags; void* sync_len; int rcd_sn; } ;
struct TYPE_2__ {int lock; } ;
struct mlx5e_tls_offload_context_tx {TYPE_1__ base; } ;
typedef void* s32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct tls_record_info* FUNC_5 (TYPE_1__*,void*,int *) ;
 scalar_t__ FUNC_6 (struct tls_record_info*) ;
 void* FUNC_7 (struct tls_record_info*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct mlx5e_tls_offload_context_tx *VAR_1,
       u32 VAR_2, struct sync_info *VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6 = -VAR_0;
 struct tls_record_info *VAR_7;
 unsigned long VAR_8;
 s32 VAR_9;

 FUNC_3(&VAR_1->base.lock, VAR_8);
 VAR_7 = FUNC_5(&VAR_1->base, VAR_2, &VAR_3->rcd_sn);

 if (FUNC_8(!VAR_7))
  goto out;

 VAR_9 = VAR_2 - FUNC_7(VAR_7);
 VAR_3->sync_len = VAR_9;
 if (FUNC_8(VAR_9 < 0)) {
  if (FUNC_6(VAR_7))
   goto done;

  goto out;
 }

 VAR_4 = VAR_9;
 while (VAR_4 > 0) {
  VAR_3->frags[VAR_5] = VAR_7->frags[VAR_5];
  FUNC_0(&VAR_3->frags[VAR_5]);
  VAR_4 -= FUNC_1(&VAR_3->frags[VAR_5]);

  if (VAR_4 < 0)
   FUNC_2(&VAR_3->frags[VAR_5], VAR_4);

  VAR_5++;
 }
 VAR_3->nr_frags = VAR_5;
done:
 VAR_6 = 0;
out:
 FUNC_4(&VAR_1->base.lock, VAR_8);
 return VAR_6;
}
