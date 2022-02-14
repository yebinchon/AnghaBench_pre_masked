
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mmc_test_multiple_rw {int len; int size; int * bs; scalar_t__ do_nonblock_req; } ;
struct mmc_test_card {TYPE_3__* card; } ;
struct TYPE_6__ {TYPE_2__* host; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {void* post_req; void* pre_req; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_test_card*,struct mmc_test_multiple_rw*,int ,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct mmc_test_card *VAR_1,
         struct mmc_test_multiple_rw *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 void *VAR_5 = VAR_1->card->host->ops->pre_req;
 void *VAR_6 = VAR_1->card->host->ops->post_req;

 if (VAR_2->do_nonblock_req &&
     ((!VAR_5 && VAR_6) || (VAR_5 && !VAR_6))) {
  FUNC_1("error: only one of pre/post is defined\n");
  return -VAR_0;
 }

 for (VAR_4 = 0 ; VAR_4 < VAR_2->len && VAR_3 == 0; VAR_4++) {
  VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_2->bs[VAR_4], VAR_2->size, 0);
  if (VAR_3)
   break;
 }
 return VAR_3;
}
