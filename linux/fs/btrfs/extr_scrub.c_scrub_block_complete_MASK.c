
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct scrub_block {int page_count; scalar_t__ sparity; TYPE_2__** pagev; int data_corrected; TYPE_1__* sctx; int no_io_error_seen; } ;
struct TYPE_4__ {scalar_t__ logical; } ;
struct TYPE_3__ {scalar_t__ is_dev_replace; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct scrub_block*) ;
 int FUNC_1 (struct scrub_block*) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct scrub_block*) ;

__attribute__((used)) static void FUNC_4(struct scrub_block *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1->no_io_error_seen) {
  VAR_2 = 1;
  FUNC_1(VAR_1);
 } else {





  VAR_2 = FUNC_0(VAR_1);
  if (!VAR_2 && VAR_1->sctx->is_dev_replace)
   FUNC_3(VAR_1);
 }

 if (VAR_1->sparity && VAR_2 && !VAR_1->data_corrected) {
  u64 VAR_3 = VAR_1->pagev[0]->logical;
  u64 VAR_4 = VAR_1->pagev[VAR_1->page_count - 1]->logical +
     VAR_0;

  FUNC_2(VAR_1->sparity,
      VAR_3, VAR_4 - VAR_3);
 }
}
