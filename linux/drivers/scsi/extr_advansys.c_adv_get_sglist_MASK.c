
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct scatterlist {int dummy; } ;
struct asc_board {int adv_sgblk_pool; } ;
typedef int dma_addr_t ;
struct TYPE_15__ {long sg_ptr; int sg_cnt; TYPE_1__* sg_list; } ;
struct TYPE_13__ {struct TYPE_13__* next_sgblkp; TYPE_5__ sg_block; int sg_addr; } ;
typedef TYPE_3__ adv_sgblk_t ;
struct TYPE_14__ {TYPE_3__* sgblkp; } ;
typedef TYPE_4__ adv_req_t ;
struct TYPE_16__ {void* sg_real_addr; TYPE_5__* sg_list_ptr; } ;
struct TYPE_12__ {int host; } ;
struct TYPE_11__ {void* sg_count; void* sg_addr; } ;
typedef TYPE_5__ ADV_SG_BLOCK ;
typedef TYPE_6__ ADV_SCSI_REQ_Q ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,TYPE_3__*,int ) ;
 struct scatterlist* FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scatterlist*) ;
 int FUNC_9 (struct scatterlist*) ;
 struct scatterlist* FUNC_10 (struct scatterlist*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_11(struct asc_board *VAR_6, adv_req_t *VAR_7,
        ADV_SCSI_REQ_Q *VAR_8, struct scsi_cmnd *VAR_9, int VAR_10)
{
 adv_sgblk_t *VAR_11, *VAR_12;
 struct scatterlist *VAR_13;
 int VAR_14;
 ADV_SG_BLOCK *VAR_15, *VAR_16;
 dma_addr_t VAR_17;
 int VAR_18;

 VAR_13 = FUNC_7(VAR_9);
 VAR_14 = VAR_10;
 VAR_12 = ((void*)0);
 VAR_16 = ((void*)0);
 VAR_7->sgblkp = ((void*)0);

 for (;;) {





  VAR_11 = FUNC_5(VAR_6->adv_sgblk_pool, VAR_2,
     &VAR_17);
  if (!VAR_11) {
   FUNC_0(1, "no free adv_sgblk_t\n");
   FUNC_1(VAR_9->device->host, VAR_4);





   while ((VAR_11 = VAR_7->sgblkp) != ((void*)0)) {

    VAR_7->sgblkp = VAR_11->next_sgblkp;
    VAR_11->next_sgblkp = ((void*)0);
    FUNC_6(VAR_6->adv_sgblk_pool, VAR_11,
           VAR_11->sg_addr);
   }
   return VAR_1;
  }

  VAR_11->sg_addr = VAR_17;
  VAR_11->next_sgblkp = ((void*)0);
  VAR_15 = &VAR_11->sg_block;





  if (VAR_7->sgblkp == ((void*)0)) {

   VAR_7->sgblkp = VAR_11;





   VAR_8->sg_list_ptr = VAR_15;
   VAR_8->sg_real_addr = FUNC_4(VAR_17);
  } else {

   VAR_12->next_sgblkp = VAR_11;





   VAR_16->sg_ptr = FUNC_4(VAR_17);
  }

  for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
   VAR_15->sg_list[VAR_18].sg_addr =
     FUNC_4(FUNC_8(VAR_13));
   VAR_15->sg_list[VAR_18].sg_count =
     FUNC_4(FUNC_9(VAR_13));
   FUNC_2(VAR_9->device->host, VAR_5,
          FUNC_3(FUNC_9(VAR_13), 512));

   if (--VAR_14 == 0) {



    VAR_15->sg_cnt = VAR_18 + 1;
    VAR_15->sg_ptr = 0L;
    return VAR_0;
   }
   VAR_13 = FUNC_10(VAR_13);
  }
  VAR_15->sg_cnt = VAR_3;
  VAR_16 = VAR_15;
  VAR_12 = VAR_11;
 }
}
