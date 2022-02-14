
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io_uring_params {int flags; int sq_thread_cpu; int sq_thread_idle; } ;
struct io_ring_ctx {int flags; int * sqo_mm; void** sqo_wq; scalar_t__ sq_entries; int * sqo_thread; scalar_t__ sq_thread_idle; int sqo_wait; } ;
struct TYPE_2__ {int * mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_2 (char*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 TYPE_1__* VAR_9 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct io_ring_ctx*) ;
 int VAR_10 ;
 int * FUNC_7 (int ,struct io_ring_ctx*,char*) ;
 int * FUNC_8 (int ,struct io_ring_ctx*,int,char*) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_11 ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct io_ring_ctx *VAR_12,
          struct io_uring_params *VAR_13)
{
 int VAR_14;

 FUNC_5(&VAR_12->sqo_wait);
 FUNC_11(VAR_9->mm);
 VAR_12->sqo_mm = VAR_9->mm;

 if (VAR_12->flags & VAR_5) {
  VAR_14 = -VAR_3;
  if (!FUNC_3(VAR_0))
   goto err;

  VAR_12->sq_thread_idle = FUNC_12(VAR_13->sq_thread_idle);
  if (!VAR_12->sq_thread_idle)
   VAR_12->sq_thread_idle = VAR_4;

  if (VAR_13->flags & VAR_6) {
   int VAR_15 = VAR_13->sq_thread_cpu;

   VAR_14 = -VAR_1;
   if (VAR_15 >= VAR_11)
    goto err;
   if (!FUNC_4(VAR_15))
    goto err;

   VAR_12->sqo_thread = FUNC_8(VAR_10,
       VAR_12, VAR_15,
       "io_uring-sq");
  } else {
   VAR_12->sqo_thread = FUNC_7(VAR_10, VAR_12,
       "io_uring-sq");
  }
  if (FUNC_0(VAR_12->sqo_thread)) {
   VAR_14 = FUNC_1(VAR_12->sqo_thread);
   VAR_12->sqo_thread = ((void*)0);
   goto err;
  }
  FUNC_14(VAR_12->sqo_thread);
 } else if (VAR_13->flags & VAR_6) {

  VAR_14 = -VAR_1;
  goto err;
 }


 VAR_12->sqo_wq[0] = FUNC_2("io_ring-wq",
   VAR_8 | VAR_7,
   FUNC_9(VAR_12->sq_entries - 1, 2 * FUNC_13()));
 if (!VAR_12->sqo_wq[0]) {
  VAR_14 = -VAR_2;
  goto err;
 }
 VAR_12->sqo_wq[1] = FUNC_2("io_ring-write-wq",
      VAR_8 | VAR_7, 2);
 if (!VAR_12->sqo_wq[1]) {
  VAR_14 = -VAR_2;
  goto err;
 }

 return 0;
err:
 FUNC_6(VAR_12);
 FUNC_10(VAR_12->sqo_mm);
 VAR_12->sqo_mm = ((void*)0);
 return VAR_14;
}
