
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct fc_fdmi_hba_identifier {int id; } ;
struct csio_rnode {int dummy; } ;
struct csio_lnode {int flags; struct csio_ioreq* mgmt_req; } ;
struct TYPE_2__ {void* vaddr; } ;
struct csio_ioreq {TYPE_1__ dma_buf; struct csio_rnode* rnode; struct csio_lnode* lnode; } ;


 int FUNC_0 (struct csio_lnode*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*,int ,int ,int ) ;
 int FUNC_3 (struct csio_rnode*) ;
 int FUNC_4 (struct csio_lnode*,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (struct csio_ioreq*,int ,int ,TYPE_1__*,int) ;
 int FUNC_6 (struct csio_lnode*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (void*,int ,int) ;
 int VAR_8 ;

int
FUNC_9(struct csio_lnode *VAR_9, void *VAR_10)
{
 struct csio_ioreq *VAR_11;
 struct csio_rnode *VAR_12 = (struct csio_rnode *)VAR_10;
 void *VAR_13;
 struct fc_fdmi_hba_identifier *VAR_14;
 uint32_t VAR_15;

 if (!(VAR_9->flags & VAR_0))
  return -VAR_1;

 if (!FUNC_3(VAR_12))
  FUNC_0(VAR_9, VAR_8);





 VAR_11 = VAR_9->mgmt_req;
 VAR_11->lnode = VAR_9;
 VAR_11->rnode = VAR_12;


 VAR_13 = VAR_11->dma_buf.vaddr;
 FUNC_8(VAR_13, 0, VAR_3);
 FUNC_2(VAR_13, VAR_6, VAR_5, VAR_4);
 VAR_15 = VAR_3;

 VAR_14 = (struct fc_fdmi_hba_identifier *)FUNC_1(VAR_13);
 FUNC_7(&VAR_14->id, FUNC_6(VAR_9), 8);
 VAR_15 += sizeof(*VAR_14);


 if (FUNC_5(VAR_11, VAR_7,
     VAR_2, &VAR_11->dma_buf, VAR_15)) {
  FUNC_0(VAR_9, VAR_8);
  FUNC_4(VAR_9, "Failed to issue fdmi dhba req\n");
 }

 return 0;
}
