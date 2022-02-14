
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_lnode {int dummy; } ;
struct TYPE_2__ {void* vaddr; } ;
struct csio_ioreq {TYPE_1__ dma_buf; int wr_status; struct csio_lnode* lnode; } ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (struct csio_lnode*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct csio_lnode*,char*,int ,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct csio_hw *VAR_3, struct csio_ioreq *VAR_4)
{
 void *VAR_5;
 struct csio_lnode *VAR_6 = VAR_4->lnode;

 if (VAR_4->wr_status != VAR_1) {
  FUNC_4(VAR_6, "WR error:%x in processing fdmi rpa cmd\n",
       VAR_4->wr_status);
  FUNC_0(VAR_6, VAR_2);
 }

 VAR_5 = VAR_4->dma_buf.vaddr;
 if (FUNC_5(FUNC_3(VAR_5)) != VAR_0) {
  FUNC_4(VAR_6, "fdmi rpa cmd rejected reason %x expl %x\n",
       FUNC_2(VAR_5), FUNC_1(VAR_5));
 }
}
