
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct fc_fdmi_port_name {int portname; } ;
struct csio_lnode {int dummy; } ;
struct TYPE_2__ {void* vaddr; } ;
struct csio_ioreq {TYPE_1__ dma_buf; int rnode; int wr_status; struct csio_lnode* lnode; } ;
struct csio_hw {int lock; } ;


 int FUNC_0 (struct csio_lnode*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct csio_lnode*,char*,...) ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (struct csio_ioreq*,int ,int ,TYPE_1__*,int) ;
 int FUNC_9 (struct csio_lnode*) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (void*,int ,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(struct csio_hw *VAR_9, struct csio_ioreq *VAR_10)
{
 struct csio_lnode *VAR_11 = VAR_10->lnode;
 void *VAR_12;
 struct fc_fdmi_port_name *VAR_13;
 uint32_t VAR_14;

 if (VAR_10->wr_status != VAR_6) {
  FUNC_7(VAR_11, "WR error:%x in processing fdmi dhba cmd\n",
       VAR_10->wr_status);
  FUNC_0(VAR_11, VAR_8);
 }

 if (!FUNC_6(VAR_10->rnode)) {
  FUNC_0(VAR_11, VAR_8);
  return;
 }
 VAR_12 = VAR_10->dma_buf.vaddr;
 if (FUNC_12(FUNC_4(VAR_12)) != VAR_5) {
  FUNC_7(VAR_11, "fdmi dhba cmd rejected reason %x expl %x\n",
       FUNC_3(VAR_12), FUNC_1(VAR_12));
 }






 FUNC_11(VAR_12, 0, VAR_1);
 FUNC_5(VAR_12, VAR_4, VAR_3, VAR_2);
 VAR_14 = VAR_1;
 VAR_13 = (struct fc_fdmi_port_name *)FUNC_2(VAR_12);
 FUNC_10(&VAR_13->portname, FUNC_9(VAR_11), 8);
 VAR_14 += sizeof(*VAR_13);


 FUNC_13(&VAR_9->lock);
 if (FUNC_8(VAR_10, VAR_7,
    VAR_0, &VAR_10->dma_buf, VAR_14)) {
  FUNC_0(VAR_11, VAR_8);
  FUNC_7(VAR_11, "Failed to issue fdmi dprt req\n");
 }
 FUNC_14(&VAR_9->lock);
}
