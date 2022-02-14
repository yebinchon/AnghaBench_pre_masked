
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atp_unit {int* host_id; int* last_cmd; int** sp; TYPE_2__** id; int *** quereq; scalar_t__* in_int; scalar_t__* in_snd; scalar_t__* quend; scalar_t__* quhd; scalar_t__* wide_id; scalar_t__* active_id; TYPE_1__* pdev; } ;
struct Scsi_Host {int hostdata; } ;
struct TYPE_4__ {int devsp; int devtype; int * curr_req; int prd_bus; int prdaddr; int prd_table; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct Scsi_Host *VAR_3)
{
 struct atp_unit *VAR_4 = (struct atp_unit *)&VAR_3->hostdata;
 int VAR_5,VAR_6;
 for(VAR_5=0;VAR_5 < 2;VAR_5++) {
     for(VAR_6=0;VAR_6<16;VAR_6++) {
    VAR_4->id[VAR_5][VAR_6].prd_table = FUNC_1(&VAR_4->pdev->dev, 1024, &(VAR_4->id[VAR_5][VAR_6].prd_bus), VAR_1);
       if (!VAR_4->id[VAR_5][VAR_6].prd_table) {
        FUNC_2("atp870u_init_tables fail\n");
    FUNC_0(VAR_3);
    return -VAR_0;
   }
   VAR_4->id[VAR_5][VAR_6].prdaddr = VAR_4->id[VAR_5][VAR_6].prd_bus;
   VAR_4->id[VAR_5][VAR_6].devsp=0x20;
   VAR_4->id[VAR_5][VAR_6].devtype = 0x7f;
   VAR_4->id[VAR_5][VAR_6].curr_req = ((void*)0);
     }

     VAR_4->active_id[VAR_5] = 0;
     VAR_4->wide_id[VAR_5] = 0;
     VAR_4->host_id[VAR_5] = 0x07;
     VAR_4->quhd[VAR_5] = 0;
     VAR_4->quend[VAR_5] = 0;
     VAR_4->last_cmd[VAR_5] = 0xff;
     VAR_4->in_snd[VAR_5] = 0;
     VAR_4->in_int[VAR_5] = 0;

     for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        VAR_4->quereq[VAR_5][VAR_6] = ((void*)0);
     }
     for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
      VAR_4->id[VAR_5][VAR_6].curr_req = ((void*)0);
      VAR_4->sp[VAR_5][VAR_6] = 0x04;
     }
 }
 return 0;
}
