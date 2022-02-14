
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ newsmac; } ;
struct filter_entry {unsigned int tid; int valid; scalar_t__ pending; TYPE_2__ fs; struct filter_ctx* ctx; } ;
struct filter_ctx {int result; int tid; int completion; } ;
struct cpl_set_tcb_rpl {int cookie; } ;
struct TYPE_3__ {unsigned int nftids; unsigned int nsftids; unsigned int ftid_base; struct filter_entry* ftid_tab; } ;
struct adapter {int pdev_dev; TYPE_1__ tids; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct cpl_set_tcb_rpl const*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct adapter*,struct filter_entry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct adapter*,struct filter_entry*) ;
 int FUNC_5 (int ,char*,int,unsigned int) ;

void FUNC_6(struct adapter *VAR_3, const struct cpl_set_tcb_rpl *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_4);
 struct filter_entry *VAR_6 = ((void*)0);
 unsigned int VAR_7;
 int VAR_8;

 VAR_7 = VAR_3->tids.nftids + VAR_3->tids.nsftids;

 if (VAR_3->tids.ftid_tab) {

  VAR_8 = VAR_5 - VAR_3->tids.ftid_base;
  if (VAR_8 >= VAR_7)
   return;
  VAR_6 = &VAR_3->tids.ftid_tab[VAR_8];
  if (VAR_6->tid != VAR_5)
   return;
 }


 if (VAR_6) {
  unsigned int VAR_9 = FUNC_1(VAR_4->cookie);
  struct filter_ctx *VAR_10;




  VAR_10 = VAR_6->ctx;
  VAR_6->ctx = ((void*)0);

  if (VAR_9 == VAR_2) {



   FUNC_2(VAR_3, VAR_6);
   if (VAR_10)
    VAR_10->result = 0;
  } else if (VAR_9 == VAR_1) {
   int VAR_11 = 0;

   if (VAR_6->fs.newsmac)
    VAR_11 = FUNC_4(VAR_3, VAR_6);

   if (!VAR_11) {
    VAR_6->pending = 0;
    VAR_6->valid = 1;
    if (VAR_10) {
     VAR_10->result = 0;
     VAR_10->tid = VAR_8;
    }
   } else {
    FUNC_2(VAR_3, VAR_6);
    if (VAR_10)
     VAR_10->result = VAR_11;
   }
  } else {



   FUNC_5(VAR_3->pdev_dev, "filter %u setup failed with error %u\n",
    VAR_8, VAR_9);
   FUNC_2(VAR_3, VAR_6);
   if (VAR_10)
    VAR_10->result = -VAR_0;
  }
  if (VAR_10)
   FUNC_3(&VAR_10->completion);
 }
}
